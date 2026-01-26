
/* PERL_PARSER_NEXT_TOKEN
 * Framework to handle the capability of one parser call producing multiple tokens.
 * All macros are function-like and takes parser instance as an argument.
 *
 * Life-cycle:
 * PERL_PARSER_NEXT_TOKEN_INIT () ......... Initialise next token caches
 * PERL_PARSER_NEXT_TOKEN_CLEANUP () ...... Clean up next token caches
 *
 * Status:
 * PERL_PARSER_NEXT_TOKEN_EXISTS () ....... Predicate: is there a next token?
 * PERL_PARSER_NEXT_TOKEN_LENGTH () ....... Current number of cached next tokens
 * PERL_PARSER_NEXT_TOKEN_SIZE () ......... Maximum number of cached next tokens
 *
 * Data management:
 * PERL_PARSER_NEXT_TOKEN_HEAD () ......... Index of the item to be read as the next token
 * PERL_PARSER_NEXT_TOKEN_HEAD_VALUE () ... Read the next token's value
 * PERL_PARSER_NEXT_TOKEN_HEAD_TOKEN () ... Read the next token's type/id
 * PERL_PARSER_NEXT_TOKEN_HEAD_DISCARD () . Discard current head and move to the next item
 * PERL_PARSER_NEXT_TOKEN_TAIL () ......... Index of the item to be written as a new next token
 * PERL_PARSER_NEXT_TOKEN_TAIL_VALUE () ... Lvalue for the new next token's value
 * PERL_PARSER_NEXT_TOKEN_TAIL_TOKEN () ... Lvalue for the new next token's token
 * PERL_PARSER_NEXT_TOKEN_TAIL_ADVANCE () . Advance the tail index for a new next token
 */

#ifndef H_PERL_PARSER_NEXT_TOKEN
#define H_PERL_PARSER_NEXT_TOKEN

#endif
