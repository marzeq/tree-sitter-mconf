#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_key = 1,
  aux_sym_number_token1 = 2,
  aux_sym_number_token2 = 3,
  anon_sym_DQUOTE = 4,
  sym_string_content = 5,
  sym_escape_sequence = 6,
  anon_sym_true = 7,
  anon_sym_false = 8,
  anon_sym_DOLLAR = 9,
  anon_sym_LBRACE = 10,
  anon_sym_COMMA = 11,
  anon_sym_RBRACE = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_EQ = 15,
  sym_comment = 16,
  sym_source_file = 17,
  sym__definition = 18,
  sym_number = 19,
  sym_string = 20,
  aux_sym__string_content = 21,
  sym_bool = 22,
  sym_constant = 23,
  sym_object = 24,
  sym_list = 25,
  sym__value = 26,
  sym_assignment = 27,
  sym_constant_assignment = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_object_repeat1 = 30,
  aux_sym_list_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_key] = "key",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content] = "string_content",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_number] = "number",
  [sym_string] = "string",
  [aux_sym__string_content] = "_string_content",
  [sym_bool] = "bool",
  [sym_constant] = "constant",
  [sym_object] = "object",
  [sym_list] = "list",
  [sym__value] = "_value",
  [sym_assignment] = "assignment",
  [sym_constant_assignment] = "constant_assignment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_key] = sym_key,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content] = sym_string_content,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [aux_sym__string_content] = aux_sym__string_content,
  [sym_bool] = sym_bool,
  [sym_constant] = sym_constant,
  [sym_object] = sym_object,
  [sym_list] = sym_list,
  [sym__value] = sym__value,
  [sym_assignment] = sym_assignment,
  [sym_constant_assignment] = sym_constant_assignment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__string_content] = {
    .visible = false,
    .named = false,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_assignment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '"', 18,
        '#', 32,
        '$', 25,
        ',', 27,
        '-', 2,
        '.', 11,
        '=', 31,
        '[', 29,
        '\\', 10,
        ']', 30,
        'f', 3,
        't', 7,
        '{', 26,
        '}', 28,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(4);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 22,
        '/', 22,
        '\\', 22,
        'b', 22,
        'f', 22,
        'n', 22,
        'r', 22,
        't', 22,
        'u', 22,
      );
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 12:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '"', 18,
        '#', 32,
        '$', 25,
        ',', 27,
        '-', 2,
        '.', 11,
        '=', 31,
        '[', 29,
        ']', 30,
        'f', 3,
        't', 7,
        '{', 26,
        '}', 28,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '}') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 13},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(32),
    [sym__definition] = STATE(7),
    [sym_constant] = STATE(33),
    [sym_object] = STATE(7),
    [sym_assignment] = STATE(7),
    [sym_constant_assignment] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_key] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_number] = STATE(26),
    [sym_string] = STATE(26),
    [sym_bool] = STATE(26),
    [sym_constant] = STATE(26),
    [sym_object] = STATE(26),
    [sym_list] = STATE(26),
    [sym__value] = STATE(26),
    [aux_sym_number_token1] = ACTIONS(13),
    [aux_sym_number_token2] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      aux_sym_number_token1,
    ACTIONS(15), 1,
      aux_sym_number_token2,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 7,
      sym_number,
      sym_string,
      sym_bool,
      sym_constant,
      sym_object,
      sym_list,
      sym__value,
  [35] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      aux_sym_number_token1,
    ACTIONS(15), 1,
      aux_sym_number_token2,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(30), 7,
      sym_number,
      sym_string,
      sym_bool,
      sym_constant,
      sym_object,
      sym_list,
      sym__value,
  [70] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      aux_sym_number_token1,
    ACTIONS(15), 1,
      aux_sym_number_token2,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 7,
      sym_number,
      sym_string,
      sym_bool,
      sym_constant,
      sym_object,
      sym_list,
      sym__value,
  [105] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_key,
    ACTIONS(30), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_constant,
    STATE(6), 5,
      sym__definition,
      sym_object,
      sym_assignment,
      sym_constant_assignment,
      aux_sym_source_file_repeat1,
  [131] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_key,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      sym_constant,
    STATE(6), 5,
      sym__definition,
      sym_object,
      sym_assignment,
      sym_constant_assignment,
      aux_sym_source_file_repeat1,
  [157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 8,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 7,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 7,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 7,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 7,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 7,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 7,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 7,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 7,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 7,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 6,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [300] = 4,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym__string_content,
    ACTIONS(62), 2,
      sym_string_content,
      sym_escape_sequence,
  [314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [324] = 4,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym__string_content,
    ACTIONS(70), 2,
      sym_string_content,
      sym_escape_sequence,
  [338] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_key,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_object_repeat1,
    STATE(28), 1,
      sym_assignment,
  [354] = 4,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym__string_content,
    ACTIONS(76), 2,
      sym_string_content,
      sym_escape_sequence,
  [368] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_key,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_object_repeat1,
    STATE(28), 1,
      sym_assignment,
  [384] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_key,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_object_repeat1,
    STATE(28), 1,
      sym_assignment,
  [400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      aux_sym_list_repeat1,
  [413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym_list_repeat1,
  [426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(92), 2,
      sym_key,
      anon_sym_RBRACE,
  [437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym_list_repeat1,
  [450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 2,
      sym_key,
      anon_sym_RBRACE,
  [466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
  [473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_EQ,
  [480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_EQ,
  [487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_key,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 35,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 105,
  [SMALL_STATE(7)] = 131,
  [SMALL_STATE(8)] = 157,
  [SMALL_STATE(9)] = 171,
  [SMALL_STATE(10)] = 184,
  [SMALL_STATE(11)] = 197,
  [SMALL_STATE(12)] = 210,
  [SMALL_STATE(13)] = 223,
  [SMALL_STATE(14)] = 236,
  [SMALL_STATE(15)] = 249,
  [SMALL_STATE(16)] = 262,
  [SMALL_STATE(17)] = 275,
  [SMALL_STATE(18)] = 288,
  [SMALL_STATE(19)] = 300,
  [SMALL_STATE(20)] = 314,
  [SMALL_STATE(21)] = 324,
  [SMALL_STATE(22)] = 338,
  [SMALL_STATE(23)] = 354,
  [SMALL_STATE(24)] = 368,
  [SMALL_STATE(25)] = 384,
  [SMALL_STATE(26)] = 400,
  [SMALL_STATE(27)] = 413,
  [SMALL_STATE(28)] = 426,
  [SMALL_STATE(29)] = 437,
  [SMALL_STATE(30)] = 450,
  [SMALL_STATE(31)] = 458,
  [SMALL_STATE(32)] = 466,
  [SMALL_STATE(33)] = 473,
  [SMALL_STATE(34)] = 480,
  [SMALL_STATE(35)] = 487,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_assignment, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2, 0, 0),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2, 0, 0), SHIFT_REPEAT(23),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_mconf(void) {
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
