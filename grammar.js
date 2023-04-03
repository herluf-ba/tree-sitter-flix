// Precedence rules. Its much easier to have them grouped like this.
const PREC = {
    type_function: 2,
    type_identifier: 1,

    group: 16,
    unary: 15,
    user_defined_op: 14,
    infix_function: 13,
    composition: 12,
    multiply: 11,
    add: 10,
    bitwise_shift: 9,
    comparison: 8,
    equality: 7,
    bitwise_and: 6,
    bitwise_xor: 5,
    bitwise_or: 4,
    and: 3,
    or: 2,
    channel: 1
};

// Lists of items seperated by ','
const one_or_more = (item) => seq(repeat(seq(item, ',')), item)
const zero_or_more = (item) => optional(one_or_more(item))

module.exports = grammar({
    name: "flix",

    // TODO: Block comments
    extras: $ => [/\s/, $.line_comment],

    supertypes: $ => [
      $._expression,
      $._type,
      $._literal,
      $._declaration,
    ],

    rules: {
	program: ($) => repeat($._declaration),

	_declaration: ($) => choice(
	    $.function_declaration,
	    $.enum_declaration,
	    // TODO: enums, type classes, modules, comments, use's
	),

	//////// ENUMS //////////////
	enum_declaration: $ => seq(
	    'enum', 
	    field('name', $._type_identifier),
	),

	//////// FUNCTIONS //////////
	function_declaration: ($) => seq(
	    "def",
	    field('name', $._identifier),
	    field('parameters', $.parameters),
	    ":",
	    field('return_type', $._type),
	    "=",
	    field('body', $._expression)
	),
	parameters: $ => seq('(', zero_or_more($.parameter), ')'),
	parameter: $ => seq($._identifier, ':', $._type),

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
		seq($._expression, choice('*', '/'), $._expression)),
	    prec.left(PREC.add, 
		seq($._expression, choice('+', '-'), $._expression)),
	),
	grouped_expression: $ => prec(PREC.group, seq('(', $._expression, ')')),
	tuple_expression: $ => seq('(', one_or_more($._expression), ')'),

	/////// TYPES /////////
	_type: $ => choice(
	    $.type_primitive,
	    $.type_tuple,
	    $.type_function,
	    $._type_identifier,
	    $._generic_identifier,
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
	    "BitInt",
	    "BigDecimal",
	),
	type_tuple: $ => seq( '(', one_or_more($._type), ')'),
	type_function: $ => prec.left(PREC.type_function, 
	    seq( $._type, '->', $._type)),

	/////// COMMENTS ////////////
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
	    $.string
	),
	nil: $ => /Nil/,
	unit: $ => seq('(', ')'),
	integer: ($) => /\d+(i8|i16|i32|i64|ii)?/,
	float: ($) => /\d+\.\d+(f32|f64|ff)?/,
	boolean: ($) => choice('true', 'false'),
	char: $ => /'[a-zA-Z]'/,
	string: $ => seq( '"', repeat(choice( $._string_fragment, $._escape_sequence,)), '"',),

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

	/////// NAMES ////////
	_type_identifier: $ => alias($.uppercase_name, $.type_identifier),
	_generic_identifier: $ => alias($.lowercase_name, $.generic_identifier),
	_identifier: $ => alias($.lowercase_name, $.identifier),
	uppercase_name: $ => /_?[A-Z][a-zA-Z0-9_]*/,
	lowercase_name: $ => /_?[a-z][a-zA-Z0-9_]*/,
	operator_name: $ => /[\+\-\*<>=!&|\^\$]{2,}/,
	// TODO: Not sure how to support greek and math names
    },
});
