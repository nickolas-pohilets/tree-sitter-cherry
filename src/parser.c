#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_var = 1,
  anon_sym_let = 2,
  anon_sym_COLON = 3,
  anon_sym_EQ = 4,
  anon_sym_func = 5,
  anon_sym_DASH_GT = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_Bool = 9,
  anon_sym_String = 10,
  anon_sym_Int = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_return = 16,
  anon_sym_SEMI = 17,
  sym_identifier = 18,
  anon_sym_true = 19,
  anon_sym_false = 20,
  sym_integer_literal = 21,
  sym__newline = 22,
  sym__coma = 23,
  sym_multiline_comment = 24,
  sym_unterminated_multiline_comment = 25,
  sym_source_file = 26,
  sym__declaration = 27,
  sym_variable_declaration = 28,
  sym_function_declaration = 29,
  sym_parameter_list = 30,
  sym__type = 31,
  sym_builtin_type = 32,
  sym_array_type = 33,
  sym_dictionary_type = 34,
  sym_block = 35,
  sym__statement = 36,
  sym_return_statement = 37,
  sym__expression = 38,
  sym__literal = 39,
  sym_bool_literal = 40,
  sym_array_literal = 41,
  sym__array_literal_row = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_block_repeat1 = 44,
  aux_sym_array_literal_repeat1 = 45,
  aux_sym__array_literal_row_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_var] = "var",
  [anon_sym_let] = "let",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_func] = "func",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_Bool] = "Bool",
  [anon_sym_String] = "String",
  [anon_sym_Int] = "Int",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_SEMI] = ";",
  [sym_identifier] = "identifier",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer_literal] = "integer_literal",
  [sym__newline] = "_newline",
  [sym__coma] = "_coma",
  [sym_multiline_comment] = "multiline_comment",
  [sym_unterminated_multiline_comment] = "unterminated_multiline_comment",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym__type] = "_type",
  [sym_builtin_type] = "builtin_type",
  [sym_array_type] = "array_type",
  [sym_dictionary_type] = "dictionary_type",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym__literal] = "_literal",
  [sym_bool_literal] = "bool_literal",
  [sym_array_literal] = "array_literal",
  [sym__array_literal_row] = "_array_literal_row",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_array_literal_repeat1] = "array_literal_repeat1",
  [aux_sym__array_literal_row_repeat1] = "_array_literal_row_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_Bool] = anon_sym_Bool,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_Int] = anon_sym_Int,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_identifier] = sym_identifier,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer_literal] = sym_integer_literal,
  [sym__newline] = sym__newline,
  [sym__coma] = sym__coma,
  [sym_multiline_comment] = sym_multiline_comment,
  [sym_unterminated_multiline_comment] = sym_unterminated_multiline_comment,
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym__type] = sym__type,
  [sym_builtin_type] = sym_builtin_type,
  [sym_array_type] = sym_array_type,
  [sym_dictionary_type] = sym_dictionary_type,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [sym__literal] = sym__literal,
  [sym_bool_literal] = sym_bool_literal,
  [sym_array_literal] = sym_array_literal,
  [sym__array_literal_row] = sym__array_literal_row,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_array_literal_repeat1] = aux_sym_array_literal_repeat1,
  [aux_sym__array_literal_row_repeat1] = aux_sym__array_literal_row_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
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
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
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
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__coma] = {
    .visible = false,
    .named = true,
  },
  [sym_multiline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_unterminated_multiline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_builtin_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_array_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__array_literal_row] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__array_literal_row_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_initial_value = 2,
  field_name = 3,
  field_params = 4,
  field_type = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_initial_value] = "initial_value",
  [field_name] = "name",
  [field_params] = "params",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 3},
  [6] = {.index = 11, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1},
    {field_type, 3},
  [3] =
    {field_initial_value, 3},
    {field_name, 1},
  [5] =
    {field_body, 3},
    {field_name, 1},
    {field_params, 2},
  [8] =
    {field_initial_value, 5},
    {field_name, 1},
    {field_type, 3},
  [11] =
    {field_body, 5},
    {field_name, 1},
    {field_params, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == 'B') ADVANCE(18);
      if (lookahead == 'I') ADVANCE(17);
      if (lookahead == 'S') ADVANCE(27);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == 'v') ADVANCE(4);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 2:
      if (lookahead == '>') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_Bool);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__coma);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(66);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 31},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 31},
};

enum {
  ts_external_token_multiline_comment = 0,
  ts_external_token_unterminated_multiline_comment = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_multiline_comment] = sym_multiline_comment,
  [ts_external_token_unterminated_multiline_comment] = sym_unterminated_multiline_comment,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_multiline_comment] = true,
    [ts_external_token_unterminated_multiline_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_Bool] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__coma] = ACTIONS(1),
    [sym_multiline_comment] = ACTIONS(1),
    [sym_unterminated_multiline_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(52),
    [sym__declaration] = STATE(49),
    [sym_variable_declaration] = STATE(49),
    [sym_function_declaration] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [sym__newline] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(14), 1,
      anon_sym_RBRACK,
    ACTIONS(16), 1,
      sym_identifier,
    ACTIONS(22), 1,
      sym_integer_literal,
    ACTIONS(25), 1,
      sym__newline,
    STATE(2), 1,
      aux_sym_array_literal_repeat1,
    STATE(41), 1,
      sym__array_literal_row,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [32] = 9,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(30), 1,
      anon_sym_RBRACK,
    ACTIONS(32), 1,
      sym_identifier,
    ACTIONS(36), 1,
      sym_integer_literal,
    ACTIONS(38), 1,
      sym__newline,
    STATE(2), 1,
      aux_sym_array_literal_repeat1,
    STATE(41), 1,
      sym__array_literal_row,
    ACTIONS(34), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [64] = 9,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(32), 1,
      sym_identifier,
    ACTIONS(36), 1,
      sym_integer_literal,
    ACTIONS(40), 1,
      anon_sym_RBRACK,
    ACTIONS(42), 1,
      sym__newline,
    STATE(3), 1,
      aux_sym_array_literal_repeat1,
    STATE(41), 1,
      sym__array_literal_row,
    ACTIONS(34), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [96] = 6,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      sym_identifier,
    ACTIONS(46), 1,
      sym_integer_literal,
    ACTIONS(48), 1,
      sym__newline,
    ACTIONS(34), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [119] = 6,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      sym_identifier,
    ACTIONS(46), 1,
      sym_integer_literal,
    ACTIONS(50), 1,
      sym__newline,
    ACTIONS(34), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [142] = 6,
    ACTIONS(7), 1,
      anon_sym_func,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      sym__newline,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 2,
      anon_sym_var,
      anon_sym_let,
    STATE(49), 3,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
  [164] = 6,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_func,
    ACTIONS(64), 1,
      sym__newline,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(58), 2,
      anon_sym_var,
      anon_sym_let,
    STATE(49), 3,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
  [186] = 5,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_integer_literal,
    ACTIONS(34), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [206] = 5,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      sym_identifier,
    ACTIONS(46), 1,
      sym_integer_literal,
    ACTIONS(34), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [226] = 5,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      sym_integer_literal,
    ACTIONS(34), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [246] = 5,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      sym_integer_literal,
    ACTIONS(34), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [266] = 3,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 3,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Int,
    STATE(39), 4,
      sym__type,
      sym_builtin_type,
      sym_array_type,
      sym_dictionary_type,
  [281] = 3,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 3,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Int,
    STATE(33), 4,
      sym__type,
      sym_builtin_type,
      sym_array_type,
      sym_dictionary_type,
  [296] = 3,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 3,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Int,
    STATE(47), 4,
      sym__type,
      sym_builtin_type,
      sym_array_type,
      sym_dictionary_type,
  [311] = 3,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 3,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Int,
    STATE(35), 4,
      sym__type,
      sym_builtin_type,
      sym_array_type,
      sym_dictionary_type,
  [326] = 2,
    ACTIONS(83), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(14), 4,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_integer_literal,
      sym__newline,
  [338] = 1,
    ACTIONS(56), 5,
      ts_builtin_sym_end,
      anon_sym_var,
      anon_sym_let,
      anon_sym_func,
      sym__newline,
  [346] = 1,
    ACTIONS(85), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym__newline,
  [354] = 1,
    ACTIONS(87), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym__newline,
  [362] = 3,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 1,
      anon_sym_return,
    STATE(21), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [374] = 3,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(96), 1,
      anon_sym_return,
    STATE(21), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [386] = 3,
    ACTIONS(96), 1,
      anon_sym_return,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(22), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [398] = 1,
    ACTIONS(100), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym__newline,
  [406] = 3,
    ACTIONS(102), 1,
      anon_sym_DASH_GT,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_block,
  [416] = 2,
    ACTIONS(108), 1,
      sym__coma,
    ACTIONS(106), 2,
      anon_sym_SEMI,
      sym__newline,
  [424] = 3,
    ACTIONS(110), 1,
      sym__newline,
    ACTIONS(112), 1,
      sym__coma,
    STATE(32), 1,
      aux_sym__array_literal_row_repeat1,
  [434] = 3,
    ACTIONS(114), 1,
      sym__newline,
    ACTIONS(116), 1,
      sym__coma,
    STATE(28), 1,
      aux_sym__array_literal_row_repeat1,
  [444] = 3,
    ACTIONS(119), 1,
      anon_sym_COLON,
    ACTIONS(121), 1,
      anon_sym_EQ,
    ACTIONS(123), 1,
      sym__newline,
  [454] = 2,
    ACTIONS(127), 1,
      sym__coma,
    ACTIONS(125), 2,
      anon_sym_SEMI,
      sym__newline,
  [462] = 2,
    ACTIONS(131), 1,
      sym__coma,
    ACTIONS(129), 2,
      anon_sym_SEMI,
      sym__newline,
  [470] = 3,
    ACTIONS(50), 1,
      sym__newline,
    ACTIONS(133), 1,
      sym__coma,
    STATE(28), 1,
      aux_sym__array_literal_row_repeat1,
  [480] = 2,
    ACTIONS(135), 1,
      anon_sym_COLON,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
  [487] = 1,
    ACTIONS(139), 2,
      anon_sym_RBRACE,
      anon_sym_return,
  [492] = 2,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_block,
  [499] = 2,
    ACTIONS(114), 1,
      sym__newline,
    ACTIONS(141), 1,
      sym__coma,
  [506] = 1,
    ACTIONS(143), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [511] = 2,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_parameter_list,
  [518] = 2,
    ACTIONS(147), 1,
      anon_sym_EQ,
    ACTIONS(149), 1,
      sym__newline,
  [525] = 1,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
  [529] = 1,
    ACTIONS(153), 1,
      sym__newline,
  [533] = 1,
    ACTIONS(155), 1,
      sym__newline,
  [537] = 1,
    ACTIONS(157), 1,
      sym__newline,
  [541] = 1,
    ACTIONS(159), 1,
      anon_sym_SEMI,
  [545] = 1,
    ACTIONS(161), 1,
      sym__newline,
  [549] = 1,
    ACTIONS(163), 1,
      sym__newline,
  [553] = 1,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
  [557] = 1,
    ACTIONS(167), 1,
      sym__newline,
  [561] = 1,
    ACTIONS(169), 1,
      sym__newline,
  [565] = 1,
    ACTIONS(171), 1,
      sym__newline,
  [569] = 1,
    ACTIONS(173), 1,
      sym_identifier,
  [573] = 1,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
  [577] = 1,
    ACTIONS(177), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 119,
  [SMALL_STATE(7)] = 142,
  [SMALL_STATE(8)] = 164,
  [SMALL_STATE(9)] = 186,
  [SMALL_STATE(10)] = 206,
  [SMALL_STATE(11)] = 226,
  [SMALL_STATE(12)] = 246,
  [SMALL_STATE(13)] = 266,
  [SMALL_STATE(14)] = 281,
  [SMALL_STATE(15)] = 296,
  [SMALL_STATE(16)] = 311,
  [SMALL_STATE(17)] = 326,
  [SMALL_STATE(18)] = 338,
  [SMALL_STATE(19)] = 346,
  [SMALL_STATE(20)] = 354,
  [SMALL_STATE(21)] = 362,
  [SMALL_STATE(22)] = 374,
  [SMALL_STATE(23)] = 386,
  [SMALL_STATE(24)] = 398,
  [SMALL_STATE(25)] = 406,
  [SMALL_STATE(26)] = 416,
  [SMALL_STATE(27)] = 424,
  [SMALL_STATE(28)] = 434,
  [SMALL_STATE(29)] = 444,
  [SMALL_STATE(30)] = 454,
  [SMALL_STATE(31)] = 462,
  [SMALL_STATE(32)] = 470,
  [SMALL_STATE(33)] = 480,
  [SMALL_STATE(34)] = 487,
  [SMALL_STATE(35)] = 492,
  [SMALL_STATE(36)] = 499,
  [SMALL_STATE(37)] = 506,
  [SMALL_STATE(38)] = 511,
  [SMALL_STATE(39)] = 518,
  [SMALL_STATE(40)] = 525,
  [SMALL_STATE(41)] = 529,
  [SMALL_STATE(42)] = 533,
  [SMALL_STATE(43)] = 537,
  [SMALL_STATE(44)] = 541,
  [SMALL_STATE(45)] = 545,
  [SMALL_STATE(46)] = 549,
  [SMALL_STATE(47)] = 553,
  [SMALL_STATE(48)] = 557,
  [SMALL_STATE(49)] = 561,
  [SMALL_STATE(50)] = 565,
  [SMALL_STATE(51)] = 569,
  [SMALL_STATE(52)] = 573,
  [SMALL_STATE(53)] = 577,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(4),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(27),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(30),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(27),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_literal_row, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_literal_row, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_type, 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_literal_row, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__array_literal_row_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__array_literal_row_repeat1, 2), SHIFT_REPEAT(10),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__array_literal_row_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 5),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 6),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [175] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_Cherry_external_scanner_create(void);
void tree_sitter_Cherry_external_scanner_destroy(void *);
bool tree_sitter_Cherry_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_Cherry_external_scanner_serialize(void *, char *);
void tree_sitter_Cherry_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Cherry(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_Cherry_external_scanner_create,
      tree_sitter_Cherry_external_scanner_destroy,
      tree_sitter_Cherry_external_scanner_scan,
      tree_sitter_Cherry_external_scanner_serialize,
      tree_sitter_Cherry_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
