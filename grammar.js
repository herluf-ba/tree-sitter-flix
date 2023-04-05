// Precedence rules. Its much easier to have them grouped like this.
const PREC = {
    type_function: 2,
    type_identifier: 1,
    
    field: 20,
    call: 19,
    group: 18,
    unary: 17,
    user_defined_op: 16,
    infix_function: 15,
    composition: 14,
    multiply: 13,
    add: 12,
    bitwise_shift: 11,
    comparison: 10,
    equality: 9,
    bitwise_and: 8,
    bitwise_xor: 7,
    bitwise_or: 6,
    and: 5,
    or: 4,
    cons: 3,
    append: 2,
    channel: 1
};

const one_or_more_by = (item, sep) => seq(repeat(seq(item, sep)), item)
const zero_or_more_by = (item, sep) => optional(one_or_more_by(item, sep))
// Lists of items seperated by ','
const one_or_more = (item) => one_or_more_by(item, ',')
const zero_or_more = (item) => zero_or_more_by(item, ',')

module.exports = grammar({
    name: "flix",

    extras: $ => [/\s/, $.comment],

    supertypes: $ => [
	$._expression,
	$._literal,
	$._declaration,
    ],

    rules: {
	program: ($) => seq(
	    repeat(seq($.use, optional(';'))),
	    repeat($._declaration)
	),

	_declaration: ($) => choice(
	    $.function_declaration,
	    $.enum_declaration,
	    $.module_declaration,
	),

	//////// MODULES ////////////
	module_declaration: $ => seq(
	    'mod',
	    field('name', alias($.uppercase_name, $.identifier)),
	    field('body', alias($.module_body, $.declarations))
	),
	module_body: $ => seq('{', repeat($._declaration), '}'),
	use: $ => seq(
	    'use',
	    $.use_path
	),
	use_path: $ => prec(PREC.field, seq(
	    choice( alias($.name, $.identifier), $.use_path),
	    '.',
	    choice($.use_set, alias($.name, $.identifier))
	)),
	use_set: $ => seq('{', zero_or_more(alias($.name, $.identifier)), '}'),

	//////// ENUMS //////////////
	enum_declaration: $ => seq(
	    optional($.annotations),
	    optional($.modifiers),
	    'enum', 
	    field('name', alias($.uppercase_name, $.identifier)),
	    optional(field('type_parameters', $.type_parameters)),
	    field('constructors', $.constructors),
	),

	constructors: $ => seq('{', zero_or_more($.constructor), '}'),
	constructor: $ => seq(
	    'case', 
	    alias($.uppercase_name, $.identifier), 
	    optional(field('parameters', $.constructor_parameters))
	),
	constructor_parameters: $ => seq('(', one_or_more($._type), ')'),

	//////// FUNCTIONS //////////
	function_declaration: ($) => seq(
	    optional($.annotations),
	    optional($.modifiers),
	    "def",
	    field('name', $._identifier),
	    optional(field('type_parameters', $.type_parameters)),
	    field('parameters', $.parameters),
	    optional(seq( ":", field('return_type', $._type))),
	    optional(seq('\\', field('effects', $._effects))),
	    "=",
	    field('body', $._expression)
	),
	parameters: $ => seq('(', zero_or_more($.parameter), ')'),
	parameter: $ => seq(
	    field('name', $._identifier), 
	    ':', 
	    field('type', $._type)
	),

	_effects: $ => choice($.effects, $._effect),
	effects: $ => seq('{', zero_or_more($._effect), '}'),
	_effect: $ => choice(
	    alias($.uppercase_name, $.effect),
	    alias($.lowercase_name, $.polymorphic_effect)
	),
	
	/////// TYPE PARAMETERS ///////
	type_parameters: $ => seq('[', zero_or_more($.type_parameter), ']'),
	type_parameter: $ => seq(
	    field('name', $._identifier), 
	    optional(seq(':', field('kind', $.kind)))
	),
	kind: $ => choice('Type', 'RecordRow', 'SchemaRow'),

	/////// ANNOTATIONS ///////
	annotations: $ => repeat1($.annotation),
	annotation: $ => /@[a-zA-Z][a-zA-Z0-9_]*/,

	/////// EXPRESSIONS ///////
	_expression: $ => choice(
	    $._literal,
	    $.unary_expression,
	    $.binary_expression,
	    $.grouped_expression,
	    $.tuple_expression
	    // TODO literally almost the entire language.
	),
	unary_expression: $ => prec(PREC.unary, choice(
	    seq('-', $._expression),
	    seq('+', $._expression),
	    seq('not', $._expression),
	    seq('~~~', $._expression),
	)),
	binary_expression: $ => choice(
	    prec.left(PREC.user_defined_op, 
		seq($._expression, alias($.operator_name, $.user_operator), $._expression)),
	    prec.left(PREC.composition, 
		seq($._expression, '<+>', $._expression)),
	    prec.left(PREC.infix_function, 
		seq($._expression, $.infix_function, $._expression)),
	    prec.left(PREC.or, 
		seq($._expression, 'or', $._expression)),
	    prec.left(PREC.and, 
		seq($._expression, 'and', $._expression)),
	    prec.left(PREC.bitwise_or, 
		seq($._expression, '|||', $._expression)),
	    prec.left(PREC.bitwise_xor, 
		seq($._expression, '^^^', $._expression)),
	    prec.left(PREC.bitwise_and, 
		seq($._expression, '&&&', $._expression)),
	    prec.left(PREC.equality, 
		seq($._expression, choice('==', '!=', '<=>'), $._expression)),
	    prec.left(PREC.comparison, 
		seq($._expression, choice('<=', '>=', '<', '>'), $._expression)),
	    prec.left(PREC.bitwise_shift, 
		seq($._expression, choice('>>>', '<<<'), $._expression)),
	    prec.left(PREC.multiply, 
		seq($._expression, choice('**', '*', '/', 'mod', 'rem'), $._expression)),
	    prec.left(PREC.add, 
		seq($._expression, choice('+', '-'), $._expression)),
	    prec.left(PREC.cons, 
		seq($._expression, choice('::'), $._expression)),
	    prec.left(PREC.append, 
		seq($._expression, choice(':::'), $._expression)),
	),
	grouped_expression: $ => prec(PREC.group, seq('(', $._expression, ')')),
	tuple_expression: $ => seq('(', one_or_more($._expression), ')'),
	infix_function: $ => seq('`', $._identifier, '`'),

	/////// TYPES /////////
	_type: $ => choice(
	    $.type_primitive,
	    $.type_tuple,
	    $.type_function,
	    $._type_identifier,
	),
	type_primitive: ($) => choice(
	    "Unit",
	    "Bool",
	    "Char",
	    "Float32",
	    "Float64",
	    "Int8",
	    "Int16",
	    "Int32",
	    "Int64",
	    "String",
	    "BigInt",
	    "BigDecimal",
	),
	_type_identifier: $ => choice(
	    alias($.lowercase_name, $.polymorphic_identifier),
	    $.type,
	),
	type: $ => seq(
	    alias($.uppercase_name, $.identifier), 
	    optional($.type_arguments)
	),
	type_arguments: $ => seq('[', one_or_more($._type), ']'),

	type_tuple: $ => seq( '(', one_or_more($._type), ')'),
	type_function: $ => prec.left(PREC.type_function, 
	    seq(
		$._type, 
		'->', 
		$._type,
		optional(seq('\\', field('effects', $._effects))),
	    )
	),

	/////// COMMENTS ////////////
	// TODO: Doc and block comments
	comment: $ => $.line_comment,
	line_comment: $ => token(seq( '//', /.*/)),

	/////// LITERALS //////////
	// TODO: interpreted strings
	_literal: $ => choice(
	    $.nil,
	    $.unit,
	    $.integer,
	    $.float,
	    $.boolean,
	    $.char,
	    $.string,
	    $.list,
	    $.vector,
	    $.set,
	    $.map
	),
	nil: $ => /Nil/,
	unit: $ => seq('(', ')'),
	integer: ($) => /\d+(i8|i16|i32|i64|ii)?/,
	float: ($) => /\d+\.\d+(f32|f64|ff)?/,
	boolean: ($) => choice('true', 'false'),
	char: $ => /'[a-zA-Z]'/,
	string: $ => seq( '"', repeat(choice( $._string_fragment, $._escape_sequence,)), '"',),
	list: $ => seq('List#', '{', zero_or_more($._expression), '}'),
	vector: $ => seq('Vector#', '{', zero_or_more($._expression), '}'),
	set: $ => seq('Set#', '{', zero_or_more($._expression), '}'),
	array: $ => seq('Array#', '{', zero_or_more($._expression), '}'),
	map: $ => seq('Map#', '{', zero_or_more($.map_item), '}'),
	map_item: $ => seq($._expression, '=>', $._expression),

	// Workaround to https://github.com/tree-sitter/tree-sitter/issues/1156
	// We give names to the token_ constructs containing a regexp
	// so as to obtain a node in the CST.
	_string_fragment: _ => token.immediate(prec(1, /[^"\\]+/)),
	_escape_sequence: $ =>
	  choice(
	    prec(2, token.immediate(seq('\\', /[^abfnrtvxu'\"\\\?]/))),
	    prec(1, $.escape_sequence),
	  ),
	escape_sequence: _ => token.immediate(seq(
	  '\\',
	  choice(
	    /[^xu0-7]/,
	    /[0-7]{1,3}/,
	    /x[0-9a-fA-F]{2}/,
	    /u[0-9a-fA-F]{4}/,
	    /u{[0-9a-fA-F]+}/,
	  ))),

	modifiers: $ => repeat1($.modifier),
	modifier: $ => choice(
	    'pub',
	    'inline',
	    'lawful',
	    'opaque',
	    'override',
	    'sealed'
	),

	/////// NAMES ////////
	_identifier: $ => alias($.lowercase_name, $.identifier),
	uppercase_name: $ => /_?[A-Z][a-zA-Z0-9_]*/,
	lowercase_name: $ => /_?[a-z][a-zA-Z0-9_]*/,
	name: $ => /[a-zA-Z][a-zA-Z0-9_]*/,
	operator_name: $ => /[\+\-\*<>=!&|\^\$]{2,}/,
	// TODO: Not sure how to support greek and math names
    },
});
