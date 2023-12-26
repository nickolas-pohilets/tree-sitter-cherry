#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
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
  anon_sym_COMMA = 23,
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
  sym__comma = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_block_repeat1 = 44,
  aux_sym_array_literal_repeat1 = 45,
  aux_sym_array_literal_repeat2 = 46,
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
  [anon_sym_COMMA] = ",",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
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
      ACCEPT_TOKEN(anon_sym_COMMA);
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
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
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
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 31},
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
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_multiline_comment] = ACTIONS(1),
    [sym_unterminated_multiline_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(59),
    [sym__declaration] = STATE(58),
    [sym_variable_declaration] = STATE(58),
    [sym_function_declaration] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [sym__newline] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_RBRACK,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_integer_literal,
    ACTIONS(21), 1,
      sym__newline,
    STATE(3), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [29] = 8,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      sym_integer_literal,
    ACTIONS(29), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [58] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [81] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [104] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [127] = 6,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      anon_sym_func,
    ACTIONS(49), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(43), 2,
      anon_sym_var,
      anon_sym_let,
    STATE(58), 3,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
  [149] = 5,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(54), 1,
      sym_integer_literal,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [169] = 6,
    ACTIONS(7), 1,
      anon_sym_func,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 2,
      anon_sym_var,
      anon_sym_let,
    STATE(58), 3,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
  [191] = 5,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [211] = 5,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      sym_identifier,
    ACTIONS(62), 1,
      sym_integer_literal,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [231] = 5,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(66), 1,
      sym_integer_literal,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 4,
      sym__expression,
      sym__literal,
      sym_bool_literal,
      sym_array_literal,
  [251] = 4,
    ACTIONS(72), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(68), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_integer_literal,
    ACTIONS(70), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [268] = 3,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 3,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Int,
    STATE(42), 4,
      sym__type,
      sym_builtin_type,
      sym_array_type,
      sym_dictionary_type,
  [283] = 3,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 3,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Int,
    STATE(45), 4,
      sym__type,
      sym_builtin_type,
      sym_array_type,
      sym_dictionary_type,
  [298] = 4,
    ACTIONS(29), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(79), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_integer_literal,
    ACTIONS(81), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [315] = 3,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 3,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Int,
    STATE(43), 4,
      sym__type,
      sym_builtin_type,
      sym_array_type,
      sym_dictionary_type,
  [330] = 4,
    ACTIONS(83), 1,
      sym__newline,
    STATE(20), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(79), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_integer_literal,
    ACTIONS(81), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [347] = 3,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 3,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Int,
    STATE(53), 4,
      sym__type,
      sym_builtin_type,
      sym_array_type,
      sym_dictionary_type,
  [362] = 4,
    ACTIONS(29), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(85), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_integer_literal,
    ACTIONS(87), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [379] = 6,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    ACTIONS(89), 1,
      sym__newline,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    STATE(4), 1,
      sym__comma,
    STATE(16), 1,
      aux_sym_array_literal_repeat1,
    STATE(23), 1,
      aux_sym_array_literal_repeat2,
  [398] = 6,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    ACTIONS(89), 1,
      sym__newline,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      sym__comma,
    STATE(16), 1,
      aux_sym_array_literal_repeat1,
    STATE(23), 1,
      aux_sym_array_literal_repeat2,
  [417] = 6,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    ACTIONS(95), 1,
      sym__newline,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      sym__comma,
    STATE(16), 1,
      aux_sym_array_literal_repeat1,
    STATE(23), 1,
      aux_sym_array_literal_repeat2,
  [436] = 6,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    ACTIONS(89), 1,
      sym__newline,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      sym__comma,
    STATE(16), 1,
      aux_sym_array_literal_repeat1,
    STATE(21), 1,
      aux_sym_array_literal_repeat2,
  [455] = 6,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    ACTIONS(89), 1,
      sym__newline,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    STATE(4), 1,
      sym__comma,
    STATE(16), 1,
      aux_sym_array_literal_repeat1,
    STATE(22), 1,
      aux_sym_array_literal_repeat2,
  [474] = 3,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 1,
      anon_sym_return,
    STATE(28), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [486] = 3,
    ACTIONS(103), 1,
      anon_sym_return,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(26), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [498] = 3,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 1,
      anon_sym_return,
    STATE(28), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [510] = 1,
    ACTIONS(112), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym__newline,
  [518] = 1,
    ACTIONS(114), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym__newline,
  [526] = 1,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      anon_sym_var,
      anon_sym_let,
      anon_sym_func,
      sym__newline,
  [534] = 1,
    ACTIONS(116), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym__newline,
  [542] = 1,
    ACTIONS(118), 4,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_COMMA,
  [549] = 1,
    ACTIONS(120), 4,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_COMMA,
  [556] = 1,
    ACTIONS(122), 4,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_COMMA,
  [563] = 1,
    ACTIONS(124), 4,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_COMMA,
  [570] = 1,
    ACTIONS(126), 4,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_COMMA,
  [577] = 1,
    ACTIONS(128), 4,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_COMMA,
  [584] = 3,
    ACTIONS(130), 1,
      anon_sym_DASH_GT,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_block,
  [594] = 3,
    ACTIONS(134), 1,
      anon_sym_COLON,
    ACTIONS(136), 1,
      anon_sym_EQ,
    ACTIONS(138), 1,
      sym__newline,
  [604] = 1,
    ACTIONS(93), 3,
      anon_sym_RBRACK,
      sym__newline,
      anon_sym_COMMA,
  [610] = 2,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_block,
  [617] = 2,
    ACTIONS(140), 1,
      anon_sym_COLON,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
  [624] = 1,
    ACTIONS(144), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [629] = 2,
    ACTIONS(146), 1,
      anon_sym_EQ,
    ACTIONS(148), 1,
      sym__newline,
  [636] = 1,
    ACTIONS(150), 2,
      anon_sym_RBRACE,
      anon_sym_return,
  [641] = 2,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_parameter_list,
  [648] = 1,
    ACTIONS(154), 1,
      sym__newline,
  [652] = 1,
    ACTIONS(156), 1,
      sym__newline,
  [656] = 1,
    ACTIONS(158), 1,
      anon_sym_SEMI,
  [660] = 1,
    ACTIONS(160), 1,
      sym__newline,
  [664] = 1,
    ACTIONS(162), 1,
      sym__newline,
  [668] = 1,
    ACTIONS(164), 1,
      anon_sym_RBRACK,
  [672] = 1,
    ACTIONS(166), 1,
      sym_identifier,
  [676] = 1,
    ACTIONS(168), 1,
      sym__newline,
  [680] = 1,
    ACTIONS(170), 1,
      sym__newline,
  [684] = 1,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
  [688] = 1,
    ACTIONS(174), 1,
      sym__newline,
  [692] = 1,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
  [696] = 1,
    ACTIONS(178), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 149,
  [SMALL_STATE(9)] = 169,
  [SMALL_STATE(10)] = 191,
  [SMALL_STATE(11)] = 211,
  [SMALL_STATE(12)] = 231,
  [SMALL_STATE(13)] = 251,
  [SMALL_STATE(14)] = 268,
  [SMALL_STATE(15)] = 283,
  [SMALL_STATE(16)] = 298,
  [SMALL_STATE(17)] = 315,
  [SMALL_STATE(18)] = 330,
  [SMALL_STATE(19)] = 347,
  [SMALL_STATE(20)] = 362,
  [SMALL_STATE(21)] = 379,
  [SMALL_STATE(22)] = 398,
  [SMALL_STATE(23)] = 417,
  [SMALL_STATE(24)] = 436,
  [SMALL_STATE(25)] = 455,
  [SMALL_STATE(26)] = 474,
  [SMALL_STATE(27)] = 486,
  [SMALL_STATE(28)] = 498,
  [SMALL_STATE(29)] = 510,
  [SMALL_STATE(30)] = 518,
  [SMALL_STATE(31)] = 526,
  [SMALL_STATE(32)] = 534,
  [SMALL_STATE(33)] = 542,
  [SMALL_STATE(34)] = 549,
  [SMALL_STATE(35)] = 556,
  [SMALL_STATE(36)] = 563,
  [SMALL_STATE(37)] = 570,
  [SMALL_STATE(38)] = 577,
  [SMALL_STATE(39)] = 584,
  [SMALL_STATE(40)] = 594,
  [SMALL_STATE(41)] = 604,
  [SMALL_STATE(42)] = 610,
  [SMALL_STATE(43)] = 617,
  [SMALL_STATE(44)] = 624,
  [SMALL_STATE(45)] = 629,
  [SMALL_STATE(46)] = 636,
  [SMALL_STATE(47)] = 641,
  [SMALL_STATE(48)] = 648,
  [SMALL_STATE(49)] = 652,
  [SMALL_STATE(50)] = 656,
  [SMALL_STATE(51)] = 660,
  [SMALL_STATE(52)] = 664,
  [SMALL_STATE(53)] = 668,
  [SMALL_STATE(54)] = 672,
  [SMALL_STATE(55)] = 676,
  [SMALL_STATE(56)] = 680,
  [SMALL_STATE(57)] = 684,
  [SMALL_STATE(58)] = 688,
  [SMALL_STATE(59)] = 692,
  [SMALL_STATE(60)] = 696,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(13),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comma, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comma, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat2, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat2, 2), SHIFT_REPEAT(16),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat2, 2), SHIFT_REPEAT(18),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_type, 5),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 5),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 6),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 6),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [176] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
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
