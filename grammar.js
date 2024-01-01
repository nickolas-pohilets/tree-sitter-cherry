function comma_list($, element) {
    return seq(
        repeat($._newline),
        element,
        repeat(
            seq(
                $._comma,
                element
            )
        ),
        optional($._comma),
    );
}

let newlineRE = /\r?\n|\r/;

module.exports = grammar({
    name: 'Cherry',

    extras: ($) => [
        $._whitespace,
        $.comment,
        $.multiline_comment,
        $.unterminated_multiline_comment,
        // $.directive,
        // $.diagnostic,
    ],

    externals: $ => [
        $._whitespace,
        $.multiline_comment,
        $.unterminated_multiline_comment,
    ],

    word: $ => $.identifier,

    rules: {
        source_file: $ => repeat(
            seq(
                optional(
                    $._declaration,
                ),
                $._newline,
            )
        ),

        comment: $ => token(seq('//', /[^\r\n]*/, newlineRE)),
    
        _declaration: $ => choice(
          $.variable_declaration,
          $.function_declaration,
          // TODO: other kinds of definitions
        ),

        variable_declaration: $ => seq(
            choice('var', 'let'),
            field('name', $.identifier),
            optional(
                seq(':', field('type', $._type)),
            ),
            optional(
                seq('=', field('initial_value', $._expression)),
            ),
        ),
    
        function_declaration: $ => seq(
          'func',
          field('name', $.identifier),
          field('params', $.parameter_list),
          optional(
            seq('->', $._type)
          ),
          field('body', $.block)
        ),
    
        parameter_list: $ => seq(
          '(',
           // TODO: parameters
          ')'
        ),
    
        _type: $ => choice(
          $.builtin_type,
          $.array_type,
          $.dictionary_type,
          // TODO: other kinds of types
        ),

        builtin_type: $ => choice(
            'Bool',
            'String',
            'Int',
        ),

        array_type: $ => seq(
            '[',
            $._type,
            ']',
        ),

        dictionary_type: $ => seq(
            '[',
            $._type,
            ':',
            $._type,
            ']',
        ),
    
        block: $ => seq(
          '{',
          repeat($._statement),
          '}'
        ),
    
        _statement: $ => choice(
          $.return_statement
          // TODO: other kinds of statements
        ),
    
        return_statement: $ => seq(
          'return',
          $._expression,
          ';'
        ),
    
        _expression: $ => choice(
          $.identifier,
          $._literal,
          // TODO: other kinds of expressions
        ),
    
        identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

        _literal: $ => choice(
            $.bool_literal,
            $.integer_literal,
            $.array_literal,
        ),

        bool_literal: $ => choice(
            'true', 'false'
        ),
    
        integer_literal: $ => /-?\d+/,

        array_literal: $ => seq(
            '[',
            choice(
                repeat($._newline),
                comma_list($, $._expression),
            ),
            ']',
        ),
        dictionary_literal: $ => seq(
            '[',
            choice(
                ':',
                comma_list($, $.dictionary_literal_pair),
            ),
            ']',
        ),

        dictionary_literal_pair: $ => seq(
            field('key', $._expression),
            ':',
            field('value', $._expression),
        ),

        _newline: $ => newlineRE,
        _comma: $ => choice(
            seq(',', repeat($._newline)),
            repeat1($._newline)
        ),
      },
});