#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 82
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 1
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_enum = 1,
  anon_sym_def = 2,
  anon_sym_COLON = 3,
  anon_sym_EQ = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_RPAREN = 7,
  anon_sym_DASH = 8,
  anon_sym_PLUS = 9,
  anon_sym_not = 10,
  anon_sym_TILDE_TILDE_TILDE = 11,
  anon_sym_or = 12,
  anon_sym_and = 13,
  anon_sym_PIPE_PIPE_PIPE = 14,
  anon_sym_CARET_CARET_CARET = 15,
  anon_sym_AMP_AMP_AMP = 16,
  anon_sym_EQ_EQ = 17,
  anon_sym_BANG_EQ = 18,
  anon_sym_LT_EQ_GT = 19,
  anon_sym_LT_EQ = 20,
  anon_sym_GT_EQ = 21,
  anon_sym_LT = 22,
  anon_sym_GT = 23,
  anon_sym_GT_GT_GT = 24,
  anon_sym_LT_LT_LT = 25,
  anon_sym_STAR = 26,
  anon_sym_SLASH = 27,
  anon_sym_Unit = 28,
  anon_sym_Bool = 29,
  anon_sym_Char = 30,
  anon_sym_Float32 = 31,
  anon_sym_Float64 = 32,
  anon_sym_Int8 = 33,
  anon_sym_Int16 = 34,
  anon_sym_Int32 = 35,
  anon_sym_Int64 = 36,
  anon_sym_String = 37,
  anon_sym_BitInt = 38,
  anon_sym_BigDecimal = 39,
  anon_sym_DASH_GT = 40,
  sym_line_comment = 41,
  sym_nil = 42,
  sym_integer = 43,
  sym_float = 44,
  anon_sym_true = 45,
  anon_sym_false = 46,
  sym_char = 47,
  anon_sym_DQUOTE = 48,
  sym__string_fragment = 49,
  aux_sym__escape_sequence_token1 = 50,
  sym_escape_sequence = 51,
  sym_uppercase_name = 52,
  sym_lowercase_name = 53,
  sym_program = 54,
  sym__declaration = 55,
  sym_enum_declaration = 56,
  sym_function_declaration = 57,
  sym_parameters = 58,
  sym_parameter = 59,
  sym__expression = 60,
  sym_unary_expression = 61,
  sym_binary_expression = 62,
  sym_grouped_expression = 63,
  sym_tuple_expression = 64,
  sym__type = 65,
  sym_type_primitive = 66,
  sym_type_tuple = 67,
  sym_type_function = 68,
  sym__literal = 69,
  sym_unit = 70,
  sym_boolean = 71,
  sym_string = 72,
  sym__escape_sequence = 73,
  sym__type_identifier = 74,
  sym__generic_identifier = 75,
  sym__identifier = 76,
  aux_sym_program_repeat1 = 77,
  aux_sym_parameters_repeat1 = 78,
  aux_sym_tuple_expression_repeat1 = 79,
  aux_sym_type_tuple_repeat1 = 80,
  aux_sym_string_repeat1 = 81,
  alias_sym_identifier = 82,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_enum] = "enum",
  [anon_sym_def] = "def",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_not] = "not",
  [anon_sym_TILDE_TILDE_TILDE] = "~~~",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_PIPE_PIPE_PIPE] = "|||",
  [anon_sym_CARET_CARET_CARET] = "^^^",
  [anon_sym_AMP_AMP_AMP] = "&&&",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_GT_GT_GT] = ">>>",
  [anon_sym_LT_LT_LT] = "<<<",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_Unit] = "Unit",
  [anon_sym_Bool] = "Bool",
  [anon_sym_Char] = "Char",
  [anon_sym_Float32] = "Float32",
  [anon_sym_Float64] = "Float64",
  [anon_sym_Int8] = "Int8",
  [anon_sym_Int16] = "Int16",
  [anon_sym_Int32] = "Int32",
  [anon_sym_Int64] = "Int64",
  [anon_sym_String] = "String",
  [anon_sym_BitInt] = "BitInt",
  [anon_sym_BigDecimal] = "BigDecimal",
  [anon_sym_DASH_GT] = "->",
  [sym_line_comment] = "line_comment",
  [sym_nil] = "nil",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_char] = "char",
  [anon_sym_DQUOTE] = "\"",
  [sym__string_fragment] = "_string_fragment",
  [aux_sym__escape_sequence_token1] = "_escape_sequence_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_uppercase_name] = "type_identifier",
  [sym_lowercase_name] = "generic_identifier",
  [sym_program] = "program",
  [sym__declaration] = "_declaration",
  [sym_enum_declaration] = "enum_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_grouped_expression] = "grouped_expression",
  [sym_tuple_expression] = "tuple_expression",
  [sym__type] = "_type",
  [sym_type_primitive] = "type_primitive",
  [sym_type_tuple] = "type_tuple",
  [sym_type_function] = "type_function",
  [sym__literal] = "_literal",
  [sym_unit] = "unit",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [sym__escape_sequence] = "_escape_sequence",
  [sym__type_identifier] = "_type_identifier",
  [sym__generic_identifier] = "_generic_identifier",
  [sym__identifier] = "_identifier",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_tuple_expression_repeat1] = "tuple_expression_repeat1",
  [aux_sym_type_tuple_repeat1] = "type_tuple_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_identifier] = "identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_TILDE_TILDE_TILDE] = anon_sym_TILDE_TILDE_TILDE,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_PIPE_PIPE_PIPE] = anon_sym_PIPE_PIPE_PIPE,
  [anon_sym_CARET_CARET_CARET] = anon_sym_CARET_CARET_CARET,
  [anon_sym_AMP_AMP_AMP] = anon_sym_AMP_AMP_AMP,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_GT_GT] = anon_sym_GT_GT_GT,
  [anon_sym_LT_LT_LT] = anon_sym_LT_LT_LT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_Unit] = anon_sym_Unit,
  [anon_sym_Bool] = anon_sym_Bool,
  [anon_sym_Char] = anon_sym_Char,
  [anon_sym_Float32] = anon_sym_Float32,
  [anon_sym_Float64] = anon_sym_Float64,
  [anon_sym_Int8] = anon_sym_Int8,
  [anon_sym_Int16] = anon_sym_Int16,
  [anon_sym_Int32] = anon_sym_Int32,
  [anon_sym_Int64] = anon_sym_Int64,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_BitInt] = anon_sym_BitInt,
  [anon_sym_BigDecimal] = anon_sym_BigDecimal,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_line_comment] = sym_line_comment,
  [sym_nil] = sym_nil,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_char] = sym_char,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__string_fragment] = sym__string_fragment,
  [aux_sym__escape_sequence_token1] = aux_sym__escape_sequence_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_uppercase_name] = sym_uppercase_name,
  [sym_lowercase_name] = sym_lowercase_name,
  [sym_program] = sym_program,
  [sym__declaration] = sym__declaration,
  [sym_enum_declaration] = sym_enum_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_grouped_expression] = sym_grouped_expression,
  [sym_tuple_expression] = sym_tuple_expression,
  [sym__type] = sym__type,
  [sym_type_primitive] = sym_type_primitive,
  [sym_type_tuple] = sym_type_tuple,
  [sym_type_function] = sym_type_function,
  [sym__literal] = sym__literal,
  [sym_unit] = sym_unit,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym__type_identifier] = sym__type_identifier,
  [sym__generic_identifier] = sym__generic_identifier,
  [sym__identifier] = sym__identifier,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_tuple_expression_repeat1] = aux_sym_tuple_expression_repeat1,
  [aux_sym_type_tuple_repeat1] = aux_sym_type_tuple_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_identifier] = alias_sym_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_TILDE_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_CARET_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Unit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Float32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Float64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BitInt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BigDecimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__string_fragment] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_uppercase_name] = {
    .visible = true,
    .named = true,
  },
  [sym_lowercase_name] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_enum_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_grouped_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_type_primitive] = {
    .visible = true,
    .named = true,
  },
  [sym_type_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_type_function] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym__type_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__generic_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_body = 1,
  field_name = 2,
  field_parameters = 3,
  field_return_type = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_return_type] = "return_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_body, 6},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
};

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < 'a'
    ? (c < '?'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '?' || c == '\\'))
    : (c <= 'b' || (c < 'r'
      ? (c < 'n'
        ? c == 'f'
        : c <= 'n')
      : (c <= 'r' || (c >= 't' && c <= 'v')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(96);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(103);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == '<') ADVANCE(120);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '>') ADVANCE(121);
      if (lookahead == 'B') ADVANCE(45);
      if (lookahead == 'C') ADVANCE(44);
      if (lookahead == 'F') ADVANCE(54);
      if (lookahead == 'I') ADVANCE(61);
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == 'S') ADVANCE(76);
      if (lookahead == 'U') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == '^') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == '|') ADVANCE(82);
      if (lookahead == '~') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(94)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(114);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(159);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == ',') ADVANCE(103);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == 'B') ADVANCE(186);
      if (lookahead == 'C') ADVANCE(185);
      if (lookahead == 'F') ADVANCE(192);
      if (lookahead == 'I') ADVANCE(196);
      if (lookahead == 'S') ADVANCE(202);
      if (lookahead == 'U') ADVANCE(194);
      if (lookahead == '_') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(151);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(16);
      if (lookahead == '8' ||
          lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '3') ADVANCE(11);
      if (lookahead == '6') ADVANCE(17);
      if (lookahead == '8') ADVANCE(136);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(153);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(140);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(155);
      END_STATE();
    case 13:
      if (lookahead == '2') ADVANCE(132);
      END_STATE();
    case 14:
      if (lookahead == '3') ADVANCE(12);
      if (lookahead == '6') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(155);
      END_STATE();
    case 15:
      if (lookahead == '3') ADVANCE(13);
      if (lookahead == '6') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == '4') ADVANCE(153);
      END_STATE();
    case 17:
      if (lookahead == '4') ADVANCE(142);
      END_STATE();
    case 18:
      if (lookahead == '4') ADVANCE(155);
      END_STATE();
    case 19:
      if (lookahead == '4') ADVANCE(134);
      END_STATE();
    case 20:
      if (lookahead == '6') ADVANCE(153);
      END_STATE();
    case 21:
      if (lookahead == '6') ADVANCE(138);
      END_STATE();
    case 22:
      if (lookahead == '<') ADVANCE(123);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(115);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(150);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(122);
      END_STATE();
    case 27:
      if (lookahead == 'D') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 'I') ADVANCE(62);
      END_STATE();
    case 29:
      if (lookahead == '^') ADVANCE(113);
      END_STATE();
    case 30:
      if (lookahead == '^') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(98);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(27);
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(80);
      if (lookahead == 'x') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(166);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(167);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 80:
      if (lookahead == '{') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 81:
      if (lookahead == '|') ADVANCE(112);
      END_STATE();
    case 82:
      if (lookahead == '|') ADVANCE(81);
      END_STATE();
    case 83:
      if (lookahead == '}') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 84:
      if (lookahead == '~') ADVANCE(109);
      END_STATE();
    case 85:
      if (lookahead == '~') ADVANCE(84);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 91:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 92:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 93:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 94:
      if (eof) ADVANCE(96);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(103);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == '<') ADVANCE(120);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '>') ADVANCE(121);
      if (lookahead == 'B') ADVANCE(45);
      if (lookahead == 'C') ADVANCE(44);
      if (lookahead == 'F') ADVANCE(54);
      if (lookahead == 'I') ADVANCE(61);
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == 'S') ADVANCE(76);
      if (lookahead == 'U') ADVANCE(60);
      if (lookahead == '^') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == '|') ADVANCE(82);
      if (lookahead == '~') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(94)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 95:
      if (eof) ADVANCE(96);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(103);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '<') ADVANCE(120);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(121);
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == '^') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == '|') ADVANCE(82);
      if (lookahead == '~') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(95)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(115);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(150);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE_TILDE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_PIPE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_CARET_CARET_CARET);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_AMP);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(118);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(119);
      if (lookahead == '>') ADVANCE(26);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(151);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_Unit);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_Unit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_Bool);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_Bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_Char);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_Char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_Float32);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_Float32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_Float64);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_Float64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_Int8);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_Int8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_Int16);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_Int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_Int32);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_Int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_Int64);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_Int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_BitInt);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_BitInt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_BigDecimal);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_BigDecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'f') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(164);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__escape_sequence_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(168);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(167);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == '1') ADVANCE(175);
      if (lookahead == '3') ADVANCE(170);
      if (lookahead == '6') ADVANCE(173);
      if (lookahead == '8') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == '2') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == '2') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == '3') ADVANCE(171);
      if (lookahead == '6') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == '4') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == '4') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == '6') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'D') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'I') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'a') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'a') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'a') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'c') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'g') ADVANCE(176);
      if (lookahead == 't') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'g') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'h') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'i') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'i') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'i') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'l') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'l') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'l') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'm') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'n') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'n') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'n') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'n') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'o') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'o') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'r') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 'r') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 't') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 't') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 't') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 't') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (lookahead == 't') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_uppercase_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_lowercase_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 95},
  [3] = {.lex_state = 95},
  [4] = {.lex_state = 95},
  [5] = {.lex_state = 95},
  [6] = {.lex_state = 95},
  [7] = {.lex_state = 95},
  [8] = {.lex_state = 95},
  [9] = {.lex_state = 95},
  [10] = {.lex_state = 95},
  [11] = {.lex_state = 95},
  [12] = {.lex_state = 95},
  [13] = {.lex_state = 95},
  [14] = {.lex_state = 95},
  [15] = {.lex_state = 95},
  [16] = {.lex_state = 95},
  [17] = {.lex_state = 95},
  [18] = {.lex_state = 95},
  [19] = {.lex_state = 95},
  [20] = {.lex_state = 95},
  [21] = {.lex_state = 95},
  [22] = {.lex_state = 95},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 95},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 95},
  [28] = {.lex_state = 95},
  [29] = {.lex_state = 95},
  [30] = {.lex_state = 95},
  [31] = {.lex_state = 95},
  [32] = {.lex_state = 95},
  [33] = {.lex_state = 95},
  [34] = {.lex_state = 95},
  [35] = {.lex_state = 95},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 95},
  [39] = {.lex_state = 95},
  [40] = {.lex_state = 95},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 95},
  [43] = {.lex_state = 95},
  [44] = {.lex_state = 95},
  [45] = {.lex_state = 95},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 95},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_TILDE_TILDE_TILDE] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_CARET_CARET_CARET] = ACTIONS(1),
    [anon_sym_AMP_AMP_AMP] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT_LT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_Unit] = ACTIONS(1),
    [anon_sym_Bool] = ACTIONS(1),
    [anon_sym_Char] = ACTIONS(1),
    [anon_sym_Float32] = ACTIONS(1),
    [anon_sym_Float64] = ACTIONS(1),
    [anon_sym_Int8] = ACTIONS(1),
    [anon_sym_Int16] = ACTIONS(1),
    [anon_sym_Int32] = ACTIONS(1),
    [anon_sym_Int64] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_BitInt] = ACTIONS(1),
    [anon_sym_BigDecimal] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_nil] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__escape_sequence_token1] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(79),
    [sym__declaration] = STATE(49),
    [sym_enum_declaration] = STATE(63),
    [sym_function_declaration] = STATE(63),
    [aux_sym_program_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_SLASH,
    ACTIONS(13), 3,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 18,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_def,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_CARET_CARET_CARET,
      anon_sym_AMP_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
  [35] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(11), 19,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_def,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_CARET_CARET_CARET,
      anon_sym_AMP_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_STAR,
  [66] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_SLASH,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(13), 3,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 16,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_def,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_CARET_CARET_CARET,
      anon_sym_AMP_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
  [103] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_SLASH,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(21), 2,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
    ACTIONS(13), 3,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 14,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_def,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_CARET_CARET_CARET,
      anon_sym_AMP_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
  [142] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(23), 19,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_def,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_CARET_CARET_CARET,
      anon_sym_AMP_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_STAR,
  [173] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_GT_EQ,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(21), 2,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
    ACTIONS(27), 3,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(29), 3,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 10,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_def,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_CARET_CARET_CARET,
      anon_sym_AMP_AMP_AMP,
  [216] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_GT_EQ,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP_AMP,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(21), 2,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
    ACTIONS(27), 3,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(29), 3,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_def,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_CARET_CARET_CARET,
  [261] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_GT_EQ,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_CARET_CARET_CARET,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(21), 2,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
    ACTIONS(27), 3,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(29), 3,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_def,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE_PIPE_PIPE,
  [308] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_GT_EQ,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_CARET_CARET_CARET,
    ACTIONS(37), 1,
      anon_sym_PIPE_PIPE_PIPE,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(21), 2,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
    ACTIONS(27), 3,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(29), 3,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_def,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
  [357] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(39), 19,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_def,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_CARET_CARET_CARET,
      anon_sym_AMP_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_STAR,
  [388] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      aux_sym_tuple_expression_repeat1,
    STATE(44), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 3,
      sym_nil,
      sym_float,
      sym_char,
    STATE(6), 3,
      sym_unit,
      sym_boolean,
      sym_string,
    ACTIONS(47), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_TILDE_TILDE_TILDE,
    STATE(21), 5,
      sym_unary_expression,
      sym_binary_expression,
      sym_grouped_expression,
      sym_tuple_expression,
      sym__literal,
  [437] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(57), 19,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_def,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_CARET_CARET_CARET,
      anon_sym_AMP_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_STAR,
  [468] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_GT_EQ,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(21), 2,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
    ACTIONS(29), 3,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 13,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_def,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_CARET_CARET_CARET,
      anon_sym_AMP_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
  [509] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(61), 19,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_def,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_CARET_CARET_CARET,
      anon_sym_AMP_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_STAR,
  [540] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_GT_EQ,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_CARET_CARET_CARET,
    ACTIONS(37), 1,
      anon_sym_PIPE_PIPE_PIPE,
    ACTIONS(65), 1,
      anon_sym_and,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(21), 2,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
    ACTIONS(27), 3,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(29), 3,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 6,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_def,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_or,
  [591] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(69), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(67), 19,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_def,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_CARET_CARET_CARET,
      anon_sym_AMP_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_STAR,
  [622] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(73), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(71), 19,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_def,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_CARET_CARET_CARET,
      anon_sym_AMP_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_STAR,
  [653] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(77), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(75), 19,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_def,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_CARET_CARET_CARET,
      anon_sym_AMP_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_STAR,
  [684] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(79), 19,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_def,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_CARET_CARET_CARET,
      anon_sym_AMP_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_STAR,
  [715] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(85), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(83), 19,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_def,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_CARET_CARET_CARET,
      anon_sym_AMP_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_STAR,
  [746] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_tuple_expression_repeat1,
    STATE(43), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 3,
      sym_nil,
      sym_float,
      sym_char,
    STATE(6), 3,
      sym_unit,
      sym_boolean,
      sym_string,
    ACTIONS(47), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_TILDE_TILDE_TILDE,
    STATE(21), 5,
      sym_unary_expression,
      sym_binary_expression,
      sym_grouped_expression,
      sym_tuple_expression,
      sym__literal,
  [792] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_uppercase_name,
    ACTIONS(93), 1,
      sym_lowercase_name,
    STATE(24), 1,
      aux_sym_type_tuple_repeat1,
    STATE(62), 1,
      sym__type,
    STATE(60), 5,
      sym_type_primitive,
      sym_type_tuple,
      sym_type_function,
      sym__type_identifier,
      sym__generic_identifier,
    ACTIONS(89), 12,
      anon_sym_Unit,
      anon_sym_Bool,
      anon_sym_Char,
      anon_sym_Float32,
      anon_sym_Float64,
      anon_sym_Int8,
      anon_sym_Int16,
      anon_sym_Int32,
      anon_sym_Int64,
      anon_sym_String,
      anon_sym_BitInt,
      anon_sym_BigDecimal,
  [832] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_uppercase_name,
    ACTIONS(93), 1,
      sym_lowercase_name,
    STATE(26), 1,
      aux_sym_type_tuple_repeat1,
    STATE(61), 1,
      sym__type,
    STATE(60), 5,
      sym_type_primitive,
      sym_type_tuple,
      sym_type_function,
      sym__type_identifier,
      sym__generic_identifier,
    ACTIONS(89), 12,
      anon_sym_Unit,
      anon_sym_Bool,
      anon_sym_Char,
      anon_sym_Float32,
      anon_sym_Float64,
      anon_sym_Int8,
      anon_sym_Int16,
      anon_sym_Int32,
      anon_sym_Int64,
      anon_sym_String,
      anon_sym_BitInt,
      anon_sym_BigDecimal,
  [872] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_integer,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_tuple_expression_repeat1,
    STATE(45), 1,
      sym__expression,
    ACTIONS(107), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 3,
      sym_nil,
      sym_float,
      sym_char,
    STATE(6), 3,
      sym_unit,
      sym_boolean,
      sym_string,
    ACTIONS(98), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_TILDE_TILDE_TILDE,
    STATE(21), 5,
      sym_unary_expression,
      sym_binary_expression,
      sym_grouped_expression,
      sym_tuple_expression,
      sym__literal,
  [918] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_uppercase_name,
    ACTIONS(122), 1,
      sym_lowercase_name,
    STATE(26), 1,
      aux_sym_type_tuple_repeat1,
    STATE(67), 1,
      sym__type,
    STATE(60), 5,
      sym_type_primitive,
      sym_type_tuple,
      sym_type_function,
      sym__type_identifier,
      sym__generic_identifier,
    ACTIONS(116), 12,
      anon_sym_Unit,
      anon_sym_Bool,
      anon_sym_Char,
      anon_sym_Float32,
      anon_sym_Float64,
      anon_sym_Int8,
      anon_sym_Int16,
      anon_sym_Int32,
      anon_sym_Int64,
      anon_sym_String,
      anon_sym_BitInt,
      anon_sym_BigDecimal,
  [958] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 3,
      sym_nil,
      sym_float,
      sym_char,
    STATE(6), 3,
      sym_unit,
      sym_boolean,
      sym_string,
    ACTIONS(47), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_TILDE_TILDE_TILDE,
    STATE(21), 5,
      sym_unary_expression,
      sym_binary_expression,
      sym_grouped_expression,
      sym_tuple_expression,
      sym__literal,
  [1001] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_GT_EQ,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_CARET_CARET_CARET,
    ACTIONS(37), 1,
      anon_sym_PIPE_PIPE_PIPE,
    ACTIONS(65), 1,
      anon_sym_and,
    ACTIONS(127), 1,
      anon_sym_or,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(21), 2,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
    ACTIONS(27), 3,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(29), 3,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 3,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_def,
  [1052] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 3,
      sym_nil,
      sym_float,
      sym_char,
    STATE(6), 3,
      sym_unit,
      sym_boolean,
      sym_string,
    ACTIONS(47), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_TILDE_TILDE_TILDE,
    STATE(21), 5,
      sym_unary_expression,
      sym_binary_expression,
      sym_grouped_expression,
      sym_tuple_expression,
      sym__literal,
  [1095] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 3,
      sym_nil,
      sym_float,
      sym_char,
    STATE(6), 3,
      sym_unit,
      sym_boolean,
      sym_string,
    ACTIONS(47), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_TILDE_TILDE_TILDE,
    STATE(21), 5,
      sym_unary_expression,
      sym_binary_expression,
      sym_grouped_expression,
      sym_tuple_expression,
      sym__literal,
  [1138] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 3,
      sym_nil,
      sym_float,
      sym_char,
    STATE(6), 3,
      sym_unit,
      sym_boolean,
      sym_string,
    ACTIONS(47), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_TILDE_TILDE_TILDE,
    STATE(21), 5,
      sym_unary_expression,
      sym_binary_expression,
      sym_grouped_expression,
      sym_tuple_expression,
      sym__literal,
  [1181] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 3,
      sym_nil,
      sym_float,
      sym_char,
    STATE(6), 3,
      sym_unit,
      sym_boolean,
      sym_string,
    ACTIONS(47), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_TILDE_TILDE_TILDE,
    STATE(21), 5,
      sym_unary_expression,
      sym_binary_expression,
      sym_grouped_expression,
      sym_tuple_expression,
      sym__literal,
  [1224] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 3,
      sym_nil,
      sym_float,
      sym_char,
    STATE(6), 3,
      sym_unit,
      sym_boolean,
      sym_string,
    ACTIONS(47), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_TILDE_TILDE_TILDE,
    STATE(21), 5,
      sym_unary_expression,
      sym_binary_expression,
      sym_grouped_expression,
      sym_tuple_expression,
      sym__literal,
  [1267] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(3), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 3,
      sym_nil,
      sym_float,
      sym_char,
    STATE(6), 3,
      sym_unit,
      sym_boolean,
      sym_string,
    ACTIONS(47), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_TILDE_TILDE_TILDE,
    STATE(21), 5,
      sym_unary_expression,
      sym_binary_expression,
      sym_grouped_expression,
      sym_tuple_expression,
      sym__literal,
  [1310] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 3,
      sym_nil,
      sym_float,
      sym_char,
    STATE(6), 3,
      sym_unit,
      sym_boolean,
      sym_string,
    ACTIONS(47), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_TILDE_TILDE_TILDE,
    STATE(21), 5,
      sym_unary_expression,
      sym_binary_expression,
      sym_grouped_expression,
      sym_tuple_expression,
      sym__literal,
  [1353] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_uppercase_name,
    ACTIONS(93), 1,
      sym_lowercase_name,
    STATE(54), 1,
      sym__type,
    STATE(60), 5,
      sym_type_primitive,
      sym_type_tuple,
      sym_type_function,
      sym__type_identifier,
      sym__generic_identifier,
    ACTIONS(89), 12,
      anon_sym_Unit,
      anon_sym_Bool,
      anon_sym_Char,
      anon_sym_Float32,
      anon_sym_Float64,
      anon_sym_Int8,
      anon_sym_Int16,
      anon_sym_Int32,
      anon_sym_Int64,
      anon_sym_String,
      anon_sym_BitInt,
      anon_sym_BigDecimal,
  [1390] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_uppercase_name,
    ACTIONS(93), 1,
      sym_lowercase_name,
    STATE(64), 1,
      sym__type,
    STATE(60), 5,
      sym_type_primitive,
      sym_type_tuple,
      sym_type_function,
      sym__type_identifier,
      sym__generic_identifier,
    ACTIONS(89), 12,
      anon_sym_Unit,
      anon_sym_Bool,
      anon_sym_Char,
      anon_sym_Float32,
      anon_sym_Float64,
      anon_sym_Int8,
      anon_sym_Int16,
      anon_sym_Int32,
      anon_sym_Int64,
      anon_sym_String,
      anon_sym_BitInt,
      anon_sym_BigDecimal,
  [1427] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(4), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 3,
      sym_nil,
      sym_float,
      sym_char,
    STATE(6), 3,
      sym_unit,
      sym_boolean,
      sym_string,
    ACTIONS(47), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_TILDE_TILDE_TILDE,
    STATE(21), 5,
      sym_unary_expression,
      sym_binary_expression,
      sym_grouped_expression,
      sym_tuple_expression,
      sym__literal,
  [1470] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 3,
      sym_nil,
      sym_float,
      sym_char,
    STATE(6), 3,
      sym_unit,
      sym_boolean,
      sym_string,
    ACTIONS(47), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_TILDE_TILDE_TILDE,
    STATE(21), 5,
      sym_unary_expression,
      sym_binary_expression,
      sym_grouped_expression,
      sym_tuple_expression,
      sym__literal,
  [1513] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 3,
      sym_nil,
      sym_float,
      sym_char,
    STATE(6), 3,
      sym_unit,
      sym_boolean,
      sym_string,
    ACTIONS(47), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_TILDE_TILDE_TILDE,
    STATE(21), 5,
      sym_unary_expression,
      sym_binary_expression,
      sym_grouped_expression,
      sym_tuple_expression,
      sym__literal,
  [1556] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_uppercase_name,
    ACTIONS(93), 1,
      sym_lowercase_name,
    STATE(70), 1,
      sym__type,
    STATE(60), 5,
      sym_type_primitive,
      sym_type_tuple,
      sym_type_function,
      sym__type_identifier,
      sym__generic_identifier,
    ACTIONS(89), 12,
      anon_sym_Unit,
      anon_sym_Bool,
      anon_sym_Char,
      anon_sym_Float32,
      anon_sym_Float64,
      anon_sym_Int8,
      anon_sym_Int16,
      anon_sym_Int32,
      anon_sym_Int64,
      anon_sym_String,
      anon_sym_BitInt,
      anon_sym_BigDecimal,
  [1593] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 3,
      sym_nil,
      sym_float,
      sym_char,
    STATE(6), 3,
      sym_unit,
      sym_boolean,
      sym_string,
    ACTIONS(47), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_TILDE_TILDE_TILDE,
    STATE(21), 5,
      sym_unary_expression,
      sym_binary_expression,
      sym_grouped_expression,
      sym_tuple_expression,
      sym__literal,
  [1636] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_GT_EQ,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_CARET_CARET_CARET,
    ACTIONS(37), 1,
      anon_sym_PIPE_PIPE_PIPE,
    ACTIONS(65), 1,
      anon_sym_and,
    ACTIONS(127), 1,
      anon_sym_or,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(21), 2,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
    ACTIONS(27), 3,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(29), 3,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
  [1688] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_GT_EQ,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_CARET_CARET_CARET,
    ACTIONS(37), 1,
      anon_sym_PIPE_PIPE_PIPE,
    ACTIONS(65), 1,
      anon_sym_and,
    ACTIONS(127), 1,
      anon_sym_or,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(21), 2,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
    ACTIONS(27), 3,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(29), 3,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
  [1740] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_GT_EQ,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_CARET_CARET_CARET,
    ACTIONS(37), 1,
      anon_sym_PIPE_PIPE_PIPE,
    ACTIONS(65), 1,
      anon_sym_and,
    ACTIONS(127), 1,
      anon_sym_or,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(21), 2,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT_LT,
    ACTIONS(27), 3,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(29), 3,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
  [1789] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(135), 2,
      anon_sym_LPAREN,
      sym_lowercase_name,
    ACTIONS(137), 13,
      anon_sym_Unit,
      anon_sym_Bool,
      anon_sym_Char,
      anon_sym_Float32,
      anon_sym_Float64,
      anon_sym_Int8,
      anon_sym_Int16,
      anon_sym_Int32,
      anon_sym_Int64,
      anon_sym_String,
      anon_sym_BitInt,
      anon_sym_BigDecimal,
      sym_uppercase_name,
  [1812] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(141), 1,
      sym_integer,
    ACTIONS(139), 11,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_TILDE_TILDE_TILDE,
      sym_nil,
      sym_float,
      anon_sym_true,
      anon_sym_false,
      sym_char,
      anon_sym_DQUOTE,
  [1832] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      anon_sym_enum,
    ACTIONS(148), 1,
      anon_sym_def,
    STATE(48), 2,
      sym__declaration,
      aux_sym_program_repeat1,
    STATE(63), 2,
      sym_enum_declaration,
      sym_function_declaration,
  [1853] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_enum,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    STATE(48), 2,
      sym__declaration,
      aux_sym_program_repeat1,
    STATE(63), 2,
      sym_enum_declaration,
      sym_function_declaration,
  [1874] = 5,
    ACTIONS(153), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym__string_fragment,
    ACTIONS(159), 2,
      aux_sym__escape_sequence_token1,
      sym_escape_sequence,
    STATE(51), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1892] = 5,
    ACTIONS(153), 1,
      sym_line_comment,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym__string_fragment,
    ACTIONS(165), 2,
      aux_sym__escape_sequence_token1,
      sym_escape_sequence,
    STATE(52), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1910] = 5,
    ACTIONS(153), 1,
      sym_line_comment,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      sym__string_fragment,
    ACTIONS(172), 2,
      aux_sym__escape_sequence_token1,
      sym_escape_sequence,
    STATE(52), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1928] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(177), 1,
      sym_lowercase_name,
    STATE(59), 1,
      aux_sym_parameters_repeat1,
    STATE(71), 1,
      sym_parameter,
    STATE(74), 1,
      sym__identifier,
  [1947] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(179), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [1957] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(181), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [1967] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(183), 1,
      sym_lowercase_name,
    STATE(56), 1,
      aux_sym_parameters_repeat1,
    STATE(74), 1,
      sym__identifier,
    STATE(75), 1,
      sym_parameter,
  [1983] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [1993] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(188), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [2003] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(177), 1,
      sym_lowercase_name,
    STATE(56), 1,
      aux_sym_parameters_repeat1,
    STATE(68), 1,
      sym_parameter,
    STATE(74), 1,
      sym__identifier,
  [2019] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(190), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [2029] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
  [2042] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
  [2055] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(200), 3,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_def,
  [2064] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(202), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2075] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(204), 3,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_def,
  [2084] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_parameters,
  [2094] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
  [2104] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
  [2114] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(212), 1,
      sym_uppercase_name,
    STATE(65), 1,
      sym__type_identifier,
  [2124] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(214), 1,
      anon_sym_EQ,
  [2134] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
  [2144] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(177), 1,
      sym_lowercase_name,
    STATE(66), 1,
      sym__identifier,
  [2154] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(218), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [2162] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(220), 1,
      anon_sym_COLON,
  [2169] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(208), 1,
      anon_sym_COMMA,
  [2176] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(222), 1,
      anon_sym_COLON,
  [2183] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 1,
      sym_lowercase_name,
  [2190] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(226), 1,
      anon_sym_COLON,
  [2197] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
  [2204] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(230), 1,
      anon_sym_COLON,
  [2211] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(232), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 103,
  [SMALL_STATE(6)] = 142,
  [SMALL_STATE(7)] = 173,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 261,
  [SMALL_STATE(10)] = 308,
  [SMALL_STATE(11)] = 357,
  [SMALL_STATE(12)] = 388,
  [SMALL_STATE(13)] = 437,
  [SMALL_STATE(14)] = 468,
  [SMALL_STATE(15)] = 509,
  [SMALL_STATE(16)] = 540,
  [SMALL_STATE(17)] = 591,
  [SMALL_STATE(18)] = 622,
  [SMALL_STATE(19)] = 653,
  [SMALL_STATE(20)] = 684,
  [SMALL_STATE(21)] = 715,
  [SMALL_STATE(22)] = 746,
  [SMALL_STATE(23)] = 792,
  [SMALL_STATE(24)] = 832,
  [SMALL_STATE(25)] = 872,
  [SMALL_STATE(26)] = 918,
  [SMALL_STATE(27)] = 958,
  [SMALL_STATE(28)] = 1001,
  [SMALL_STATE(29)] = 1052,
  [SMALL_STATE(30)] = 1095,
  [SMALL_STATE(31)] = 1138,
  [SMALL_STATE(32)] = 1181,
  [SMALL_STATE(33)] = 1224,
  [SMALL_STATE(34)] = 1267,
  [SMALL_STATE(35)] = 1310,
  [SMALL_STATE(36)] = 1353,
  [SMALL_STATE(37)] = 1390,
  [SMALL_STATE(38)] = 1427,
  [SMALL_STATE(39)] = 1470,
  [SMALL_STATE(40)] = 1513,
  [SMALL_STATE(41)] = 1556,
  [SMALL_STATE(42)] = 1593,
  [SMALL_STATE(43)] = 1636,
  [SMALL_STATE(44)] = 1688,
  [SMALL_STATE(45)] = 1740,
  [SMALL_STATE(46)] = 1789,
  [SMALL_STATE(47)] = 1812,
  [SMALL_STATE(48)] = 1832,
  [SMALL_STATE(49)] = 1853,
  [SMALL_STATE(50)] = 1874,
  [SMALL_STATE(51)] = 1892,
  [SMALL_STATE(52)] = 1910,
  [SMALL_STATE(53)] = 1928,
  [SMALL_STATE(54)] = 1947,
  [SMALL_STATE(55)] = 1957,
  [SMALL_STATE(56)] = 1967,
  [SMALL_STATE(57)] = 1983,
  [SMALL_STATE(58)] = 1993,
  [SMALL_STATE(59)] = 2003,
  [SMALL_STATE(60)] = 2019,
  [SMALL_STATE(61)] = 2029,
  [SMALL_STATE(62)] = 2042,
  [SMALL_STATE(63)] = 2055,
  [SMALL_STATE(64)] = 2064,
  [SMALL_STATE(65)] = 2075,
  [SMALL_STATE(66)] = 2084,
  [SMALL_STATE(67)] = 2094,
  [SMALL_STATE(68)] = 2104,
  [SMALL_STATE(69)] = 2114,
  [SMALL_STATE(70)] = 2124,
  [SMALL_STATE(71)] = 2134,
  [SMALL_STATE(72)] = 2144,
  [SMALL_STATE(73)] = 2154,
  [SMALL_STATE(74)] = 2162,
  [SMALL_STATE(75)] = 2169,
  [SMALL_STATE(76)] = 2176,
  [SMALL_STATE(77)] = 2183,
  [SMALL_STATE(78)] = 2190,
  [SMALL_STATE(79)] = 2197,
  [SMALL_STATE(80)] = 2204,
  [SMALL_STATE(81)] = 2211,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 4),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grouped_expression, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grouped_expression, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_expression_repeat1, 2), SHIFT_REPEAT(12),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_expression_repeat1, 2), SHIFT_REPEAT(40),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_expression_repeat1, 2), SHIFT_REPEAT(6),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_expression_repeat1, 2), SHIFT_REPEAT(6),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_expression_repeat1, 2), SHIFT_REPEAT(19),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_expression_repeat1, 2), SHIFT_REPEAT(50),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_tuple_repeat1, 2), SHIFT_REPEAT(23),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_tuple_repeat1, 2), SHIFT_REPEAT(57),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_tuple_repeat1, 2), SHIFT_REPEAT(60),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_tuple_repeat1, 2), SHIFT_REPEAT(60),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, .production_id = 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_tuple_repeat1, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_tuple_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_expression_repeat1, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tuple_expression_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(69),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(72),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(52),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(52),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_tuple, 4),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(73),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_primitive, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_tuple, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 2, .production_id = 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1, .production_id = 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [228] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_flix(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
