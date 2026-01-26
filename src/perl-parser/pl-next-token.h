
/* PL_NEXT_TOKEN
 *
 * Argument-less next-token framework around PERL_NEXT_TOKEN
 * using PL_parser as an argument.
 *
 * Status:
 * PL_NEXT_TOKEN_EXISTS .......... Predicate: is there a next token?
 * PL_NEXT_TOKEN_LENGTH .......... Current number of cached next tokens
 * PL_NEXT_TOKEN_SIZE ............ Maximum number of cached next tokens
 *
 * Data management:
 * PL_NEXT_TOKEN_HEAD ............ Index of the item to be read as the next token
 * PL_NEXT_TOKEN_HEAD_VALUE ...... Read the next token's value
 * PL_NEXT_TOKEN_HEAD_TOKEN ...... Read the next token's type/id
 * PL_NEXT_TOKEN_HEAD_DISCARD .... Discard current head and move to the next item
 * PL_NEXT_TOKEN_TAIL ............ Index of the item to be written as a new next token
 * PL_NEXT_TOKEN_TAIL_VALUE ...... Lvalue for the new next token's value
 * PL_NEXT_TOKEN_TAIL_TOKEN ...... Lvalue for the new next token's token
 * PL_NEXT_TOKEN_TAIL_ADVANCE .... Advance the tail index for a new next token
 */

#ifndef H_PERL_PARSER_PL_NEXT_TOKEN
#define H_PERL_PARSER_PL_NEXT_TOKEN

#endif
