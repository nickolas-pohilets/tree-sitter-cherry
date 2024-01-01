#include <tree_sitter/parser.h>
#include <cstdint>
#include <cassert>
#include <cstdlib>

namespace {

enum TokenType {
    WHITESPACE,
    MULTILINE_COMMENT,
    UNTERMINATED_MULTILINE_COMMENT,
};

struct Serializer {
    char * ptr;
    char * end;

    Serializer(char * buffer, unsigned length) {
        ptr = buffer;
        end = buffer + length;
    }

    template<class T>
    void write(T value) {
        assert(ptr + sizeof(T) <= end);
        *reinterpret_cast<T *>(ptr) = value;
        ptr += sizeof(T);
    }

    template<class T>
    void read(T *result) {
        assert(ptr + sizeof(T) <= end);
        *result = *reinterpret_cast<T *>(ptr);
        ptr += sizeof(T);
    }
};

bool is_space(int32_t c) {
    return c == ' ' || c == '\t';
}

}

extern "C" void * tree_sitter_Cherry_external_scanner_create() {
    return NULL;
}

extern "C" void tree_sitter_Cherry_external_scanner_destroy(void *payload) {
    // No-op
}

extern "C" unsigned tree_sitter_Cherry_external_scanner_serialize(
    void *payload,
    char *buffer
) {
    Serializer s(buffer, TREE_SITTER_SERIALIZATION_BUFFER_SIZE);
    return s.ptr - buffer;
}

extern "C" void tree_sitter_Cherry_external_scanner_deserialize(
    void *payload,
    const char *buffer,
    unsigned length
) {
    // Serializer s(buffer, length);
}

extern "C" bool tree_sitter_Cherry_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
) {
    // Workaround for https://github.com/tree-sitter/tree-sitter/discussions/884

    if (is_space(lexer->lookahead) && valid_symbols[WHITESPACE]) {
        do {
            lexer->advance(lexer, false);
        } while (is_space(lexer->lookahead));
        lexer->result_symbol = WHITESPACE;
        return true;
    }
    
    if (lexer->lookahead == '/' && valid_symbols[MULTILINE_COMMENT]) {
        uint32_t multiline_comment_depth = 0;
        lexer->advance(lexer, false);
        if (lexer->eof(lexer) || lexer->lookahead != '*') {
            return false;
        }
        lexer->advance(lexer, false);
        multiline_comment_depth += 1;

        while (true) {
            if (lexer->eof(lexer)) {
                lexer->result_symbol = UNTERMINATED_MULTILINE_COMMENT;
                return true;
            }
            if (lexer->lookahead == '*') {
                lexer->advance(lexer, false);

                if (lexer->lookahead == '/') {
                    lexer->advance(lexer, false);
                    multiline_comment_depth -= 1;

                    if (multiline_comment_depth == 0) {
                        lexer->result_symbol = MULTILINE_COMMENT;
                        return true;
                    }
                }
            } else if (lexer->lookahead == '/') {
                lexer->advance(lexer, false);

                if (lexer->lookahead == '*') {
                    lexer->advance(lexer, false);
                    multiline_comment_depth += 1;
                }
            } else {
                lexer->advance(lexer, false);
            }
        }
    }

    return false;
}
