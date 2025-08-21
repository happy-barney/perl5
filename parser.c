/*    perly.c
 *
 *    Copyright (c) 2025 by Larry Wall and others
 *
 *    You may distribute under the terms of either the GNU General Public
 *    License or the Artistic License, as specified in the README file.
 */

/*
 * This file contains helper functions for parser, such as
 * - functions bridging Perl and bison
 */

#include "EXTERN.h"
#define PERL_IN_PERLY_C
#include "perl.h"
#include "feature.h"
#include "keywords.h"

int
Perl_yyparse (pTHX_ int gramtype)
{
    return Perl_Perly_parse (aTHX_ gramtype);
}

int
Perl_Perly_lex (pTHX_ PERL_PERLY_STYPE* lval)
{
    int token = Perl_yylex (aTHX);

    /* Idea here:
     * - current code will send NULL as lval pointer
     * - bison generated code will sent its own address
     *   but toke.c will still use current approach
     */
    if (lval) {
        *lval = PL_parser->yylval;
    }

    return token;
}
