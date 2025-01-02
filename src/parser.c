#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 78
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  sym_word = 1,
  aux_sym_number_token1 = 2,
  aux_sym_number_token2 = 3,
  aux_sym_number_token3 = 4,
  aux_sym_number_token4 = 5,
  anon_sym_DQUOTE = 6,
  sym_string_content = 7,
  anon_sym_SQUOTE = 8,
  sym_string_single_quote_content = 9,
  sym_escape_sequence = 10,
  anon_sym_true = 11,
  anon_sym_false = 12,
  anon_sym_on = 13,
  anon_sym_off = 14,
  anon_sym_yes = 15,
  anon_sym_no = 16,
  sym_null = 17,
  anon_sym_DOLLAR = 18,
  anon_sym_QMARK = 19,
  anon_sym_LBRACE = 20,
  anon_sym_COMMA = 21,
  anon_sym_RBRACE = 22,
  anon_sym_LBRACK = 23,
  anon_sym_RBRACK = 24,
  anon_sym_TILDE = 25,
  anon_sym_PIPE = 26,
  anon_sym_EQ = 27,
  anon_sym_COLON = 28,
  anon_sym_ATimport = 29,
  anon_sym_DOT = 30,
  sym_comment = 31,
  sym_source_file = 32,
  sym__definition = 33,
  sym_number = 34,
  sym_string = 35,
  aux_sym__string_content = 36,
  sym_string_single_quote = 37,
  aux_sym__string_single_quote_content = 38,
  sym_bool = 39,
  sym_constant = 40,
  sym_object = 41,
  sym_list = 42,
  sym_ternary = 43,
  sym__value = 44,
  sym_assignment = 45,
  sym_constant_assignment = 46,
  sym_import = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_object_repeat1 = 49,
  aux_sym_list_repeat1 = 50,
  aux_sym_import_repeat1 = 51,
  aux_sym_import_repeat2 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_word] = "word",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [aux_sym_number_token3] = "number_token3",
  [aux_sym_number_token4] = "number_token4",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content] = "string_content",
  [anon_sym_SQUOTE] = "'",
  [sym_string_single_quote_content] = "string_single_quote_content",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_on] = "on",
  [anon_sym_off] = "off",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [sym_null] = "null",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_QMARK] = "\?",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_TILDE] = "~",
  [anon_sym_PIPE] = "|",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [anon_sym_ATimport] = "@import",
  [anon_sym_DOT] = ".",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_number] = "number",
  [sym_string] = "string",
  [aux_sym__string_content] = "_string_content",
  [sym_string_single_quote] = "string_single_quote",
  [aux_sym__string_single_quote_content] = "_string_single_quote_content",
  [sym_bool] = "bool",
  [sym_constant] = "constant",
  [sym_object] = "object",
  [sym_list] = "list",
  [sym_ternary] = "ternary",
  [sym__value] = "_value",
  [sym_assignment] = "assignment",
  [sym_constant_assignment] = "constant_assignment",
  [sym_import] = "import",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_import_repeat1] = "import_repeat1",
  [aux_sym_import_repeat2] = "import_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_word] = sym_word,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [aux_sym_number_token3] = aux_sym_number_token3,
  [aux_sym_number_token4] = aux_sym_number_token4,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content] = sym_string_content,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_string_single_quote_content] = sym_string_single_quote_content,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_off] = anon_sym_off,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [sym_null] = sym_null,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_ATimport] = anon_sym_ATimport,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [aux_sym__string_content] = aux_sym__string_content,
  [sym_string_single_quote] = sym_string_single_quote,
  [aux_sym__string_single_quote_content] = aux_sym__string_single_quote_content,
  [sym_bool] = sym_bool,
  [sym_constant] = sym_constant,
  [sym_object] = sym_object,
  [sym_list] = sym_list,
  [sym_ternary] = sym_ternary,
  [sym__value] = sym__value,
  [sym_assignment] = sym_assignment,
  [sym_constant_assignment] = sym_constant_assignment,
  [sym_import] = sym_import,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_import_repeat1] = aux_sym_import_repeat1,
  [aux_sym_import_repeat2] = aux_sym_import_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_word] = {
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
  [aux_sym_number_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token4] = {
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_single_quote_content] = {
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
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
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
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [sym_string_single_quote] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__string_single_quote_content] = {
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
  [sym_ternary] = {
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
  [sym_import] = {
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
  [aux_sym_import_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_word = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_word] = "word",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_word, 0},
  [1] =
    {field_word, 1, .inherited = true},
  [2] =
    {field_word, 0, .inherited = true},
    {field_word, 1, .inherited = true},
  [4] =
    {field_word, 2, .inherited = true},
  [5] =
    {field_word, 2, .inherited = true},
    {field_word, 3, .inherited = true},
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
  [7] = 5,
  [8] = 4,
  [9] = 9,
  [10] = 3,
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
  [29] = 25,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 18,
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
  [76] = 73,
  [77] = 75,
};

static TSCharacterRange sym_word_character_set_1[] = {
  {'-', '-'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6},
  {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377},
  {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481},
  {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f},
  {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f},
  {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824},
  {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d},
  {0x950, 0x950}, {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2},
  {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a},
  {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e},
  {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd},
  {0xad0, 0xad0}, {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33},
  {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90},
  {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0},
  {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61},
  {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde},
  {0xce0, 0xce1}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56},
  {0xd5f, 0xd61}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30},
  {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0},
  {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c},
  {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070},
  {0x1075, 0x1081}, {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d},
  {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be},
  {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5},
  {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731},
  {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x1884},
  {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9},
  {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5},
  {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3},
  {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57},
  {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4},
  {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f},
  {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126},
  {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184}, {0x2c00, 0x2ce4},
  {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96},
  {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde},
  {0x2e2f, 0x2e2f}, {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff},
  {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c},
  {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5}, {0xa717, 0xa71f},
  {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a},
  {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946},
  {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42},
  {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0},
  {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26},
  {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb},
  {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c},
  {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb},
  {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7},
  {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa},
  {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3},
  {0x103c8, 0x103cf}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a},
  {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755},
  {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838},
  {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915}, {0x10920, 0x1092b},
};

static TSCharacterRange sym_word_character_set_2[] = {
  {'-', '-'}, {'0', '9'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba},
  {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374},
  {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5},
  {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a},
  {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710},
  {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a},
  {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939},
  {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0},
  {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc},
  {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c},
  {0xa5e, 0xa5e}, {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9},
  {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30},
  {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a},
  {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9},
  {0xbd0, 0xbd0}, {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d},
  {0xc60, 0xc61}, {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd},
  {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e},
  {0xd54, 0xd56}, {0xd5f, 0xd61}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6},
  {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5},
  {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47},
  {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066},
  {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248},
  {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5},
  {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f},
  {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711},
  {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878},
  {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab},
  {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf},
  {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec},
  {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d},
  {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe},
  {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071},
  {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124},
  {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184},
  {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f},
  {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6},
  {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa},
  {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00},
  {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5},
  {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805},
  {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925},
  {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28},
  {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd},
  {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16},
  {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6},
  {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36},
  {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7},
  {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf},
  {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d},
  {0x10080, 0x100fa}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d},
  {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a},
  {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736},
  {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835},
  {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
  {0x10920, 0x1092b},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      ADVANCE_MAP(
        '"', 51,
        '#', 81,
        '$', 67,
        '\'', 55,
        ',', 70,
        '-', 24,
        '.', 80,
        '0', 45,
        ':', 77,
        '=', 76,
        '?', 68,
        '@', 5,
        '[', 72,
        '\\', 4,
        ']', 73,
        'f', 27,
        'n', 36,
        'o', 31,
        't', 37,
        'y', 28,
        '{', 69,
        '|', 75,
        '}', 71,
        '~', 74,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 51,
        '#', 81,
        '$', 67,
        '\'', 55,
        '-', 24,
        '.', 13,
        '0', 45,
        '[', 72,
        ']', 73,
        'f', 27,
        'n', 36,
        'o', 31,
        't', 37,
        'y', 28,
        '{', 69,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        'U', 19,
        'u', 19,
        'x', 17,
        '"', 59,
        '$', 59,
        '\'', 59,
        '\\', 59,
        'a', 59,
        'b', 59,
        'e', 59,
        'f', 59,
        'n', 59,
        'r', 59,
        't', 59,
        'v', 59,
      );
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 11:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(50);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 20:
      if (eof) ADVANCE(22);
      ADVANCE_MAP(
        '"', 51,
        '#', 81,
        '$', 67,
        '\'', 55,
        ',', 70,
        '-', 24,
        '.', 80,
        '0', 45,
        ':', 77,
        '=', 76,
        '?', 68,
        '@', 5,
        '[', 72,
        ']', 73,
        'f', 27,
        'n', 36,
        'o', 31,
        't', 37,
        'y', 28,
        '{', 69,
        '|', 75,
        '}', 71,
        '~', 74,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      ADVANCE_MAP(
        '"', 51,
        '#', 81,
        '$', 67,
        '\'', 55,
        ',', 70,
        '.', 79,
        ':', 77,
        '=', 76,
        '?', 68,
        '@', 5,
        ']', 73,
        '{', 69,
        '|', 75,
        '}', 71,
        '~', 74,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (set_contains(sym_word_character_set_1, 432, lookahead)) ADVANCE(44);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '0') ADVANCE(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(43);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(34);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(38);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(60);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(61);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(62);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(63);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(66);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(39);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(33);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(35);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(40);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(64);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(30);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(29);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(41);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_word);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_string_single_quote_content);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_string_single_quote_content);
      if (lookahead == '#') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_string_single_quote_content);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_true);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_false);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_on);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_off);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_yes);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_no);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_null);
      if (set_contains(sym_word_character_set_2, 433, lookahead)) ADVANCE(44);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_ATimport);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 21},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 21},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 21},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 21},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 21},
  [36] = {.lex_state = 21},
  [37] = {.lex_state = 21},
  [38] = {.lex_state = 21},
  [39] = {.lex_state = 21},
  [40] = {.lex_state = 21},
  [41] = {.lex_state = 21},
  [42] = {.lex_state = 21},
  [43] = {.lex_state = 21},
  [44] = {.lex_state = 21},
  [45] = {.lex_state = 21},
  [46] = {.lex_state = 21},
  [47] = {.lex_state = 21},
  [48] = {.lex_state = 21},
  [49] = {.lex_state = 21},
  [50] = {.lex_state = 21},
  [51] = {.lex_state = 21},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 21},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 21},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 21},
  [77] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [aux_sym_number_token3] = ACTIONS(1),
    [aux_sym_number_token4] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(72),
    [sym__definition] = STATE(13),
    [sym_string] = STATE(71),
    [sym_string_single_quote] = STATE(71),
    [sym_constant] = STATE(74),
    [sym_object] = STATE(13),
    [sym_assignment] = STATE(13),
    [sym_constant_assignment] = STATE(13),
    [sym_import] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_word] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_ATimport] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_number] = STATE(67),
    [sym_string] = STATE(67),
    [sym_string_single_quote] = STATE(67),
    [sym_bool] = STATE(29),
    [sym_constant] = STATE(29),
    [sym_object] = STATE(67),
    [sym_list] = STATE(67),
    [sym_ternary] = STATE(67),
    [sym__value] = STATE(67),
    [sym_word] = ACTIONS(19),
    [aux_sym_number_token1] = ACTIONS(21),
    [aux_sym_number_token2] = ACTIONS(21),
    [aux_sym_number_token3] = ACTIONS(21),
    [aux_sym_number_token4] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(23),
    [anon_sym_off] = ACTIONS(23),
    [anon_sym_yes] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(23),
    [sym_null] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_number] = STATE(75),
    [sym_string] = STATE(75),
    [sym_string_single_quote] = STATE(75),
    [sym_bool] = STATE(29),
    [sym_constant] = STATE(29),
    [sym_object] = STATE(75),
    [sym_list] = STATE(75),
    [sym_ternary] = STATE(75),
    [sym__value] = STATE(75),
    [sym_word] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(21),
    [aux_sym_number_token2] = ACTIONS(21),
    [aux_sym_number_token3] = ACTIONS(21),
    [aux_sym_number_token4] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(23),
    [anon_sym_off] = ACTIONS(23),
    [anon_sym_yes] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(23),
    [sym_null] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_number] = STATE(24),
    [sym_string] = STATE(24),
    [sym_string_single_quote] = STATE(24),
    [sym_bool] = STATE(25),
    [sym_constant] = STATE(25),
    [sym_object] = STATE(24),
    [sym_list] = STATE(24),
    [sym_ternary] = STATE(24),
    [sym__value] = STATE(24),
    [sym_word] = ACTIONS(33),
    [aux_sym_number_token1] = ACTIONS(21),
    [aux_sym_number_token2] = ACTIONS(21),
    [aux_sym_number_token3] = ACTIONS(21),
    [aux_sym_number_token4] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(23),
    [anon_sym_off] = ACTIONS(23),
    [anon_sym_yes] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(23),
    [sym_null] = ACTIONS(33),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_number] = STATE(21),
    [sym_string] = STATE(21),
    [sym_string_single_quote] = STATE(21),
    [sym_bool] = STATE(25),
    [sym_constant] = STATE(25),
    [sym_object] = STATE(21),
    [sym_list] = STATE(21),
    [sym_ternary] = STATE(21),
    [sym__value] = STATE(21),
    [sym_word] = ACTIONS(35),
    [aux_sym_number_token1] = ACTIONS(21),
    [aux_sym_number_token2] = ACTIONS(21),
    [aux_sym_number_token3] = ACTIONS(21),
    [aux_sym_number_token4] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(23),
    [anon_sym_off] = ACTIONS(23),
    [anon_sym_yes] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(23),
    [sym_null] = ACTIONS(35),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_number] = STATE(42),
    [sym_string] = STATE(42),
    [sym_string_single_quote] = STATE(42),
    [sym_bool] = STATE(29),
    [sym_constant] = STATE(29),
    [sym_object] = STATE(42),
    [sym_list] = STATE(42),
    [sym_ternary] = STATE(42),
    [sym__value] = STATE(42),
    [sym_word] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(21),
    [aux_sym_number_token2] = ACTIONS(21),
    [aux_sym_number_token3] = ACTIONS(21),
    [aux_sym_number_token4] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(23),
    [anon_sym_off] = ACTIONS(23),
    [anon_sym_yes] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(23),
    [sym_null] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_number] = STATE(21),
    [sym_string] = STATE(21),
    [sym_string_single_quote] = STATE(21),
    [sym_bool] = STATE(29),
    [sym_constant] = STATE(29),
    [sym_object] = STATE(21),
    [sym_list] = STATE(21),
    [sym_ternary] = STATE(21),
    [sym__value] = STATE(21),
    [sym_word] = ACTIONS(35),
    [aux_sym_number_token1] = ACTIONS(21),
    [aux_sym_number_token2] = ACTIONS(21),
    [aux_sym_number_token3] = ACTIONS(21),
    [aux_sym_number_token4] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(23),
    [anon_sym_off] = ACTIONS(23),
    [anon_sym_yes] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(23),
    [sym_null] = ACTIONS(35),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_number] = STATE(24),
    [sym_string] = STATE(24),
    [sym_string_single_quote] = STATE(24),
    [sym_bool] = STATE(29),
    [sym_constant] = STATE(29),
    [sym_object] = STATE(24),
    [sym_list] = STATE(24),
    [sym_ternary] = STATE(24),
    [sym__value] = STATE(24),
    [sym_word] = ACTIONS(33),
    [aux_sym_number_token1] = ACTIONS(21),
    [aux_sym_number_token2] = ACTIONS(21),
    [aux_sym_number_token3] = ACTIONS(21),
    [aux_sym_number_token4] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(23),
    [anon_sym_off] = ACTIONS(23),
    [anon_sym_yes] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(23),
    [sym_null] = ACTIONS(33),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_number] = STATE(35),
    [sym_string] = STATE(35),
    [sym_string_single_quote] = STATE(35),
    [sym_bool] = STATE(29),
    [sym_constant] = STATE(29),
    [sym_object] = STATE(35),
    [sym_list] = STATE(35),
    [sym_ternary] = STATE(35),
    [sym__value] = STATE(35),
    [sym_word] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(21),
    [aux_sym_number_token2] = ACTIONS(21),
    [aux_sym_number_token3] = ACTIONS(21),
    [aux_sym_number_token4] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(23),
    [anon_sym_off] = ACTIONS(23),
    [anon_sym_yes] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(23),
    [sym_null] = ACTIONS(39),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_number] = STATE(77),
    [sym_string] = STATE(77),
    [sym_string_single_quote] = STATE(77),
    [sym_bool] = STATE(29),
    [sym_constant] = STATE(29),
    [sym_object] = STATE(77),
    [sym_list] = STATE(77),
    [sym_ternary] = STATE(77),
    [sym__value] = STATE(77),
    [sym_word] = ACTIONS(41),
    [aux_sym_number_token1] = ACTIONS(21),
    [aux_sym_number_token2] = ACTIONS(21),
    [aux_sym_number_token3] = ACTIONS(21),
    [aux_sym_number_token4] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(23),
    [anon_sym_off] = ACTIONS(23),
    [anon_sym_yes] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(23),
    [sym_null] = ACTIONS(41),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_number] = STATE(70),
    [sym_string] = STATE(70),
    [sym_string_single_quote] = STATE(70),
    [sym_bool] = STATE(29),
    [sym_constant] = STATE(29),
    [sym_object] = STATE(70),
    [sym_list] = STATE(70),
    [sym_ternary] = STATE(70),
    [sym__value] = STATE(70),
    [sym_word] = ACTIONS(43),
    [aux_sym_number_token1] = ACTIONS(21),
    [aux_sym_number_token2] = ACTIONS(21),
    [aux_sym_number_token3] = ACTIONS(21),
    [aux_sym_number_token4] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(23),
    [anon_sym_off] = ACTIONS(23),
    [anon_sym_yes] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(23),
    [sym_null] = ACTIONS(43),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      sym_word,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_ATimport,
    STATE(74), 1,
      sym_constant,
    STATE(71), 2,
      sym_string,
      sym_string_single_quote,
    STATE(12), 6,
      sym__definition,
      sym_object,
      sym_assignment,
      sym_constant_assignment,
      sym_import,
      aux_sym_source_file_repeat1,
  [40] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_ATimport,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(74), 1,
      sym_constant,
    STATE(71), 2,
      sym_string,
      sym_string_single_quote,
    STATE(12), 6,
      sym__definition,
      sym_object,
      sym_assignment,
      sym_constant_assignment,
      sym_import,
      aux_sym_source_file_repeat1,
  [80] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 15,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_ATimport,
      anon_sym_DOT,
  [101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 15,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_ATimport,
      anon_sym_DOT,
  [122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 15,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_ATimport,
      anon_sym_DOT,
  [143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 15,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_ATimport,
      anon_sym_DOT,
  [164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(75), 13,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_ATimport,
  [186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 13,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_ATimport,
  [205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 13,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_ATimport,
  [224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 13,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_ATimport,
  [243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 13,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_ATimport,
  [262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 13,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_ATimport,
  [281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 13,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_ATimport,
  [300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_TILDE,
    ACTIONS(91), 12,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_ATimport,
  [321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 13,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_ATimport,
  [340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 13,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_ATimport,
  [359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 13,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_ATimport,
  [378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_TILDE,
    ACTIONS(91), 12,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_ATimport,
  [399] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(104), 1,
      sym_word,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_import_repeat2,
    STATE(31), 2,
      sym_constant,
      aux_sym_import_repeat1,
    STATE(40), 2,
      sym_string,
      sym_string_single_quote,
  [432] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(104), 1,
      sym_word,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_import_repeat2,
    STATE(33), 2,
      sym_constant,
      aux_sym_import_repeat1,
    STATE(40), 2,
      sym_string,
      sym_string_single_quote,
  [465] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(104), 1,
      sym_word,
    ACTIONS(112), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(33), 2,
      sym_constant,
      aux_sym_import_repeat1,
    STATE(40), 2,
      sym_string,
      sym_string_single_quote,
  [493] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_word,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      anon_sym_DOLLAR,
    ACTIONS(126), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(33), 2,
      sym_constant,
      aux_sym_import_repeat1,
    STATE(40), 2,
      sym_string,
      sym_string_single_quote,
  [521] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(104), 1,
      sym_word,
    ACTIONS(128), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(32), 2,
      sym_constant,
      aux_sym_import_repeat1,
    STATE(40), 2,
      sym_string,
      sym_string_single_quote,
  [549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 9,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_ATimport,
  [564] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_object_repeat1,
    STATE(51), 1,
      sym_assignment,
    STATE(71), 2,
      sym_string,
      sym_string_single_quote,
  [590] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_word,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_object_repeat1,
    STATE(51), 1,
      sym_assignment,
    STATE(71), 2,
      sym_string,
      sym_string_single_quote,
  [616] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_object_repeat1,
    STATE(51), 1,
      sym_assignment,
    STATE(71), 2,
      sym_string,
      sym_string_single_quote,
  [642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_QMARK,
    ACTIONS(75), 7,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_DOT,
    ACTIONS(149), 6,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 7,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_ATimport,
  [686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 7,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_ATimport,
  [699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 7,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_ATimport,
  [712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 7,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_ATimport,
  [725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 7,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_ATimport,
  [738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 7,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_ATimport,
  [751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 7,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_ATimport,
  [764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 7,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_ATimport,
  [777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 7,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_ATimport,
  [790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 6,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(165), 4,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [815] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    STATE(48), 2,
      sym_string,
      sym_string_single_quote,
  [832] = 4,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym__string_single_quote_content,
    ACTIONS(173), 2,
      sym_string_single_quote_content,
      sym_escape_sequence,
  [846] = 4,
    ACTIONS(175), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym__string_content,
    ACTIONS(179), 2,
      sym_string_content,
      sym_escape_sequence,
  [860] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    STATE(44), 1,
      sym_string_single_quote,
    STATE(45), 1,
      sym_string,
  [876] = 4,
    ACTIONS(175), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(56), 1,
      aux_sym__string_single_quote_content,
    ACTIONS(184), 2,
      sym_string_single_quote_content,
      sym_escape_sequence,
  [890] = 4,
    ACTIONS(175), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym__string_content,
    ACTIONS(189), 2,
      sym_string_content,
      sym_escape_sequence,
  [904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 4,
      sym_word,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [914] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      sym_string,
    STATE(43), 1,
      sym_string_single_quote,
  [930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    STATE(49), 2,
      sym_string,
      sym_string_single_quote,
  [944] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    STATE(46), 1,
      sym_string_single_quote,
    STATE(47), 1,
      sym_string,
  [960] = 4,
    ACTIONS(175), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    STATE(56), 1,
      aux_sym__string_single_quote_content,
    ACTIONS(193), 2,
      sym_string_single_quote_content,
      sym_escape_sequence,
  [974] = 4,
    ACTIONS(175), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym__string_content,
    ACTIONS(197), 2,
      sym_string_content,
      sym_escape_sequence,
  [988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_import_repeat2,
  [1001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_import_repeat2,
  [1014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_list_repeat1,
  [1027] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      aux_sym_list_repeat1,
  [1040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_list_repeat1,
  [1053] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_import_repeat2,
  [1066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [1082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
  [1089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_word,
  [1096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_EQ,
  [1103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_PIPE,
  [1110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_word,
  [1117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_PIPE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 40,
  [SMALL_STATE(14)] = 80,
  [SMALL_STATE(15)] = 101,
  [SMALL_STATE(16)] = 122,
  [SMALL_STATE(17)] = 143,
  [SMALL_STATE(18)] = 164,
  [SMALL_STATE(19)] = 186,
  [SMALL_STATE(20)] = 205,
  [SMALL_STATE(21)] = 224,
  [SMALL_STATE(22)] = 243,
  [SMALL_STATE(23)] = 262,
  [SMALL_STATE(24)] = 281,
  [SMALL_STATE(25)] = 300,
  [SMALL_STATE(26)] = 321,
  [SMALL_STATE(27)] = 340,
  [SMALL_STATE(28)] = 359,
  [SMALL_STATE(29)] = 378,
  [SMALL_STATE(30)] = 399,
  [SMALL_STATE(31)] = 432,
  [SMALL_STATE(32)] = 465,
  [SMALL_STATE(33)] = 493,
  [SMALL_STATE(34)] = 521,
  [SMALL_STATE(35)] = 549,
  [SMALL_STATE(36)] = 564,
  [SMALL_STATE(37)] = 590,
  [SMALL_STATE(38)] = 616,
  [SMALL_STATE(39)] = 642,
  [SMALL_STATE(40)] = 658,
  [SMALL_STATE(41)] = 673,
  [SMALL_STATE(42)] = 686,
  [SMALL_STATE(43)] = 699,
  [SMALL_STATE(44)] = 712,
  [SMALL_STATE(45)] = 725,
  [SMALL_STATE(46)] = 738,
  [SMALL_STATE(47)] = 751,
  [SMALL_STATE(48)] = 764,
  [SMALL_STATE(49)] = 777,
  [SMALL_STATE(50)] = 790,
  [SMALL_STATE(51)] = 802,
  [SMALL_STATE(52)] = 815,
  [SMALL_STATE(53)] = 832,
  [SMALL_STATE(54)] = 846,
  [SMALL_STATE(55)] = 860,
  [SMALL_STATE(56)] = 876,
  [SMALL_STATE(57)] = 890,
  [SMALL_STATE(58)] = 904,
  [SMALL_STATE(59)] = 914,
  [SMALL_STATE(60)] = 930,
  [SMALL_STATE(61)] = 944,
  [SMALL_STATE(62)] = 960,
  [SMALL_STATE(63)] = 974,
  [SMALL_STATE(64)] = 988,
  [SMALL_STATE(65)] = 1001,
  [SMALL_STATE(66)] = 1014,
  [SMALL_STATE(67)] = 1027,
  [SMALL_STATE(68)] = 1040,
  [SMALL_STATE(69)] = 1053,
  [SMALL_STATE(70)] = 1066,
  [SMALL_STATE(71)] = 1074,
  [SMALL_STATE(72)] = 1082,
  [SMALL_STATE(73)] = 1089,
  [SMALL_STATE(74)] = 1096,
  [SMALL_STATE(75)] = 1103,
  [SMALL_STATE(76)] = 1110,
  [SMALL_STATE(77)] = 1117,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_single_quote, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_single_quote, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 4, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary, 5, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__value, 1, 0, 0), SHIFT(3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat2, 2, 0, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2, 0, 3), SHIFT_REPEAT(40),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2, 0, 3), SHIFT_REPEAT(57),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2, 0, 3), SHIFT_REPEAT(53),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2, 0, 3), SHIFT_REPEAT(73),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2, 0, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat2, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 1, 0, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 6, 0, 5),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_assignment, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5, 0, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2, 0, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2, 0, 0),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2, 0, 0), SHIFT_REPEAT(54),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_single_quote_content, 2, 0, 0),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_single_quote_content, 2, 0, 0), SHIFT_REPEAT(56),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_repeat2, 2, 0, 3), SHIFT_REPEAT(34),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat2, 2, 0, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [221] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
