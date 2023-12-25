#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
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
  sym__coma = 22,
  sym_source_file = 23,
  sym__declaration = 24,
  sym_variable_declaration = 25,
  sym_function_declaration = 26,
  sym_parameter_list = 27,
  sym__type = 28,
  sym_builtin_type = 29,
  sym_array_type = 30,
  sym_dictionary_type = 31,
  sym_block = 32,
  sym__statement = 33,
  sym_return_statement = 34,
  sym__expression = 35,
  sym__literal = 36,
  sym_bool_literal = 37,
  sym_array_literal = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_block_repeat1 = 40,
  aux_sym_array_literal_repeat1 = 41,
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
  [sym__coma] = "_coma",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_array_literal_repeat1] = "array_literal_repeat1",
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
  [sym__coma] = sym__coma,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_array_literal_repeat1] = aux_sym_array_literal_repeat1,
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
  [sym__coma] = {
    .visible = false,
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
  [4] = 3,
  [5] = 2,
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
  [43] = 27,
  [44] = 25,
  [45] = 24,
  [46] = 21,
  [47] = 40,
  [48] = 37,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == 'B') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(18);
      if (lookahead == 'S') ADVANCE(28);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'v') ADVANCE(5);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_Bool);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__coma);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == ',') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__coma);
      if (lookahead == '\n') ADVANCE(66);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
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
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 32},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 32},
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
  },
  [1] = {
    [sym_source_file] = STATE(54),
    [sym__declaration] = STATE(16),
    [sym_variable_declaration] = STATE(16),
    [sym_function_declaration] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_RBRACK,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_integer_literal,
    STATE(6), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [26] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_RBRACK,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_integer_literal,
    STATE(2), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [52] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_RBRACK,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      sym_integer_literal,
    STATE(5), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [78] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym_integer_literal,
    STATE(6), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(37), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [104] = 7,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(40), 1,
      anon_sym_RBRACK,
    ACTIONS(42), 1,
      sym_identifier,
    ACTIONS(48), 1,
      sym_integer_literal,
    STATE(6), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [130] = 5,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_integer_literal,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(30), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [150] = 5,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [170] = 5,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_integer_literal,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [190] = 4,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      anon_sym_func,
    ACTIONS(69), 2,
      anon_sym_var,
      anon_sym_let,
    STATE(10), 4,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [207] = 3,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 3,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Int,
    STATE(28), 4,
      sym__type,
      sym_builtin_type,
      sym_array_type,
      sym_dictionary_type,
  [222] = 1,
    ACTIONS(79), 8,
      ts_builtin_sym_end,
      anon_sym_var,
      anon_sym_let,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_func,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [233] = 1,
    ACTIONS(81), 8,
      ts_builtin_sym_end,
      anon_sym_var,
      anon_sym_let,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_func,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [244] = 1,
    ACTIONS(83), 8,
      ts_builtin_sym_end,
      anon_sym_var,
      anon_sym_let,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_func,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [255] = 3,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 3,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Int,
    STATE(39), 4,
      sym__type,
      sym_builtin_type,
      sym_array_type,
      sym_dictionary_type,
  [270] = 4,
    ACTIONS(7), 1,
      anon_sym_func,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      anon_sym_var,
      anon_sym_let,
    STATE(10), 4,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [287] = 3,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 3,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Int,
    STATE(51), 4,
      sym__type,
      sym_builtin_type,
      sym_array_type,
      sym_dictionary_type,
  [302] = 3,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 3,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Int,
    STATE(38), 4,
      sym__type,
      sym_builtin_type,
      sym_array_type,
      sym_dictionary_type,
  [317] = 3,
    ACTIONS(89), 1,
      anon_sym_COLON,
    ACTIONS(91), 1,
      anon_sym_EQ,
    ACTIONS(87), 4,
      ts_builtin_sym_end,
      anon_sym_var,
      anon_sym_let,
      anon_sym_func,
  [330] = 2,
    ACTIONS(40), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_integer_literal,
    ACTIONS(93), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [341] = 1,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_var,
      anon_sym_let,
      anon_sym_func,
      anon_sym_SEMI,
  [349] = 3,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      anon_sym_return,
    STATE(26), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [361] = 3,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 1,
      anon_sym_return,
    STATE(23), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [373] = 1,
    ACTIONS(106), 5,
      ts_builtin_sym_end,
      anon_sym_var,
      anon_sym_let,
      anon_sym_func,
      anon_sym_SEMI,
  [381] = 1,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      anon_sym_var,
      anon_sym_let,
      anon_sym_func,
      anon_sym_SEMI,
  [389] = 3,
    ACTIONS(99), 1,
      anon_sym_return,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(23), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [401] = 1,
    ACTIONS(112), 5,
      ts_builtin_sym_end,
      anon_sym_var,
      anon_sym_let,
      anon_sym_func,
      anon_sym_SEMI,
  [409] = 2,
    ACTIONS(116), 1,
      anon_sym_EQ,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      anon_sym_var,
      anon_sym_let,
      anon_sym_func,
  [419] = 1,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      anon_sym_var,
      anon_sym_let,
      anon_sym_func,
  [426] = 1,
    ACTIONS(120), 4,
      ts_builtin_sym_end,
      anon_sym_var,
      anon_sym_let,
      anon_sym_func,
  [433] = 1,
    ACTIONS(122), 4,
      ts_builtin_sym_end,
      anon_sym_var,
      anon_sym_let,
      anon_sym_func,
  [440] = 1,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      anon_sym_var,
      anon_sym_let,
      anon_sym_func,
  [447] = 1,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_var,
      anon_sym_let,
      anon_sym_func,
  [454] = 1,
    ACTIONS(128), 4,
      ts_builtin_sym_end,
      anon_sym_var,
      anon_sym_let,
      anon_sym_func,
  [461] = 3,
    ACTIONS(130), 1,
      anon_sym_DASH_GT,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_block,
  [471] = 1,
    ACTIONS(134), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [476] = 2,
    ACTIONS(136), 1,
      anon_sym_RBRACK,
    ACTIONS(138), 1,
      sym__coma,
  [483] = 2,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_block,
  [490] = 2,
    ACTIONS(140), 1,
      anon_sym_COLON,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
  [497] = 2,
    ACTIONS(138), 1,
      sym__coma,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
  [504] = 1,
    ACTIONS(146), 2,
      anon_sym_RBRACE,
      anon_sym_return,
  [509] = 2,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_parameter_list,
  [516] = 2,
    ACTIONS(112), 1,
      sym__coma,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
  [523] = 2,
    ACTIONS(108), 1,
      sym__coma,
    ACTIONS(152), 1,
      anon_sym_RBRACK,
  [530] = 2,
    ACTIONS(106), 1,
      sym__coma,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
  [537] = 2,
    ACTIONS(95), 1,
      sym__coma,
    ACTIONS(156), 1,
      anon_sym_RBRACK,
  [544] = 2,
    ACTIONS(138), 1,
      sym__coma,
    ACTIONS(158), 1,
      anon_sym_RBRACK,
  [551] = 2,
    ACTIONS(138), 1,
      sym__coma,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
  [558] = 1,
    ACTIONS(162), 1,
      sym_identifier,
  [562] = 1,
    ACTIONS(164), 1,
      anon_sym_SEMI,
  [566] = 1,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
  [570] = 1,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
  [574] = 1,
    ACTIONS(138), 1,
      sym__coma,
  [578] = 1,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
  [582] = 1,
    ACTIONS(172), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 130,
  [SMALL_STATE(8)] = 150,
  [SMALL_STATE(9)] = 170,
  [SMALL_STATE(10)] = 190,
  [SMALL_STATE(11)] = 207,
  [SMALL_STATE(12)] = 222,
  [SMALL_STATE(13)] = 233,
  [SMALL_STATE(14)] = 244,
  [SMALL_STATE(15)] = 255,
  [SMALL_STATE(16)] = 270,
  [SMALL_STATE(17)] = 287,
  [SMALL_STATE(18)] = 302,
  [SMALL_STATE(19)] = 317,
  [SMALL_STATE(20)] = 330,
  [SMALL_STATE(21)] = 341,
  [SMALL_STATE(22)] = 349,
  [SMALL_STATE(23)] = 361,
  [SMALL_STATE(24)] = 373,
  [SMALL_STATE(25)] = 381,
  [SMALL_STATE(26)] = 389,
  [SMALL_STATE(27)] = 401,
  [SMALL_STATE(28)] = 409,
  [SMALL_STATE(29)] = 419,
  [SMALL_STATE(30)] = 426,
  [SMALL_STATE(31)] = 433,
  [SMALL_STATE(32)] = 440,
  [SMALL_STATE(33)] = 447,
  [SMALL_STATE(34)] = 454,
  [SMALL_STATE(35)] = 461,
  [SMALL_STATE(36)] = 471,
  [SMALL_STATE(37)] = 476,
  [SMALL_STATE(38)] = 483,
  [SMALL_STATE(39)] = 490,
  [SMALL_STATE(40)] = 497,
  [SMALL_STATE(41)] = 504,
  [SMALL_STATE(42)] = 509,
  [SMALL_STATE(43)] = 516,
  [SMALL_STATE(44)] = 523,
  [SMALL_STATE(45)] = 530,
  [SMALL_STATE(46)] = 537,
  [SMALL_STATE(47)] = 544,
  [SMALL_STATE(48)] = 551,
  [SMALL_STATE(49)] = 558,
  [SMALL_STATE(50)] = 562,
  [SMALL_STATE(51)] = 566,
  [SMALL_STATE(52)] = 570,
  [SMALL_STATE(53)] = 574,
  [SMALL_STATE(54)] = 578,
  [SMALL_STATE(55)] = 582,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(53),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(43),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(53),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_type, 5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 6),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 4),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [170] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
