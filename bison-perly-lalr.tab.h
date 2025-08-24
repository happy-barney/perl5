/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_PERL_BISON_BISON_PERLY_LALR_TAB_H_INCLUDED
# define YY_PERL_BISON_BISON_PERLY_LALR_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef PERL_BISON_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define PERL_BISON_DEBUG 1
#  else
#   define PERL_BISON_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define PERL_BISON_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined PERL_BISON_DEBUG */
#if PERL_BISON_DEBUG
extern int Perl_Bison_debug;
#endif
/* "%code requires" blocks.  */
#line 42 "perly.y"

/* code requires is generated into `perly.h` */
#	define YYFPRINTF(file, fmt, ...) PerlIO_printf(Perl_debug_log, fmt, ##__VA_ARGS__)

#line 62 "bison-perly-lalr.tab.h"

/* Token kinds.  */
#ifndef PERL_BISON_TOKENTYPE
# define PERL_BISON_TOKENTYPE
  enum Perl_Bison_tokentype
  {
    PERL_BISON_EMPTY = -2,
    PERL_BISON_EOF = 0,            /* "end of file"  */
    PERL_BISON_error = 256,        /* error  */
    PERL_BISON_UNDEF = 257,        /* "invalid token"  */
    GRAMPROG = 258,                /* GRAMPROG  */
    GRAMEXPR = 259,                /* GRAMEXPR  */
    GRAMBLOCK = 260,               /* GRAMBLOCK  */
    GRAMBARESTMT = 261,            /* GRAMBARESTMT  */
    GRAMFULLSTMT = 262,            /* GRAMFULLSTMT  */
    GRAMSTMTSEQ = 263,             /* GRAMSTMTSEQ  */
    GRAMSUBSIGNATURE = 264,        /* GRAMSUBSIGNATURE  */
    PERLY_AMPERSAND = 265,         /* PERLY_AMPERSAND  */
    PERLY_BRACE_OPEN = 266,        /* PERLY_BRACE_OPEN  */
    PERLY_BRACE_CLOSE = 267,       /* PERLY_BRACE_CLOSE  */
    PERLY_BRACKET_OPEN = 268,      /* PERLY_BRACKET_OPEN  */
    PERLY_BRACKET_CLOSE = 269,     /* PERLY_BRACKET_CLOSE  */
    PERLY_COMMA = 270,             /* PERLY_COMMA  */
    PERLY_DOLLAR = 271,            /* PERLY_DOLLAR  */
    PERLY_DOT = 272,               /* PERLY_DOT  */
    PERLY_EQUAL_SIGN = 273,        /* PERLY_EQUAL_SIGN  */
    PERLY_MINUS = 274,             /* PERLY_MINUS  */
    PERLY_PERCENT_SIGN = 275,      /* PERLY_PERCENT_SIGN  */
    PERLY_PLUS = 276,              /* PERLY_PLUS  */
    PERLY_SEMICOLON = 277,         /* PERLY_SEMICOLON  */
    PERLY_SLASH = 278,             /* PERLY_SLASH  */
    PERLY_SNAIL = 279,             /* PERLY_SNAIL  */
    PERLY_STAR = 280,              /* PERLY_STAR  */
    KW_FORMAT = 281,               /* KW_FORMAT  */
    KW_PACKAGE = 282,              /* KW_PACKAGE  */
    KW_CLASS = 283,                /* KW_CLASS  */
    KW_LOCAL = 284,                /* KW_LOCAL  */
    KW_MY = 285,                   /* KW_MY  */
    KW_FIELD = 286,                /* KW_FIELD  */
    KW_IF = 287,                   /* KW_IF  */
    KW_ELSE = 288,                 /* KW_ELSE  */
    KW_ELSIF = 289,                /* KW_ELSIF  */
    KW_UNLESS = 290,               /* KW_UNLESS  */
    KW_FOR = 291,                  /* KW_FOR  */
    KW_UNTIL = 292,                /* KW_UNTIL  */
    KW_WHILE = 293,                /* KW_WHILE  */
    KW_CONTINUE = 294,             /* KW_CONTINUE  */
    KW_GIVEN = 295,                /* KW_GIVEN  */
    KW_WHEN = 296,                 /* KW_WHEN  */
    KW_DEFAULT = 297,              /* KW_DEFAULT  */
    KW_TRY = 298,                  /* KW_TRY  */
    KW_CATCH = 299,                /* KW_CATCH  */
    KW_FINALLY = 300,              /* KW_FINALLY  */
    KW_DEFER = 301,                /* KW_DEFER  */
    KW_REQUIRE = 302,              /* KW_REQUIRE  */
    KW_DO = 303,                   /* KW_DO  */
    KW_USE_or_NO = 304,            /* KW_USE_or_NO  */
    KW_SUB_named = 305,            /* KW_SUB_named  */
    KW_SUB_named_sig = 306,        /* KW_SUB_named_sig  */
    KW_SUB_anon = 307,             /* KW_SUB_anon  */
    KW_SUB_anon_sig = 308,         /* KW_SUB_anon_sig  */
    KW_METHOD_named = 309,         /* KW_METHOD_named  */
    KW_METHOD_anon = 310,          /* KW_METHOD_anon  */
    BAREWORD = 311,                /* BAREWORD  */
    METHCALL0 = 312,               /* METHCALL0  */
    METHCALL = 313,                /* METHCALL  */
    THING = 314,                   /* THING  */
    PMFUNC = 315,                  /* PMFUNC  */
    PRIVATEREF = 316,              /* PRIVATEREF  */
    QWLIST = 317,                  /* QWLIST  */
    FUNC0OP = 318,                 /* FUNC0OP  */
    FUNC0SUB = 319,                /* FUNC0SUB  */
    UNIOPSUB = 320,                /* UNIOPSUB  */
    LSTOPSUB = 321,                /* LSTOPSUB  */
    PLUGEXPR = 322,                /* PLUGEXPR  */
    PLUGSTMT = 323,                /* PLUGSTMT  */
    LABEL = 324,                   /* LABEL  */
    LOOPEX = 325,                  /* LOOPEX  */
    DOTDOT = 326,                  /* DOTDOT  */
    YADAYADA = 327,                /* YADAYADA  */
    FUNC0 = 328,                   /* FUNC0  */
    FUNC1 = 329,                   /* FUNC1  */
    FUNC = 330,                    /* FUNC  */
    UNIOP = 331,                   /* UNIOP  */
    LSTOP = 332,                   /* LSTOP  */
    BLKLSTOP = 333,                /* BLKLSTOP  */
    POWOP = 334,                   /* POWOP  */
    MULOP = 335,                   /* MULOP  */
    ADDOP = 336,                   /* ADDOP  */
    DOLSHARP = 337,                /* DOLSHARP  */
    HASHBRACK = 338,               /* HASHBRACK  */
    NOAMP = 339,                   /* NOAMP  */
    COLONATTR = 340,               /* COLONATTR  */
    FORMLBRACK = 341,              /* FORMLBRACK  */
    FORMRBRACK = 342,              /* FORMRBRACK  */
    SUBLEXSTART = 343,             /* SUBLEXSTART  */
    SUBLEXEND = 344,               /* SUBLEXEND  */
    PHASER = 345,                  /* PHASER  */
    PREC_LOW = 346,                /* PREC_LOW  */
    PLUGIN_LOW_OP = 347,           /* PLUGIN_LOW_OP  */
    OROP = 348,                    /* OROP  */
    PLUGIN_LOGICAL_OR_LOW_OP = 349, /* PLUGIN_LOGICAL_OR_LOW_OP  */
    ANDOP = 350,                   /* ANDOP  */
    PLUGIN_LOGICAL_AND_LOW_OP = 351, /* PLUGIN_LOGICAL_AND_LOW_OP  */
    NOTOP = 352,                   /* NOTOP  */
    ASSIGNOP = 353,                /* ASSIGNOP  */
    PLUGIN_ASSIGN_OP = 354,        /* PLUGIN_ASSIGN_OP  */
    PERLY_QUESTION_MARK = 355,     /* PERLY_QUESTION_MARK  */
    PERLY_COLON = 356,             /* PERLY_COLON  */
    OROR = 357,                    /* OROR  */
    DORDOR = 358,                  /* DORDOR  */
    PLUGIN_LOGICAL_OR_OP = 359,    /* PLUGIN_LOGICAL_OR_OP  */
    ANDAND = 360,                  /* ANDAND  */
    PLUGIN_LOGICAL_AND_OP = 361,   /* PLUGIN_LOGICAL_AND_OP  */
    BITOROP = 362,                 /* BITOROP  */
    BITANDOP = 363,                /* BITANDOP  */
    CHEQOP = 364,                  /* CHEQOP  */
    NCEQOP = 365,                  /* NCEQOP  */
    CHRELOP = 366,                 /* CHRELOP  */
    NCRELOP = 367,                 /* NCRELOP  */
    PLUGIN_REL_OP = 368,           /* PLUGIN_REL_OP  */
    SHIFTOP = 369,                 /* SHIFTOP  */
    PLUGIN_ADD_OP = 370,           /* PLUGIN_ADD_OP  */
    PLUGIN_MUL_OP = 371,           /* PLUGIN_MUL_OP  */
    MATCHOP = 372,                 /* MATCHOP  */
    PERLY_EXCLAMATION_MARK = 373,  /* PERLY_EXCLAMATION_MARK  */
    PERLY_TILDE = 374,             /* PERLY_TILDE  */
    UMINUS = 375,                  /* UMINUS  */
    REFGEN = 376,                  /* REFGEN  */
    PLUGIN_POW_OP = 377,           /* PLUGIN_POW_OP  */
    PREINC = 378,                  /* PREINC  */
    PREDEC = 379,                  /* PREDEC  */
    POSTINC = 380,                 /* POSTINC  */
    POSTDEC = 381,                 /* POSTDEC  */
    POSTJOIN = 382,                /* POSTJOIN  */
    PLUGIN_HIGH_OP = 383,          /* PLUGIN_HIGH_OP  */
    ARROW = 384,                   /* ARROW  */
    PERLY_PAREN_CLOSE = 385,       /* PERLY_PAREN_CLOSE  */
    PERLY_PAREN_OPEN = 386         /* PERLY_PAREN_OPEN  */
  };
  typedef enum Perl_Bison_tokentype Perl_Bison_token_kind_t;
#endif

/* Value type.  */
#if ! defined PERL_BISON_STYPE && ! defined PERL_BISON_STYPE_IS_DECLARED
union PERL_BISON_STYPE
{
#line 47 "perly.y"

    I32	ival; /* __DEFAULT__ (marker for regen_perly.pl;
				must always be 1st union member) */
    void *pval;
    OP *opval;
    GV *gvval;

#line 218 "bison-perly-lalr.tab.h"

};
typedef union PERL_BISON_STYPE PERL_BISON_STYPE;
# define PERL_BISON_STYPE_IS_TRIVIAL 1
# define PERL_BISON_STYPE_IS_DECLARED 1
#endif




int Perl_Bison_parse (void);


#endif /* !YY_PERL_BISON_BISON_PERLY_LALR_TAB_H_INCLUDED  */
