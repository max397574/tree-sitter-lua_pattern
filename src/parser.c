#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_BSLASH = 1,
  anon_sym_DOLLAR = 2,
  anon_sym_CARET = 3,
  anon_sym_DQUOTE = 4,
  anon_sym_SQUOTE = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  sym_meta_character = 8,
  anon_sym_PERCENT = 9,
  sym_letter = 10,
  sym_lowercase_letter = 11,
  sym_uppercase_letter = 12,
  sym_digit = 13,
  sym_whitespace_char = 14,
  sym_hex_digit = 15,
  sym_punctuation_char = 16,
  sym_printable_char = 17,
  sym_control_char = 18,
  sym_alphanumeric_char = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  anon_sym_DASH = 22,
  aux_sym_alpha_numeric_token1 = 23,
  sym_string_literal = 24,
  sym_quantifier = 25,
  sym_source_pattern = 26,
  sym__patterns = 27,
  sym_escaped_special_char = 28,
  sym_start_of_line = 29,
  sym_end_of_line = 30,
  sym_special_sequence = 31,
  sym_set = 32,
  sym_negation = 33,
  sym__pattern_contents = 34,
  sym_range = 35,
  sym_alpha_numeric = 36,
  aux_sym_source_pattern_repeat1 = 37,
  aux_sym_set_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_CARET] = "^",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_meta_character] = "meta_character",
  [anon_sym_PERCENT] = "%",
  [sym_letter] = "letter",
  [sym_lowercase_letter] = "lowercase_letter",
  [sym_uppercase_letter] = "uppercase_letter",
  [sym_digit] = "digit",
  [sym_whitespace_char] = "whitespace_char",
  [sym_hex_digit] = "hex_digit",
  [sym_punctuation_char] = "punctuation_char",
  [sym_printable_char] = "printable_char",
  [sym_control_char] = "control_char",
  [sym_alphanumeric_char] = "alphanumeric_char",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH] = "-",
  [aux_sym_alpha_numeric_token1] = "alpha_numeric_token1",
  [sym_string_literal] = "string_literal",
  [sym_quantifier] = "quantifier",
  [sym_source_pattern] = "source_pattern",
  [sym__patterns] = "_patterns",
  [sym_escaped_special_char] = "escaped_special_char",
  [sym_start_of_line] = "start_of_line",
  [sym_end_of_line] = "end_of_line",
  [sym_special_sequence] = "special_sequence",
  [sym_set] = "set",
  [sym_negation] = "negation",
  [sym__pattern_contents] = "_pattern_contents",
  [sym_range] = "range",
  [sym_alpha_numeric] = "alpha_numeric",
  [aux_sym_source_pattern_repeat1] = "source_pattern_repeat1",
  [aux_sym_set_repeat1] = "set_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_meta_character] = sym_meta_character,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym_letter] = sym_letter,
  [sym_lowercase_letter] = sym_lowercase_letter,
  [sym_uppercase_letter] = sym_uppercase_letter,
  [sym_digit] = sym_digit,
  [sym_whitespace_char] = sym_whitespace_char,
  [sym_hex_digit] = sym_hex_digit,
  [sym_punctuation_char] = sym_punctuation_char,
  [sym_printable_char] = sym_printable_char,
  [sym_control_char] = sym_control_char,
  [sym_alphanumeric_char] = sym_alphanumeric_char,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_alpha_numeric_token1] = aux_sym_alpha_numeric_token1,
  [sym_string_literal] = sym_string_literal,
  [sym_quantifier] = sym_quantifier,
  [sym_source_pattern] = sym_source_pattern,
  [sym__patterns] = sym__patterns,
  [sym_escaped_special_char] = sym_escaped_special_char,
  [sym_start_of_line] = sym_start_of_line,
  [sym_end_of_line] = sym_end_of_line,
  [sym_special_sequence] = sym_special_sequence,
  [sym_set] = sym_set,
  [sym_negation] = sym_negation,
  [sym__pattern_contents] = sym__pattern_contents,
  [sym_range] = sym_range,
  [sym_alpha_numeric] = sym_alpha_numeric,
  [aux_sym_source_pattern_repeat1] = aux_sym_source_pattern_repeat1,
  [aux_sym_set_repeat1] = aux_sym_set_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
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
  [sym_meta_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [sym_letter] = {
    .visible = true,
    .named = true,
  },
  [sym_lowercase_letter] = {
    .visible = true,
    .named = true,
  },
  [sym_uppercase_letter] = {
    .visible = true,
    .named = true,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_whitespace_char] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_punctuation_char] = {
    .visible = true,
    .named = true,
  },
  [sym_printable_char] = {
    .visible = true,
    .named = true,
  },
  [sym_control_char] = {
    .visible = true,
    .named = true,
  },
  [sym_alphanumeric_char] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_alpha_numeric_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_quantifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__patterns] = {
    .visible = false,
    .named = true,
  },
  [sym_escaped_special_char] = {
    .visible = true,
    .named = true,
  },
  [sym_start_of_line] = {
    .visible = true,
    .named = true,
  },
  [sym_end_of_line] = {
    .visible = true,
    .named = true,
  },
  [sym_special_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_negation] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern_contents] = {
    .visible = false,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_alpha_numeric] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_set_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == '%') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '?') ADVANCE(29);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ']') ADVANCE(25);
      if (lookahead == '^') ADVANCE(7);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'g') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(23);
      if (lookahead == 'x') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ']') ADVANCE(25);
      if (lookahead == '^') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'g') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(23);
      if (lookahead == 'x') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == '%') ADVANCE(13);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(29);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '^') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_meta_character);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_letter);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_lowercase_letter);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_uppercase_letter);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_whitespace_char);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_hex_digit);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_punctuation_char);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_printable_char);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_control_char);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_alphanumeric_char);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_alpha_numeric_token1);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_string_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_quantifier);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_meta_character] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_letter] = ACTIONS(1),
    [sym_lowercase_letter] = ACTIONS(1),
    [sym_uppercase_letter] = ACTIONS(1),
    [sym_digit] = ACTIONS(1),
    [sym_whitespace_char] = ACTIONS(1),
    [sym_hex_digit] = ACTIONS(1),
    [sym_punctuation_char] = ACTIONS(1),
    [sym_printable_char] = ACTIONS(1),
    [sym_control_char] = ACTIONS(1),
    [sym_alphanumeric_char] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_alpha_numeric_token1] = ACTIONS(1),
    [sym_quantifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_pattern] = STATE(27),
    [sym__patterns] = STATE(3),
    [sym_escaped_special_char] = STATE(3),
    [sym_start_of_line] = STATE(2),
    [sym_end_of_line] = STATE(25),
    [sym_special_sequence] = STATE(3),
    [sym_set] = STATE(3),
    [aux_sym_source_pattern_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_BSLASH] = ACTIONS(5),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(9),
    [sym_meta_character] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(11),
    [sym_quantifier] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      anon_sym_BSLASH,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_end_of_line,
    ACTIONS(19), 3,
      sym_meta_character,
      sym_string_literal,
      sym_quantifier,
    STATE(4), 5,
      sym__patterns,
      sym_escaped_special_char,
      sym_special_sequence,
      sym_set,
      aux_sym_source_pattern_repeat1,
  [31] = 8,
    ACTIONS(5), 1,
      anon_sym_BSLASH,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_end_of_line,
    ACTIONS(21), 3,
      sym_meta_character,
      sym_string_literal,
      sym_quantifier,
    STATE(5), 5,
      sym__patterns,
      sym_escaped_special_char,
      sym_special_sequence,
      sym_set,
      aux_sym_source_pattern_repeat1,
  [62] = 8,
    ACTIONS(5), 1,
      anon_sym_BSLASH,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym_end_of_line,
    ACTIONS(21), 3,
      sym_meta_character,
      sym_string_literal,
      sym_quantifier,
    STATE(5), 5,
      sym__patterns,
      sym_escaped_special_char,
      sym_special_sequence,
      sym_set,
      aux_sym_source_pattern_repeat1,
  [93] = 6,
    ACTIONS(27), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_PERCENT,
    ACTIONS(36), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(30), 3,
      sym_meta_character,
      sym_string_literal,
      sym_quantifier,
    STATE(5), 5,
      sym__patterns,
      sym_escaped_special_char,
      sym_special_sequence,
      sym_set,
      aux_sym_source_pattern_repeat1,
  [119] = 1,
    ACTIONS(39), 10,
      sym_letter,
      sym_lowercase_letter,
      sym_uppercase_letter,
      sym_digit,
      sym_whitespace_char,
      sym_hex_digit,
      sym_punctuation_char,
      sym_printable_char,
      sym_control_char,
      sym_alphanumeric_char,
  [132] = 1,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
      sym_meta_character,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      sym_string_literal,
      sym_quantifier,
  [143] = 1,
    ACTIONS(43), 8,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
      sym_meta_character,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      sym_string_literal,
      sym_quantifier,
  [154] = 1,
    ACTIONS(45), 8,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
      sym_meta_character,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      sym_string_literal,
      sym_quantifier,
  [165] = 1,
    ACTIONS(47), 8,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
      sym_meta_character,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      sym_string_literal,
      sym_quantifier,
  [176] = 1,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
      sym_meta_character,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      sym_string_literal,
      sym_quantifier,
  [187] = 1,
    ACTIONS(51), 7,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [197] = 5,
    ACTIONS(53), 1,
      anon_sym_CARET,
    ACTIONS(55), 1,
      aux_sym_alpha_numeric_token1,
    STATE(17), 1,
      sym_negation,
    STATE(19), 1,
      sym_alpha_numeric,
    STATE(16), 3,
      sym__pattern_contents,
      sym_range,
      aux_sym_set_repeat1,
  [215] = 4,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    ACTIONS(59), 1,
      aux_sym_alpha_numeric_token1,
    STATE(19), 1,
      sym_alpha_numeric,
    STATE(14), 3,
      sym__pattern_contents,
      sym_range,
      aux_sym_set_repeat1,
  [230] = 4,
    ACTIONS(55), 1,
      aux_sym_alpha_numeric_token1,
    ACTIONS(62), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym_alpha_numeric,
    STATE(14), 3,
      sym__pattern_contents,
      sym_range,
      aux_sym_set_repeat1,
  [245] = 4,
    ACTIONS(55), 1,
      aux_sym_alpha_numeric_token1,
    ACTIONS(64), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym_alpha_numeric,
    STATE(14), 3,
      sym__pattern_contents,
      sym_range,
      aux_sym_set_repeat1,
  [260] = 3,
    ACTIONS(55), 1,
      aux_sym_alpha_numeric_token1,
    STATE(19), 1,
      sym_alpha_numeric,
    STATE(15), 3,
      sym__pattern_contents,
      sym_range,
      aux_sym_set_repeat1,
  [272] = 1,
    ACTIONS(66), 3,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_alpha_numeric_token1,
  [278] = 2,
    ACTIONS(70), 1,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_RBRACK,
      aux_sym_alpha_numeric_token1,
  [286] = 2,
    ACTIONS(55), 1,
      aux_sym_alpha_numeric_token1,
    STATE(21), 1,
      sym_alpha_numeric,
  [293] = 1,
    ACTIONS(72), 2,
      anon_sym_RBRACK,
      aux_sym_alpha_numeric_token1,
  [298] = 1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
  [302] = 1,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
  [306] = 1,
    ACTIONS(76), 1,
      aux_sym_alpha_numeric_token1,
  [310] = 1,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
  [314] = 1,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
  [318] = 1,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 119,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 143,
  [SMALL_STATE(9)] = 154,
  [SMALL_STATE(10)] = 165,
  [SMALL_STATE(11)] = 176,
  [SMALL_STATE(12)] = 187,
  [SMALL_STATE(13)] = 197,
  [SMALL_STATE(14)] = 215,
  [SMALL_STATE(15)] = 230,
  [SMALL_STATE(16)] = 245,
  [SMALL_STATE(17)] = 260,
  [SMALL_STATE(18)] = 272,
  [SMALL_STATE(19)] = 278,
  [SMALL_STATE(20)] = 286,
  [SMALL_STATE(21)] = 293,
  [SMALL_STATE(22)] = 298,
  [SMALL_STATE(23)] = 302,
  [SMALL_STATE(24)] = 306,
  [SMALL_STATE(25)] = 310,
  [SMALL_STATE(26)] = 314,
  [SMALL_STATE(27)] = 318,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_pattern, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_pattern, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_pattern, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_pattern_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_pattern_repeat1, 2), SHIFT_REPEAT(12),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_pattern_repeat1, 2), SHIFT_REPEAT(5),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_pattern_repeat1, 2), SHIFT_REPEAT(6),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_pattern_repeat1, 2), SHIFT_REPEAT(13),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_of_line, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_special_char, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_sequence, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_repeat1, 2), SHIFT_REPEAT(18),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alpha_numeric, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern_contents, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_of_line, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_pattern, 3),
  [80] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lua_pattern(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
