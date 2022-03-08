module.exports = grammar({
    name: 'lua_pattern',

    rules: {
        source_pattern: $ => seq(
            optional($.start_of_line),
            repeat($._patterns),
            optional($.end_of_line),
        ),

        // TODO: ^ and $
        // TODO: espaced characters
        _patterns: $ => choice(
            $.meta_character,
            $.special_sequence,
            $.set,
            $.quantifier,
            $.string_literal,
            $.escaped_special_char,
        ),
        escaped_special_char: $ => seq(
            "\\",
            choice("$","^","\\","\"","\'","(",")"),
        ),
        

        meta_character: $ => '.',

        start_of_line: $ => "^",
        end_of_line: $ => "$",

        special_sequence: $ => seq("\%",
            choice(
                $.letter,
                $.lowercase_letter,
                $.uppercase_letter,
                $.digit,
                $.whitespace_char,
                $.hex_digit,
                $.punctuation_char,
                $.printable_char,
                $.control_char,
                $.alphanumeric_char,
            )),

        letter: $ => "a",
        lowercase_letter: $ => "l",
        uppercase_letter: $ => "u",
        digit: $ => "d",
        whitespace_char: $ => "s",
        hex_digit: $ => "x",
        punctuation_char: $ => "p",
        printable_char: $ => "g",
        control_char: $ => "c",
        alphanumeric_char: $ => "w",

        set: $ => seq( 
            "\[",
            optional($.negation),
            repeat1(
                $._pattern_contents
            ),
            // /[a-zA-Z_][-a-zA-Z_0-9]*/,
            "\]"),

        negation: $ => "\^",

        _pattern_contents: $ => choice(
            $.alpha_numeric,
            $.range,
            // $.single_char
        ),

        range: $ => seq(
            $.alpha_numeric,
            "\-",
            $.alpha_numeric
        ),

        alpha_numeric: $ => /[a-zA-Z0-9]/,

        single_char: $ => /[a-zA-Z0-9]/,

        string_literal: $ => /[a-zA-Z_0-9]+/,

        quantifier: $ => token(choice(
            '+',
            '*',
            '?',
            '-',
        )),
    }
});
