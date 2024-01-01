#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum {
  sym_identifier = 1,
  sym_comment = 2,
  anon_sym_var = 3,
  anon_sym_let = 4,
  anon_sym_COLON = 5,
  anon_sym_EQ = 6,
  anon_sym_func = 7,
  anon_sym_DASH_GT = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_Bool = 11,
  anon_sym_String = 12,
  anon_sym_Int = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_return = 18,
  anon_sym_SEMI = 19,
  anon_sym_true = 20,
  anon_sym_false = 21,
  sym_integer_literal = 22,
  sym__newline = 23,
  anon_sym_COMMA = 24,
  sym__whitespace = 25,
  sym_multiline_comment = 26,
  sym_unterminated_multiline_comment = 27,
  sym_source_file = 28,
  sym__declaration = 29,
  sym_variable_declaration = 30,
  sym_function_declaration = 31,
  sym_parameter_list = 32,
  sym__type = 33,
  sym_builtin_type = 34,
  sym_array_type = 35,
  sym_dictionary_type = 36,
  sym_block = 37,
  sym__statement = 38,
  sym_return_statement = 39,
  sym__expression = 40,
  sym__literal = 41,
  sym_bool_literal = 42,
  sym_array_literal = 43,
  sym__comma = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_block_repeat1 = 46,
  aux_sym_array_literal_repeat1 = 47,
  aux_sym_array_literal_repeat2 = 48,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
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
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer_literal] = "integer_literal",
  [sym__newline] = "_newline",
  [anon_sym_COMMA] = ",",
  [sym__whitespace] = "_whitespace",
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
  [sym__comma] = "_comma",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_array_literal_repeat1] = "array_literal_repeat1",
  [aux_sym_array_literal_repeat2] = "array_literal_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
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
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer_literal] = sym_integer_literal,
  [sym__newline] = sym__newline,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__whitespace] = sym__whitespace,
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
  [sym__comma] = sym__comma,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_array_literal_repeat1] = aux_sym_array_literal_repeat1,
  [aux_sym_array_literal_repeat2] = aux_sym_array_literal_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym__whitespace] = {
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
  [sym__comma] = {
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
  [aux_sym_array_literal_repeat2] = {
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
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '[') ADVANCE(12);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(5);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(19);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'B') ADVANCE(1);
      if (lookahead == 'I') ADVANCE(2);
      if (lookahead == 'S') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == 'v') ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_Bool);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 0, .external_lex_state = 1},
  [3] = {.lex_state = 0, .external_lex_state = 1},
  [4] = {.lex_state = 0, .external_lex_state = 1},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 0, .external_lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 1},
  [14] = {.lex_state = 0, .external_lex_state = 1},
  [15] = {.lex_state = 0, .external_lex_state = 1},
  [16] = {.lex_state = 0, .external_lex_state = 1},
  [17] = {.lex_state = 0, .external_lex_state = 1},
  [18] = {.lex_state = 0, .external_lex_state = 1},
  [19] = {.lex_state = 0, .external_lex_state = 1},
  [20] = {.lex_state = 0, .external_lex_state = 1},
  [21] = {.lex_state = 0, .external_lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 1},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 0, .external_lex_state = 1},
  [26] = {.lex_state = 0, .external_lex_state = 1},
  [27] = {.lex_state = 0, .external_lex_state = 1},
  [28] = {.lex_state = 0, .external_lex_state = 1},
  [29] = {.lex_state = 0, .external_lex_state = 1},
  [30] = {.lex_state = 0, .external_lex_state = 1},
  [31] = {.lex_state = 0, .external_lex_state = 1},
  [32] = {.lex_state = 0, .external_lex_state = 1},
  [33] = {.lex_state = 0, .external_lex_state = 1},
  [34] = {.lex_state = 0, .external_lex_state = 1},
  [35] = {.lex_state = 0, .external_lex_state = 1},
  [36] = {.lex_state = 0, .external_lex_state = 1},
  [37] = {.lex_state = 0, .external_lex_state = 1},
  [38] = {.lex_state = 0, .external_lex_state = 1},
  [39] = {.lex_state = 0, .external_lex_state = 1},
  [40] = {.lex_state = 0, .external_lex_state = 1},
  [41] = {.lex_state = 0, .external_lex_state = 1},
  [42] = {.lex_state = 0, .external_lex_state = 1},
  [43] = {.lex_state = 0, .external_lex_state = 1},
  [44] = {.lex_state = 0, .external_lex_state = 1},
  [45] = {.lex_state = 0, .external_lex_state = 1},
  [46] = {.lex_state = 0, .external_lex_state = 1},
  [47] = {.lex_state = 0, .external_lex_state = 1},
  [48] = {.lex_state = 0, .external_lex_state = 1},
  [49] = {.lex_state = 0, .external_lex_state = 1},
  [50] = {.lex_state = 0, .external_lex_state = 1},
  [51] = {.lex_state = 0, .external_lex_state = 1},
  [52] = {.lex_state = 0, .external_lex_state = 1},
  [53] = {.lex_state = 0, .external_lex_state = 1},
  [54] = {.lex_state = 0, .external_lex_state = 1},
  [55] = {.lex_state = 0, .external_lex_state = 1},
  [56] = {.lex_state = 0, .external_lex_state = 1},
  [57] = {.lex_state = 0, .external_lex_state = 1},
  [58] = {.lex_state = 0, .external_lex_state = 1},
  [59] = {.lex_state = 0, .external_lex_state = 1},
  [60] = {.lex_state = 0, .external_lex_state = 1},
};

enum {
  ts_external_token__whitespace = 0,
  ts_external_token_multiline_comment = 1,
  ts_external_token_unterminated_multiline_comment = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__whitespace] = sym__whitespace,
  [ts_external_token_multiline_comment] = sym_multiline_comment,
  [ts_external_token_unterminated_multiline_comment] = sym_unterminated_multiline_comment,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__whitespace] = true,
    [ts_external_token_multiline_comment] = true,
    [ts_external_token_unterminated_multiline_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_unterminated_multiline_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(59),
    [sym__declaration] = STATE(58),
    [sym_variable_declaration] = STATE(58),
    [sym_function_declaration] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_var] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(9),
    [sym__newline] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_unterminated_multiline_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_RBRACK,
    ACTIONS(21), 1,
      sym_integer_literal,
    ACTIONS(23), 1,
      sym__newline,
    STATE(3), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    STATE(24), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [35] = 9,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_RBRACK,
    ACTIONS(29), 1,
      sym_integer_literal,
    ACTIONS(31), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    STATE(25), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [70] = 7,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    STATE(41), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [99] = 7,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    STATE(41), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [128] = 7,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    STATE(41), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [157] = 7,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      anon_sym_func,
    ACTIONS(51), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(45), 2,
      anon_sym_var,
      anon_sym_let,
    STATE(58), 3,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [185] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(56), 1,
      sym_integer_literal,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    STATE(56), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [211] = 7,
    ACTIONS(9), 1,
      anon_sym_func,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(7), 2,
      anon_sym_var,
      anon_sym_let,
    STATE(58), 3,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [239] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    STATE(41), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [265] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(64), 1,
      sym_integer_literal,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    STATE(50), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [291] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      sym_integer_literal,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    STATE(52), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [317] = 5,
    ACTIONS(74), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(70), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(72), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_integer_literal,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [340] = 4,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 3,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Int,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    STATE(42), 4,
      sym__type,
      sym_builtin_type,
      sym_array_type,
      sym_dictionary_type,
  [361] = 4,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 3,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Int,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    STATE(45), 4,
      sym__type,
      sym_builtin_type,
      sym_array_type,
      sym_dictionary_type,
  [382] = 5,
    ACTIONS(31), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(81), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(83), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_integer_literal,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [405] = 4,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 3,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Int,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    STATE(43), 4,
      sym__type,
      sym_builtin_type,
      sym_array_type,
      sym_dictionary_type,
  [426] = 5,
    ACTIONS(85), 1,
      sym__newline,
    STATE(20), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(81), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(83), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_integer_literal,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [449] = 4,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 3,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Int,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    STATE(53), 4,
      sym__type,
      sym_builtin_type,
      sym_array_type,
      sym_dictionary_type,
  [470] = 5,
    ACTIONS(31), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(87), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(89), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_integer_literal,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [493] = 7,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    ACTIONS(91), 1,
      sym__newline,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(4), 1,
      sym__comma,
    STATE(16), 1,
      aux_sym_array_literal_repeat1,
    STATE(23), 1,
      aux_sym_array_literal_repeat2,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [518] = 7,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    ACTIONS(91), 1,
      sym__newline,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      sym__comma,
    STATE(16), 1,
      aux_sym_array_literal_repeat1,
    STATE(23), 1,
      aux_sym_array_literal_repeat2,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [543] = 7,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(97), 1,
      sym__newline,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      sym__comma,
    STATE(16), 1,
      aux_sym_array_literal_repeat1,
    STATE(23), 1,
      aux_sym_array_literal_repeat2,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [568] = 7,
    ACTIONS(27), 1,
      anon_sym_RBRACK,
    ACTIONS(91), 1,
      sym__newline,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      sym__comma,
    STATE(16), 1,
      aux_sym_array_literal_repeat1,
    STATE(21), 1,
      aux_sym_array_literal_repeat2,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [593] = 7,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    ACTIONS(91), 1,
      sym__newline,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(4), 1,
      sym__comma,
    STATE(16), 1,
      aux_sym_array_literal_repeat1,
    STATE(22), 1,
      aux_sym_array_literal_repeat2,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [618] = 4,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      anon_sym_return,
    STATE(28), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [636] = 4,
    ACTIONS(105), 1,
      anon_sym_return,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(26), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [654] = 4,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    ACTIONS(111), 1,
      anon_sym_return,
    STATE(28), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [672] = 2,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    ACTIONS(114), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym__newline,
  [686] = 2,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    ACTIONS(116), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym__newline,
  [700] = 2,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      anon_sym_var,
      anon_sym_let,
      anon_sym_func,
      sym__newline,
  [714] = 2,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    ACTIONS(118), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym__newline,
  [728] = 2,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    ACTIONS(120), 4,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_COMMA,
  [741] = 2,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    ACTIONS(122), 4,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_COMMA,
  [754] = 2,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    ACTIONS(124), 4,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_COMMA,
  [767] = 2,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    ACTIONS(126), 4,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_COMMA,
  [780] = 2,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    ACTIONS(128), 4,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_COMMA,
  [793] = 2,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
    ACTIONS(130), 4,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_COMMA,
  [806] = 4,
    ACTIONS(132), 1,
      anon_sym_DASH_GT,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_block,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [822] = 4,
    ACTIONS(136), 1,
      anon_sym_COLON,
    ACTIONS(138), 1,
      anon_sym_EQ,
    ACTIONS(140), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [838] = 2,
    ACTIONS(95), 3,
      anon_sym_RBRACK,
      sym__newline,
      anon_sym_COMMA,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [850] = 3,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_block,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [863] = 3,
    ACTIONS(142), 1,
      anon_sym_COLON,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [876] = 2,
    ACTIONS(146), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [887] = 3,
    ACTIONS(148), 1,
      anon_sym_EQ,
    ACTIONS(150), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [900] = 2,
    ACTIONS(152), 2,
      anon_sym_RBRACE,
      anon_sym_return,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [911] = 3,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_parameter_list,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [924] = 2,
    ACTIONS(156), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [934] = 2,
    ACTIONS(158), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [944] = 2,
    ACTIONS(160), 1,
      anon_sym_SEMI,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [954] = 2,
    ACTIONS(162), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [964] = 2,
    ACTIONS(164), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [974] = 2,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [984] = 2,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [994] = 2,
    ACTIONS(170), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [1004] = 2,
    ACTIONS(172), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [1014] = 2,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [1024] = 2,
    ACTIONS(176), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [1034] = 2,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
  [1044] = 2,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(3), 4,
      sym__whitespace,
      sym_multiline_comment,
      sym_unterminated_multiline_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 128,
  [SMALL_STATE(7)] = 157,
  [SMALL_STATE(8)] = 185,
  [SMALL_STATE(9)] = 211,
  [SMALL_STATE(10)] = 239,
  [SMALL_STATE(11)] = 265,
  [SMALL_STATE(12)] = 291,
  [SMALL_STATE(13)] = 317,
  [SMALL_STATE(14)] = 340,
  [SMALL_STATE(15)] = 361,
  [SMALL_STATE(16)] = 382,
  [SMALL_STATE(17)] = 405,
  [SMALL_STATE(18)] = 426,
  [SMALL_STATE(19)] = 449,
  [SMALL_STATE(20)] = 470,
  [SMALL_STATE(21)] = 493,
  [SMALL_STATE(22)] = 518,
  [SMALL_STATE(23)] = 543,
  [SMALL_STATE(24)] = 568,
  [SMALL_STATE(25)] = 593,
  [SMALL_STATE(26)] = 618,
  [SMALL_STATE(27)] = 636,
  [SMALL_STATE(28)] = 654,
  [SMALL_STATE(29)] = 672,
  [SMALL_STATE(30)] = 686,
  [SMALL_STATE(31)] = 700,
  [SMALL_STATE(32)] = 714,
  [SMALL_STATE(33)] = 728,
  [SMALL_STATE(34)] = 741,
  [SMALL_STATE(35)] = 754,
  [SMALL_STATE(36)] = 767,
  [SMALL_STATE(37)] = 780,
  [SMALL_STATE(38)] = 793,
  [SMALL_STATE(39)] = 806,
  [SMALL_STATE(40)] = 822,
  [SMALL_STATE(41)] = 838,
  [SMALL_STATE(42)] = 850,
  [SMALL_STATE(43)] = 863,
  [SMALL_STATE(44)] = 876,
  [SMALL_STATE(45)] = 887,
  [SMALL_STATE(46)] = 900,
  [SMALL_STATE(47)] = 911,
  [SMALL_STATE(48)] = 924,
  [SMALL_STATE(49)] = 934,
  [SMALL_STATE(50)] = 944,
  [SMALL_STATE(51)] = 954,
  [SMALL_STATE(52)] = 964,
  [SMALL_STATE(53)] = 974,
  [SMALL_STATE(54)] = 984,
  [SMALL_STATE(55)] = 994,
  [SMALL_STATE(56)] = 1004,
  [SMALL_STATE(57)] = 1014,
  [SMALL_STATE(58)] = 1024,
  [SMALL_STATE(59)] = 1034,
  [SMALL_STATE(60)] = 1044,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(13),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comma, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comma, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat2, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat2, 2), SHIFT_REPEAT(16),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat2, 2), SHIFT_REPEAT(18),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_type, 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 5),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 6),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 6),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 5),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [178] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
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
