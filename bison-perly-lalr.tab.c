/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         PERL_BISON_STYPE
/* Substitute the variable and function names.  */
#define yyparse         Perl_Bison_parse
#define yylex           Perl_Bison_lex
#define yyerror         Perl_Bison_error
#define yydebug         Perl_Bison_debug
#define yynerrs         Perl_Bison_nerrs

/* First part of user prologue.  */
#line 38 "perly.y"

#define FOO 1

#line 81 "bison-perly-lalr.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "bison-perly-lalr.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_GRAMPROG = 3,                   /* GRAMPROG  */
  YYSYMBOL_GRAMEXPR = 4,                   /* GRAMEXPR  */
  YYSYMBOL_GRAMBLOCK = 5,                  /* GRAMBLOCK  */
  YYSYMBOL_GRAMBARESTMT = 6,               /* GRAMBARESTMT  */
  YYSYMBOL_GRAMFULLSTMT = 7,               /* GRAMFULLSTMT  */
  YYSYMBOL_GRAMSTMTSEQ = 8,                /* GRAMSTMTSEQ  */
  YYSYMBOL_GRAMSUBSIGNATURE = 9,           /* GRAMSUBSIGNATURE  */
  YYSYMBOL_PERLY_AMPERSAND = 10,           /* PERLY_AMPERSAND  */
  YYSYMBOL_PERLY_BRACE_OPEN = 11,          /* PERLY_BRACE_OPEN  */
  YYSYMBOL_PERLY_BRACE_CLOSE = 12,         /* PERLY_BRACE_CLOSE  */
  YYSYMBOL_PERLY_BRACKET_OPEN = 13,        /* PERLY_BRACKET_OPEN  */
  YYSYMBOL_PERLY_BRACKET_CLOSE = 14,       /* PERLY_BRACKET_CLOSE  */
  YYSYMBOL_PERLY_COMMA = 15,               /* PERLY_COMMA  */
  YYSYMBOL_PERLY_DOLLAR = 16,              /* PERLY_DOLLAR  */
  YYSYMBOL_PERLY_DOT = 17,                 /* PERLY_DOT  */
  YYSYMBOL_PERLY_EQUAL_SIGN = 18,          /* PERLY_EQUAL_SIGN  */
  YYSYMBOL_PERLY_MINUS = 19,               /* PERLY_MINUS  */
  YYSYMBOL_PERLY_PERCENT_SIGN = 20,        /* PERLY_PERCENT_SIGN  */
  YYSYMBOL_PERLY_PLUS = 21,                /* PERLY_PLUS  */
  YYSYMBOL_PERLY_SEMICOLON = 22,           /* PERLY_SEMICOLON  */
  YYSYMBOL_PERLY_SLASH = 23,               /* PERLY_SLASH  */
  YYSYMBOL_PERLY_SNAIL = 24,               /* PERLY_SNAIL  */
  YYSYMBOL_PERLY_STAR = 25,                /* PERLY_STAR  */
  YYSYMBOL_KW_FORMAT = 26,                 /* KW_FORMAT  */
  YYSYMBOL_KW_PACKAGE = 27,                /* KW_PACKAGE  */
  YYSYMBOL_KW_CLASS = 28,                  /* KW_CLASS  */
  YYSYMBOL_KW_LOCAL = 29,                  /* KW_LOCAL  */
  YYSYMBOL_KW_MY = 30,                     /* KW_MY  */
  YYSYMBOL_KW_FIELD = 31,                  /* KW_FIELD  */
  YYSYMBOL_KW_IF = 32,                     /* KW_IF  */
  YYSYMBOL_KW_ELSE = 33,                   /* KW_ELSE  */
  YYSYMBOL_KW_ELSIF = 34,                  /* KW_ELSIF  */
  YYSYMBOL_KW_UNLESS = 35,                 /* KW_UNLESS  */
  YYSYMBOL_KW_FOR = 36,                    /* KW_FOR  */
  YYSYMBOL_KW_UNTIL = 37,                  /* KW_UNTIL  */
  YYSYMBOL_KW_WHILE = 38,                  /* KW_WHILE  */
  YYSYMBOL_KW_CONTINUE = 39,               /* KW_CONTINUE  */
  YYSYMBOL_KW_GIVEN = 40,                  /* KW_GIVEN  */
  YYSYMBOL_KW_WHEN = 41,                   /* KW_WHEN  */
  YYSYMBOL_KW_DEFAULT = 42,                /* KW_DEFAULT  */
  YYSYMBOL_KW_TRY = 43,                    /* KW_TRY  */
  YYSYMBOL_KW_CATCH = 44,                  /* KW_CATCH  */
  YYSYMBOL_KW_FINALLY = 45,                /* KW_FINALLY  */
  YYSYMBOL_KW_DEFER = 46,                  /* KW_DEFER  */
  YYSYMBOL_KW_REQUIRE = 47,                /* KW_REQUIRE  */
  YYSYMBOL_KW_DO = 48,                     /* KW_DO  */
  YYSYMBOL_KW_USE_or_NO = 49,              /* KW_USE_or_NO  */
  YYSYMBOL_KW_SUB_named = 50,              /* KW_SUB_named  */
  YYSYMBOL_KW_SUB_named_sig = 51,          /* KW_SUB_named_sig  */
  YYSYMBOL_KW_SUB_anon = 52,               /* KW_SUB_anon  */
  YYSYMBOL_KW_SUB_anon_sig = 53,           /* KW_SUB_anon_sig  */
  YYSYMBOL_KW_METHOD_named = 54,           /* KW_METHOD_named  */
  YYSYMBOL_KW_METHOD_anon = 55,            /* KW_METHOD_anon  */
  YYSYMBOL_BAREWORD = 56,                  /* BAREWORD  */
  YYSYMBOL_METHCALL0 = 57,                 /* METHCALL0  */
  YYSYMBOL_METHCALL = 58,                  /* METHCALL  */
  YYSYMBOL_THING = 59,                     /* THING  */
  YYSYMBOL_PMFUNC = 60,                    /* PMFUNC  */
  YYSYMBOL_PRIVATEREF = 61,                /* PRIVATEREF  */
  YYSYMBOL_QWLIST = 62,                    /* QWLIST  */
  YYSYMBOL_FUNC0OP = 63,                   /* FUNC0OP  */
  YYSYMBOL_FUNC0SUB = 64,                  /* FUNC0SUB  */
  YYSYMBOL_UNIOPSUB = 65,                  /* UNIOPSUB  */
  YYSYMBOL_LSTOPSUB = 66,                  /* LSTOPSUB  */
  YYSYMBOL_PLUGEXPR = 67,                  /* PLUGEXPR  */
  YYSYMBOL_PLUGSTMT = 68,                  /* PLUGSTMT  */
  YYSYMBOL_LABEL = 69,                     /* LABEL  */
  YYSYMBOL_LOOPEX = 70,                    /* LOOPEX  */
  YYSYMBOL_DOTDOT = 71,                    /* DOTDOT  */
  YYSYMBOL_YADAYADA = 72,                  /* YADAYADA  */
  YYSYMBOL_FUNC0 = 73,                     /* FUNC0  */
  YYSYMBOL_FUNC1 = 74,                     /* FUNC1  */
  YYSYMBOL_FUNC = 75,                      /* FUNC  */
  YYSYMBOL_UNIOP = 76,                     /* UNIOP  */
  YYSYMBOL_LSTOP = 77,                     /* LSTOP  */
  YYSYMBOL_BLKLSTOP = 78,                  /* BLKLSTOP  */
  YYSYMBOL_POWOP = 79,                     /* POWOP  */
  YYSYMBOL_MULOP = 80,                     /* MULOP  */
  YYSYMBOL_ADDOP = 81,                     /* ADDOP  */
  YYSYMBOL_DOLSHARP = 82,                  /* DOLSHARP  */
  YYSYMBOL_HASHBRACK = 83,                 /* HASHBRACK  */
  YYSYMBOL_NOAMP = 84,                     /* NOAMP  */
  YYSYMBOL_COLONATTR = 85,                 /* COLONATTR  */
  YYSYMBOL_FORMLBRACK = 86,                /* FORMLBRACK  */
  YYSYMBOL_FORMRBRACK = 87,                /* FORMRBRACK  */
  YYSYMBOL_SUBLEXSTART = 88,               /* SUBLEXSTART  */
  YYSYMBOL_SUBLEXEND = 89,                 /* SUBLEXEND  */
  YYSYMBOL_PHASER = 90,                    /* PHASER  */
  YYSYMBOL_PREC_LOW = 91,                  /* PREC_LOW  */
  YYSYMBOL_PLUGIN_LOW_OP = 92,             /* PLUGIN_LOW_OP  */
  YYSYMBOL_OROP = 93,                      /* OROP  */
  YYSYMBOL_PLUGIN_LOGICAL_OR_LOW_OP = 94,  /* PLUGIN_LOGICAL_OR_LOW_OP  */
  YYSYMBOL_ANDOP = 95,                     /* ANDOP  */
  YYSYMBOL_PLUGIN_LOGICAL_AND_LOW_OP = 96, /* PLUGIN_LOGICAL_AND_LOW_OP  */
  YYSYMBOL_NOTOP = 97,                     /* NOTOP  */
  YYSYMBOL_ASSIGNOP = 98,                  /* ASSIGNOP  */
  YYSYMBOL_PLUGIN_ASSIGN_OP = 99,          /* PLUGIN_ASSIGN_OP  */
  YYSYMBOL_PERLY_QUESTION_MARK = 100,      /* PERLY_QUESTION_MARK  */
  YYSYMBOL_PERLY_COLON = 101,              /* PERLY_COLON  */
  YYSYMBOL_OROR = 102,                     /* OROR  */
  YYSYMBOL_DORDOR = 103,                   /* DORDOR  */
  YYSYMBOL_PLUGIN_LOGICAL_OR_OP = 104,     /* PLUGIN_LOGICAL_OR_OP  */
  YYSYMBOL_ANDAND = 105,                   /* ANDAND  */
  YYSYMBOL_PLUGIN_LOGICAL_AND_OP = 106,    /* PLUGIN_LOGICAL_AND_OP  */
  YYSYMBOL_BITOROP = 107,                  /* BITOROP  */
  YYSYMBOL_BITANDOP = 108,                 /* BITANDOP  */
  YYSYMBOL_CHEQOP = 109,                   /* CHEQOP  */
  YYSYMBOL_NCEQOP = 110,                   /* NCEQOP  */
  YYSYMBOL_CHRELOP = 111,                  /* CHRELOP  */
  YYSYMBOL_NCRELOP = 112,                  /* NCRELOP  */
  YYSYMBOL_PLUGIN_REL_OP = 113,            /* PLUGIN_REL_OP  */
  YYSYMBOL_SHIFTOP = 114,                  /* SHIFTOP  */
  YYSYMBOL_PLUGIN_ADD_OP = 115,            /* PLUGIN_ADD_OP  */
  YYSYMBOL_PLUGIN_MUL_OP = 116,            /* PLUGIN_MUL_OP  */
  YYSYMBOL_MATCHOP = 117,                  /* MATCHOP  */
  YYSYMBOL_PERLY_EXCLAMATION_MARK = 118,   /* PERLY_EXCLAMATION_MARK  */
  YYSYMBOL_PERLY_TILDE = 119,              /* PERLY_TILDE  */
  YYSYMBOL_UMINUS = 120,                   /* UMINUS  */
  YYSYMBOL_REFGEN = 121,                   /* REFGEN  */
  YYSYMBOL_PLUGIN_POW_OP = 122,            /* PLUGIN_POW_OP  */
  YYSYMBOL_PREINC = 123,                   /* PREINC  */
  YYSYMBOL_PREDEC = 124,                   /* PREDEC  */
  YYSYMBOL_POSTINC = 125,                  /* POSTINC  */
  YYSYMBOL_POSTDEC = 126,                  /* POSTDEC  */
  YYSYMBOL_POSTJOIN = 127,                 /* POSTJOIN  */
  YYSYMBOL_PLUGIN_HIGH_OP = 128,           /* PLUGIN_HIGH_OP  */
  YYSYMBOL_ARROW = 129,                    /* ARROW  */
  YYSYMBOL_PERLY_PAREN_CLOSE = 130,        /* PERLY_PAREN_CLOSE  */
  YYSYMBOL_PERLY_PAREN_OPEN = 131,         /* PERLY_PAREN_OPEN  */
  YYSYMBOL_YYACCEPT = 132,                 /* $accept  */
  YYSYMBOL_grammar = 133,                  /* grammar  */
  YYSYMBOL_134_1 = 134,                    /* @1  */
  YYSYMBOL_135_2 = 135,                    /* @2  */
  YYSYMBOL_136_3 = 136,                    /* @3  */
  YYSYMBOL_137_4 = 137,                    /* @4  */
  YYSYMBOL_138_5 = 138,                    /* @5  */
  YYSYMBOL_139_6 = 139,                    /* @6  */
  YYSYMBOL_140_7 = 140,                    /* @7  */
  YYSYMBOL_sigsub_or_method_named = 141,   /* sigsub_or_method_named  */
  YYSYMBOL_block = 142,                    /* block  */
  YYSYMBOL_empty = 143,                    /* empty  */
  YYSYMBOL_formblock = 144,                /* formblock  */
  YYSYMBOL_remember = 145,                 /* remember  */
  YYSYMBOL_mblock = 146,                   /* mblock  */
  YYSYMBOL_mremember = 147,                /* mremember  */
  YYSYMBOL_catch_paren = 148,              /* catch_paren  */
  YYSYMBOL_149_8 = 149,                    /* $@8  */
  YYSYMBOL_150_9 = 150,                    /* $@9  */
  YYSYMBOL_stmtseq = 151,                  /* stmtseq  */
  YYSYMBOL_formstmtseq = 152,              /* formstmtseq  */
  YYSYMBOL_fullstmt = 153,                 /* fullstmt  */
  YYSYMBOL_labfullstmt = 154,              /* labfullstmt  */
  YYSYMBOL_barestmt = 155,                 /* barestmt  */
  YYSYMBOL_156_10 = 156,                   /* $@10  */
  YYSYMBOL_157_11 = 157,                   /* $@11  */
  YYSYMBOL_158_12 = 158,                   /* $@12  */
  YYSYMBOL_159_13 = 159,                   /* $@13  */
  YYSYMBOL_160_14 = 160,                   /* $@14  */
  YYSYMBOL_161_15 = 161,                   /* $@15  */
  YYSYMBOL_162_16 = 162,                   /* @16  */
  YYSYMBOL_163_17 = 163,                   /* $@17  */
  YYSYMBOL_164_18 = 164,                   /* $@18  */
  YYSYMBOL_165_19 = 165,                   /* $@19  */
  YYSYMBOL_formline = 166,                 /* formline  */
  YYSYMBOL_formarg = 167,                  /* formarg  */
  YYSYMBOL_condition = 168,                /* condition  */
  YYSYMBOL_sideff = 169,                   /* sideff  */
  YYSYMBOL_else = 170,                     /* else  */
  YYSYMBOL_cont = 171,                     /* cont  */
  YYSYMBOL_finally = 172,                  /* finally  */
  YYSYMBOL_mintro = 173,                   /* mintro  */
  YYSYMBOL_nexpr = 174,                    /* nexpr  */
  YYSYMBOL_texpr = 175,                    /* texpr  */
  YYSYMBOL_iexpr = 176,                    /* iexpr  */
  YYSYMBOL_mexpr = 177,                    /* mexpr  */
  YYSYMBOL_mnexpr = 178,                   /* mnexpr  */
  YYSYMBOL_formname = 179,                 /* formname  */
  YYSYMBOL_startsub = 180,                 /* startsub  */
  YYSYMBOL_startanonsub = 181,             /* startanonsub  */
  YYSYMBOL_startanonmethod = 182,          /* startanonmethod  */
  YYSYMBOL_startformsub = 183,             /* startformsub  */
  YYSYMBOL_subname = 184,                  /* subname  */
  YYSYMBOL_proto = 185,                    /* proto  */
  YYSYMBOL_subattrlist = 186,              /* subattrlist  */
  YYSYMBOL_myattrlist = 187,               /* myattrlist  */
  YYSYMBOL_sigvarname = 188,               /* sigvarname  */
  YYSYMBOL_sigslurpsigil = 189,            /* sigslurpsigil  */
  YYSYMBOL_sigslurpelem = 190,             /* sigslurpelem  */
  YYSYMBOL_sigscalarelem = 191,            /* sigscalarelem  */
  YYSYMBOL_sigelem = 192,                  /* sigelem  */
  YYSYMBOL_siglist = 193,                  /* siglist  */
  YYSYMBOL_optsiglist = 194,               /* optsiglist  */
  YYSYMBOL_optsubsignature = 195,          /* optsubsignature  */
  YYSYMBOL_subsignature = 196,             /* subsignature  */
  YYSYMBOL_subsigguts = 197,               /* subsigguts  */
  YYSYMBOL_198_20 = 198,                   /* $@20  */
  YYSYMBOL_optsubbody = 199,               /* optsubbody  */
  YYSYMBOL_subbody = 200,                  /* subbody  */
  YYSYMBOL_optsigsubbody = 201,            /* optsigsubbody  */
  YYSYMBOL_sigsubbody = 202,               /* sigsubbody  */
  YYSYMBOL_203_21 = 203,                   /* $@21  */
  YYSYMBOL_expr = 204,                     /* expr  */
  YYSYMBOL_listexpr = 205,                 /* listexpr  */
  YYSYMBOL_listop = 206,                   /* listop  */
  YYSYMBOL_207_22 = 207,                   /* @22  */
  YYSYMBOL_methodname = 208,               /* methodname  */
  YYSYMBOL_subscripted = 209,              /* subscripted  */
  YYSYMBOL_termbinop = 210,                /* termbinop  */
  YYSYMBOL_termrelop = 211,                /* termrelop  */
  YYSYMBOL_relopchain = 212,               /* relopchain  */
  YYSYMBOL_termeqop = 213,                 /* termeqop  */
  YYSYMBOL_eqopchain = 214,                /* eqopchain  */
  YYSYMBOL_termunop = 215,                 /* termunop  */
  YYSYMBOL_anonymous = 216,                /* anonymous  */
  YYSYMBOL_termdo = 217,                   /* termdo  */
  YYSYMBOL_term = 218,                     /* term  */
  YYSYMBOL_219_23 = 219,                   /* @23  */
  YYSYMBOL_myattrterm = 220,               /* myattrterm  */
  YYSYMBOL_myterm = 221,                   /* myterm  */
  YYSYMBOL_fieldvar = 222,                 /* fieldvar  */
  YYSYMBOL_optfieldattrlist = 223,         /* optfieldattrlist  */
  YYSYMBOL_fielddecl = 224,                /* fielddecl  */
  YYSYMBOL_225_24 = 225,                   /* $@24  */
  YYSYMBOL_optlistexpr = 226,              /* optlistexpr  */
  YYSYMBOL_optexpr = 227,                  /* optexpr  */
  YYSYMBOL_optrepl = 228,                  /* optrepl  */
  YYSYMBOL_my_scalar = 229,                /* my_scalar  */
  YYSYMBOL_list_of_scalars = 230,          /* list_of_scalars  */
  YYSYMBOL_my_list_of_scalars = 231,       /* my_list_of_scalars  */
  YYSYMBOL_my_var = 232,                   /* my_var  */
  YYSYMBOL_refgen_topic = 233,             /* refgen_topic  */
  YYSYMBOL_my_refgen = 234,                /* my_refgen  */
  YYSYMBOL_amper = 235,                    /* amper  */
  YYSYMBOL_scalar = 236,                   /* scalar  */
  YYSYMBOL_ary = 237,                      /* ary  */
  YYSYMBOL_hsh = 238,                      /* hsh  */
  YYSYMBOL_arylen = 239,                   /* arylen  */
  YYSYMBOL_star = 240,                     /* star  */
  YYSYMBOL_sliceme = 241,                  /* sliceme  */
  YYSYMBOL_kvslice = 242,                  /* kvslice  */
  YYSYMBOL_gelem = 243,                    /* gelem  */
  YYSYMBOL_indirob = 244                   /* indirob  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined PERL_BISON_STYPE_IS_TRIVIAL && PERL_BISON_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3732

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  132
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  113
/* YYNRULES -- Number of rules.  */
#define YYNRULES  342
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  676

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   386


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131
};

#if PERL_BISON_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   170,   170,   169,   181,   180,   191,   190,   204,   203,
     217,   216,   230,   229,   240,   239,   253,   255,   260,   268,
     272,   279,   284,   291,   297,   301,   303,   300,   310,   311,
     321,   322,   331,   335,   339,   346,   356,   358,   371,   368,
     392,   387,   415,   414,   440,   451,   463,   462,   473,   479,
     485,   490,   492,   494,   501,   509,   511,   508,   528,   533,
     542,   549,   548,   563,   571,   578,   577,   592,   599,   598,
     614,   613,   633,   637,   641,   645,   651,   659,   677,   678,
     682,   686,   688,   690,   692,   694,   696,   698,   701,   707,
     708,   713,   724,   725,   730,   732,   737,   744,   745,   749,
     753,   757,   762,   766,   770,   771,   774,   780,   785,   790,
     796,   797,   802,   803,   808,   809,   816,   821,   823,   834,
     836,   841,   843,   847,   852,   856,   864,   869,   874,   883,
     885,   893,   894,   895,   900,   901,   906,   907,   911,   915,
     915,   948,   949,   954,   966,   967,   972,   971,   984,   986,
     988,   990,   992,   996,   998,  1003,  1007,  1011,  1015,  1019,
    1025,  1030,  1036,  1042,  1048,  1054,  1056,  1058,  1061,  1060,
    1074,  1075,  1079,  1083,  1086,  1091,  1096,  1099,  1103,  1107,
    1113,  1121,  1128,  1134,  1136,  1138,  1143,  1145,  1147,  1149,
    1151,  1153,  1158,  1160,  1162,  1164,  1166,  1168,  1170,  1172,
    1174,  1176,  1178,  1180,  1182,  1184,  1186,  1188,  1192,  1194,
    1196,  1198,  1200,  1204,  1206,  1210,  1212,  1214,  1216,  1220,
    1222,  1227,  1229,  1232,  1234,  1236,  1239,  1242,  1253,  1256,
    1264,  1266,  1268,  1271,  1274,  1282,  1284,  1288,  1289,  1290,
    1291,  1292,  1294,  1296,  1298,  1300,  1302,  1304,  1306,  1308,
    1310,  1312,  1314,  1316,  1318,  1328,  1338,  1348,  1358,  1360,
    1362,  1365,  1370,  1374,  1376,  1378,  1380,  1383,  1385,  1388,
    1390,  1392,  1394,  1396,  1398,  1400,  1402,  1404,  1407,  1409,
    1411,  1413,  1415,  1417,  1421,  1424,  1423,  1436,  1437,  1438,
    1443,  1445,  1447,  1449,  1454,  1456,  1459,  1461,  1463,  1468,
    1473,  1478,  1486,  1488,  1490,  1494,  1502,  1501,  1519,  1520,
    1524,  1525,  1529,  1530,  1535,  1540,  1542,  1546,  1549,  1553,
    1554,  1555,  1558,  1559,  1562,  1563,  1566,  1570,  1574,  1580,
    1586,  1588,  1592,  1596,  1597,  1601,  1602,  1606,  1607,  1612,
    1614,  1616,  1619
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if PERL_BISON_DEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "GRAMPROG", "GRAMEXPR",
  "GRAMBLOCK", "GRAMBARESTMT", "GRAMFULLSTMT", "GRAMSTMTSEQ",
  "GRAMSUBSIGNATURE", "PERLY_AMPERSAND", "PERLY_BRACE_OPEN",
  "PERLY_BRACE_CLOSE", "PERLY_BRACKET_OPEN", "PERLY_BRACKET_CLOSE",
  "PERLY_COMMA", "PERLY_DOLLAR", "PERLY_DOT", "PERLY_EQUAL_SIGN",
  "PERLY_MINUS", "PERLY_PERCENT_SIGN", "PERLY_PLUS", "PERLY_SEMICOLON",
  "PERLY_SLASH", "PERLY_SNAIL", "PERLY_STAR", "KW_FORMAT", "KW_PACKAGE",
  "KW_CLASS", "KW_LOCAL", "KW_MY", "KW_FIELD", "KW_IF", "KW_ELSE",
  "KW_ELSIF", "KW_UNLESS", "KW_FOR", "KW_UNTIL", "KW_WHILE", "KW_CONTINUE",
  "KW_GIVEN", "KW_WHEN", "KW_DEFAULT", "KW_TRY", "KW_CATCH", "KW_FINALLY",
  "KW_DEFER", "KW_REQUIRE", "KW_DO", "KW_USE_or_NO", "KW_SUB_named",
  "KW_SUB_named_sig", "KW_SUB_anon", "KW_SUB_anon_sig", "KW_METHOD_named",
  "KW_METHOD_anon", "BAREWORD", "METHCALL0", "METHCALL", "THING", "PMFUNC",
  "PRIVATEREF", "QWLIST", "FUNC0OP", "FUNC0SUB", "UNIOPSUB", "LSTOPSUB",
  "PLUGEXPR", "PLUGSTMT", "LABEL", "LOOPEX", "DOTDOT", "YADAYADA", "FUNC0",
  "FUNC1", "FUNC", "UNIOP", "LSTOP", "BLKLSTOP", "POWOP", "MULOP", "ADDOP",
  "DOLSHARP", "HASHBRACK", "NOAMP", "COLONATTR", "FORMLBRACK",
  "FORMRBRACK", "SUBLEXSTART", "SUBLEXEND", "PHASER", "PREC_LOW",
  "PLUGIN_LOW_OP", "OROP", "PLUGIN_LOGICAL_OR_LOW_OP", "ANDOP",
  "PLUGIN_LOGICAL_AND_LOW_OP", "NOTOP", "ASSIGNOP", "PLUGIN_ASSIGN_OP",
  "PERLY_QUESTION_MARK", "PERLY_COLON", "OROR", "DORDOR",
  "PLUGIN_LOGICAL_OR_OP", "ANDAND", "PLUGIN_LOGICAL_AND_OP", "BITOROP",
  "BITANDOP", "CHEQOP", "NCEQOP", "CHRELOP", "NCRELOP", "PLUGIN_REL_OP",
  "SHIFTOP", "PLUGIN_ADD_OP", "PLUGIN_MUL_OP", "MATCHOP",
  "PERLY_EXCLAMATION_MARK", "PERLY_TILDE", "UMINUS", "REFGEN",
  "PLUGIN_POW_OP", "PREINC", "PREDEC", "POSTINC", "POSTDEC", "POSTJOIN",
  "PLUGIN_HIGH_OP", "ARROW", "PERLY_PAREN_CLOSE", "PERLY_PAREN_OPEN",
  "$accept", "grammar", "@1", "@2", "@3", "@4", "@5", "@6", "@7",
  "sigsub_or_method_named", "block", "empty", "formblock", "remember",
  "mblock", "mremember", "catch_paren", "$@8", "$@9", "stmtseq",
  "formstmtseq", "fullstmt", "labfullstmt", "barestmt", "$@10", "$@11",
  "$@12", "$@13", "$@14", "$@15", "@16", "$@17", "$@18", "$@19",
  "formline", "formarg", "condition", "sideff", "else", "cont", "finally",
  "mintro", "nexpr", "texpr", "iexpr", "mexpr", "mnexpr", "formname",
  "startsub", "startanonsub", "startanonmethod", "startformsub", "subname",
  "proto", "subattrlist", "myattrlist", "sigvarname", "sigslurpsigil",
  "sigslurpelem", "sigscalarelem", "sigelem", "siglist", "optsiglist",
  "optsubsignature", "subsignature", "subsigguts", "$@20", "optsubbody",
  "subbody", "optsigsubbody", "sigsubbody", "$@21", "expr", "listexpr",
  "listop", "@22", "methodname", "subscripted", "termbinop", "termrelop",
  "relopchain", "termeqop", "eqopchain", "termunop", "anonymous", "termdo",
  "term", "@23", "myattrterm", "myterm", "fieldvar", "optfieldattrlist",
  "fielddecl", "$@24", "optlistexpr", "optexpr", "optrepl", "my_scalar",
  "list_of_scalars", "my_list_of_scalars", "my_var", "refgen_topic",
  "my_refgen", "amper", "scalar", "ary", "hsh", "arylen", "star",
  "sliceme", "kvslice", "gelem", "indirob", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-571)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-341)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     611,  -571,  -571,  -571,  -571,  -571,  -571,  -571,    66,  -571,
    2986,    32,  1941,  1825,  -571,  -571,  -571,  -571,   116,  2986,
     116,  2986,   116,  2986,   116,   116,  2986,    16,  2986,  2266,
    -571,  -571,  -571,  -571,   116,   116,  -571,  -571,    63,   -39,
    -571,  2986,  -571,  -571,  2986,   -31,    11,   -59,  2266,  2186,
      32,   116,  2986,    87,  2986,  2986,  2986,  2986,  2986,  2986,
    2346,  -571,   396,   135,  -571,     4,  -571,    48,    44,    58,
      71,  -571,  -571,  -571,  3176,  -571,  -571,    67,   209,   274,
     308,  -571,   164,   323,   420,   197,  -571,  -571,  -571,  -571,
    -571,   156,   160,   141,    88,   121,    25,   122,   131,   139,
     142,    32,   266,   266,  -571,    87,  -571,  -571,  -571,   202,
    -571,    87,   247,  -571,   267,   447,   268,  1825,  -571,  -571,
    -571,  -571,   675,  -571,   191,   849,  -571,  -571,  -571,  -571,
    -571,   283,  -571,   334,  -571,   334,  -571,  -571,  3584,  3066,
    2426,   217,  -571,  -571,  -571,  3584,  -571,  3584,   246,   226,
     226,  2986,   179,   230,  2986,   192,  3584,    32,  3176,   195,
    2506,  2986,  2186,  -571,  3584,  3146,  -571,   135,  -571,  2586,
    2986,  2986,  -571,   301,  -571,  -571,  2986,   135,   334,   334,
     334,   237,   237,   327,   -43,  2986,  2986,  2986,  2986,  2986,
    2986,  2986,  2666,  -571,  -571,  2986,  -571,  -571,  2986,  2986,
    2986,  2986,  2986,  2986,  2986,  2986,  2986,  2986,  2986,  2986,
    2986,  2986,  2986,  2986,  2986,  2986,  2986,  2986,  2986,  2986,
    2986,  2986,  2986,  2986,  -571,  -571,  -571,  2986,   193,  2746,
    2986,  2986,  2986,  2986,  2986,  2986,  2986,  -571,   287,   303,
     315,   265,  -571,  -571,  -571,  -571,  -571,   239,   456,  -571,
    -571,   248,  -571,  -571,  -571,  -571,  -571,  -571,   341,  -571,
    -571,  -571,  -571,  -571,  -571,    32,  -571,  -571,  -571,  2986,
    2986,  2986,  2986,  2986,  2986,  -571,  -571,  -571,  -571,   349,
    -571,  -571,  -571,   349,  -571,  -571,  -571,   371,  -571,  -571,
    2826,   334,   217,    43,    46,    69,  -571,   171,   336,  -571,
    -571,  -571,   226,   355,  -571,  -571,  -571,  -571,  2986,  2986,
      89,  -571,  -571,  -571,  -571,   374,   338,   293,  2986,   135,
     135,   424,  -571,  2986,   430,   151,   151,  -571,  -571,  3280,
      26,    93,  -571,   438,  3545,  3525,  3384,   334,   325,   312,
    3228,  3280,  3280,  1000,  3423,  3423,  3423,  3446,  3446,  3485,
    3506,  3525,  3525,  3545,  3545,  3564,  3603,   312,   325,   334,
     334,   108,   149,  2986,  2986,    52,   421,   432,   448,  -571,
     450,  2906,   314,  -571,  -571,   451,   281,    97,   294,   200,
     304,   213,   313,   965,  -571,  -571,   431,    62,   226,   422,
    -571,   389,  2986,  2986,  -571,    33,  -571,  -571,   363,  -571,
    -571,  -571,  -571,  2026,   141,  -571,  2986,  2986,  2986,  2986,
    -571,  -571,   440,  -571,   476,  -571,  -571,  -571,   396,  -571,
    -571,  -571,   396,  -571,  -571,  -571,   401,   403,   191,    21,
     470,  -571,  -571,  -571,  -571,  -571,   376,  -571,  -571,   372,
      75,  -571,  2986,  -571,  -571,  -571,   508,  -571,   235,  2986,
     496,  -571,  -571,  2986,  -571,   378,   326,   258,  -571,  -571,
    -571,  -571,  -571,  -571,   512,  2986,  -571,   502,  -571,   503,
    -571,   506,  -571,   507,  -571,  -571,  -571,  -571,  -571,   112,
    -571,  -571,   391,   396,   392,   511,   393,  -571,  -571,  -571,
    -571,  -571,   398,   501,   219,  -571,  2986,   405,   408,   396,
     418,   425,  1129,   419,   495,   246,  -571,   541,  -571,  -571,
     226,  2986,  2986,  -571,    24,  -571,  -571,  -571,   545,  -571,
    -571,  2986,  -571,   468,  -571,  -571,  -571,   262,  -571,  3332,
    2986,   549,  -571,  -571,   444,  -571,  -571,  -571,  -571,   548,
    -571,  -571,  -571,  2986,   266,   266,   560,   446,  -571,  2986,
    2986,   266,  -571,   452,   449,  -571,  -571,   266,   266,  -571,
    -571,  -571,  -571,  2986,   226,  -571,   556,  3176,  3176,   455,
    -571,   396,  -571,  -571,   457,  -571,  -571,   499,  -571,  -571,
    3176,   225,   225,   511,   458,   460,   461,   247,  2986,  2986,
     266,   266,   266,  -571,  -571,   511,   266,   571,   476,  1245,
    -571,  -571,  -571,  -571,  -571,  -571,  -571,  1361,  -571,   266,
     464,  -571,  -571,  -571,  -571,  2986,   266,   266,  -571,   577,
     479,   247,   247,   247,  -571,   537,  -571,  -571,  -571,  1477,
    -571,    59,  -571,  1593,  -571,  2986,   480,   247,   247,  -571,
     266,  -571,  -571,  -571,   491,    32,  -571,  -571,   605,   539,
    -571,  -571,   500,   266,  -571,  -571,  -571,   247,  -571,  -571,
    -571,  -571,  -571,  -571,   266,   247,  2106,  -571,  1709,   225,
    -571,   504,  -571,  -571,   266,  -571
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     2,     4,     6,     8,    10,    12,    14,     0,    21,
      19,     0,     0,     0,    19,   139,     1,    19,     0,    19,
       0,     0,     0,     0,     0,     0,     0,     0,   274,     0,
     107,   107,   108,   287,     0,     0,   258,   285,   246,   280,
     282,   276,   107,   289,   268,   278,     0,     0,   271,    19,
       0,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,   310,   311,   152,   288,   253,   237,   196,   208,   197,
     215,   238,   239,   240,   155,   243,     5,   259,   248,   251,
     250,   252,   249,     0,     0,     0,    21,     7,    81,    76,
     109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   106,     0,    16,    17,    36,     0,
     106,     0,    19,     9,     0,    82,     0,     0,    11,    33,
      32,    28,     0,    15,    19,     0,   339,   342,   341,   340,
     326,     0,   327,   221,   329,   222,   328,   332,   244,     0,
       0,   291,   296,   298,   297,   275,   236,   235,    19,    19,
      19,    19,     0,     0,     0,     0,   277,     0,   269,     0,
       0,    19,    19,   272,   273,   287,   308,   309,   165,   248,
       0,     0,   330,     0,   110,   111,    19,   270,   223,   224,
     242,   228,   229,   247,     0,     0,     0,     0,     0,   153,
       0,     0,     0,   211,   210,     0,   218,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225,   226,   227,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    19,    19,     0,
       0,    19,   299,   301,   300,    21,    21,    21,     0,    21,
      21,     0,    21,    21,    21,    21,    52,    23,     0,    74,
      46,   106,    75,    42,   106,     0,    92,    67,    73,     0,
       0,     0,     0,     0,     0,    72,    35,    34,    29,   119,
     122,   121,   134,   119,   130,   129,   133,   135,   140,   230,
       0,   293,     0,   248,   251,   250,   295,     0,   118,   290,
     113,   112,    19,   116,   114,    21,    21,   163,    19,     0,
       0,   281,   168,   279,   283,     0,     0,     0,     0,   156,
     157,     0,   262,     0,   245,   150,   151,   148,   149,   154,
       0,     0,   182,     0,   214,   220,   200,   189,   191,   193,
     207,   187,   188,     0,   203,   205,   204,   201,   202,   199,
     198,   219,   216,   213,   209,   212,   195,   194,   192,   206,
     190,   186,     0,     0,     0,     0,   336,   334,   338,   170,
       0,     0,   160,   171,   260,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,   105,     0,     0,    19,   303,
     304,   305,     0,     0,   324,     0,   325,   322,     0,   323,
     319,   320,   321,     0,     0,    21,     0,    99,     0,     0,
      19,    21,     0,    38,    21,    40,    93,    83,    80,    84,
      87,    86,   101,    85,    88,   120,   126,   123,   131,   247,
       0,   292,   294,   117,    21,   115,    19,   233,   234,     0,
      19,   184,    19,   284,   167,   166,     0,   231,     0,     0,
       0,   175,   181,     0,   266,   162,     0,     0,   263,   265,
     264,   267,   331,   179,     0,    19,   261,     0,   173,     0,
     254,     0,   255,     0,    18,    21,    37,    21,    44,     0,
     302,   306,     0,   102,     0,     0,     0,   314,    21,    97,
      98,   103,     0,     0,    82,    61,     0,     0,     0,   100,
       0,     0,     0,    19,     0,    19,   142,     0,    43,   141,
      19,   127,   124,   132,   245,   232,   139,   136,     0,   137,
     164,     0,   312,     0,   169,   158,   185,     0,   178,   241,
      19,     0,   174,   180,     0,   176,   256,   257,   172,     0,
      68,    21,    45,     0,     0,     0,   318,     0,   317,     0,
       0,     0,    55,     0,     0,    96,    96,     0,     0,    22,
      25,    24,    65,    19,    19,    19,    21,   128,   125,     0,
     146,   313,   286,   183,     0,   177,   159,     0,    19,    70,
     307,    19,    19,   315,     0,     0,     0,    19,    99,     0,
       0,     0,     0,    50,    51,     0,     0,     0,    21,     0,
     145,    41,   144,   138,    19,   161,    19,     0,    19,     0,
       0,    89,    48,    49,   316,     0,     0,     0,    64,     0,
       0,    19,    19,    19,    26,    94,    47,    39,   143,     0,
      30,     0,    69,     0,    90,     0,     0,    19,    19,    56,
       0,    60,    54,    53,     0,     0,    66,   147,     0,    19,
      31,    71,     0,     0,    58,    63,    96,    19,    27,    95,
      20,    19,    78,    77,     0,    19,     0,    62,     0,    19,
      59,     0,    79,    91,     0,    57
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -571,  -571,  -571,  -571,  -571,  -571,  -571,  -571,  -571,  -571,
      -4,   -10,  -571,    92,   -80,  -571,  -571,  -571,  -571,   -16,
    -571,   613,   514,    12,  -571,  -571,  -571,  -571,  -571,  -571,
    -571,  -571,  -571,  -571,  -571,  -571,   -41,  -397,  -570,  -254,
    -571,  -530,  -571,    41,   231,  -315,   -34,  -571,   -88,    73,
    -571,  -571,   -78,   138,  -140,   344,   357,  -571,  -571,  -571,
     221,  -571,  -571,  -571,  -571,   134,  -571,    54,   223,  -571,
    -295,  -571,     9,   -46,  -571,  -571,  -571,  -571,  -571,  -571,
    -571,  -571,  -571,  -571,  -571,  -571,   625,  -571,  -571,   519,
    -571,  -571,  -571,  -571,  -138,   -17,  -571,  -571,  -571,  -571,
     256,  -571,  -571,   413,    40,   -23,   -22,  -571,  -571,  -571,
    -571,  -571,    61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     8,     9,    10,    11,    12,    13,    14,    15,   111,
     112,   121,   476,   436,   258,   410,   562,   595,   644,   122,
     631,   278,   119,   120,   505,   510,   414,   412,   588,   656,
     553,   596,   578,   608,   650,   663,   417,   114,   612,   267,
     646,   591,   491,   498,   421,   482,   493,   386,   260,   148,
     150,   238,   176,   302,   305,   299,   426,   283,   284,   285,
     286,   287,   288,   518,   519,   123,   124,   508,   509,   601,
     437,   604,   115,    63,    64,   442,   372,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,   153,    75,   141,
     241,   391,   116,   543,   168,    76,   523,   486,   546,   547,
     397,   398,   250,    77,    78,    79,    80,    81,    82,    83,
      84,    85,   132
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,   125,   131,   167,   143,   144,   490,    87,   177,    61,
     306,   438,   613,   307,   128,   190,   128,   191,   128,    62,
     128,   128,   263,   259,   113,   146,   592,   261,    62,   161,
     128,   128,    20,   264,   323,   173,    22,   449,   322,   166,
      24,    20,    61,    86,   163,   128,   171,   128,   450,    20,
     185,   186,   187,   188,   230,   247,   231,  -333,   129,  -333,
     129,    62,   129,    86,   129,   129,    16,   142,    20,   184,
     243,   244,   162,   477,   129,   129,   154,   458,   484,   130,
    -335,   648,  -335,   134,   478,   136,   137,   324,   492,   169,
     189,   129,   155,   500,   501,   151,   152,   256,   521,   673,
     159,    17,   266,   441,   149,   167,  -295,   451,   126,  -294,
     170,   468,   172,   127,   282,   157,   294,   295,   649,   185,
     186,   187,   188,   541,   319,   320,   666,    86,  -296,   277,
     167,  -298,    20,   242,   542,   192,   251,   139,   301,   304,
     304,   166,   160,   174,   316,   317,   248,   140,   175,   297,
     189,    61,    61,   312,  -297,   195,   249,    20,   128,   193,
     194,    22,   434,   310,   485,    24,   166,   196,   197,   315,
      62,    62,   126,   413,   454,  -337,   415,   127,   237,   293,
     198,   554,   185,   186,   187,   188,   185,   186,   187,   188,
     185,   186,   187,   188,   325,   326,   327,   328,   229,   330,
     331,   333,   169,   362,   363,   174,   364,   279,   236,   365,
     175,   280,   239,   366,   470,   281,   240,   367,   368,   245,
     230,   383,   231,   318,   262,   401,   402,   472,   385,   419,
     420,   390,   423,   424,   585,   586,  -341,   228,   375,   376,
     377,   378,   379,   380,   381,   382,   187,   188,   479,   526,
     369,   269,   246,   252,   270,   271,   272,   273,   609,   610,
     274,   416,   253,   440,   185,   186,   187,   188,   373,   490,
     254,   602,   532,   255,   620,   370,   573,   257,   418,   418,
     418,   422,   418,   418,   455,  -333,   265,  -333,   400,   268,
     275,   439,   304,   185,   186,   187,   188,   289,    61,   430,
     636,   432,   298,   467,   524,   300,   185,   186,   187,   188,
     308,   303,   185,   186,   187,   188,   469,    62,   309,  -335,
     652,  -335,   311,   321,   371,   313,   471,   446,   185,   186,
     187,   188,   448,   618,   232,   473,   233,   392,   393,   395,
     323,   403,   404,   384,   406,   407,   408,   409,   531,  -102,
     389,   185,   186,   187,   188,   185,   186,   187,   188,   387,
     394,   128,  -341,  -341,  -341,   227,   228,   641,   642,   643,
     566,   388,   456,   457,   185,   186,   187,   188,   304,   405,
     464,   401,   402,   654,   655,   411,   428,   185,   186,   187,
     188,   200,   201,   489,   502,   433,   167,   185,   186,   187,
     188,   483,   483,   667,   200,   129,   185,   186,   187,   188,
     425,   670,   494,   200,   435,   422,   499,   483,   483,   185,
     186,   187,   188,   445,   598,   597,   517,   444,   221,   222,
     522,   234,   166,   235,   223,   487,   447,   224,   225,   226,
     227,   228,   222,   449,   400,   465,   459,   223,   534,   475,
     224,   225,   226,   227,   228,    61,   223,   460,   527,   224,
     225,   226,   227,   228,   581,   582,    18,   185,   186,   187,
     188,   587,    20,   461,    62,   462,    22,   593,   594,   269,
      24,   480,   270,   271,   272,   273,   396,   481,   274,   185,
     186,   187,   188,   561,   488,   301,   504,   496,   506,   511,
     304,   512,   520,   503,   443,   483,   507,   516,   528,   530,
     621,   622,   623,   574,   535,   536,   625,   167,   537,   538,
      61,   544,   545,   552,   549,   548,   507,    20,   551,   634,
     571,   185,   186,   187,   188,   555,   637,   638,   556,    62,
     185,   186,   187,   188,   185,   186,   187,   188,   557,   599,
     560,   563,   565,   166,   304,   558,   570,   572,   483,   483,
     657,   575,   607,   185,   186,   187,   188,   539,   452,   540,
     577,   611,   611,   665,   576,   583,   584,   266,   600,   590,
     550,   466,   645,   589,   669,   603,   606,   605,   629,   615,
     616,   617,   633,   626,   675,   635,   630,   499,   483,   639,
     514,   185,   186,   187,   188,   185,   186,   187,   188,   640,
     653,   266,   266,   266,     1,     2,     3,     4,     5,     6,
       7,   658,   660,   614,   483,   661,   118,   266,   266,   619,
     664,   276,   671,   579,   674,   624,   431,   497,   525,   662,
     427,   659,   533,   564,   483,   668,   133,   266,   135,   513,
     569,   138,   627,   145,   147,   266,   489,   515,   292,   611,
     495,   399,     0,     0,     0,     0,   156,     0,     0,   158,
       0,     0,     0,   164,     0,   -13,    88,     0,     0,     0,
     178,   179,   180,   181,   182,    18,    86,     0,    19,     0,
     507,    20,     0,     0,    21,    22,    23,    89,     0,    24,
      25,    90,    91,    92,    26,    27,    93,    94,     0,     0,
      95,    96,    97,    98,     0,    99,   100,   101,   102,     0,
       0,   103,    28,    29,   104,   105,   106,    30,    31,   107,
      32,    33,    34,    35,    36,    37,     0,    38,    39,    40,
      41,    42,    43,   108,   117,    44,     0,   109,    45,    46,
      47,    48,    49,    50,     0,     0,     0,    51,    52,    53,
       0,     0,     0,     0,   291,   110,     0,     0,     0,     0,
       0,     0,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,     0,    57,     0,    58,    59,
       0,     0,     0,     0,     0,     0,    60,     0,     0,     0,
       0,     0,     0,     0,   329,     0,     0,     0,     0,     0,
     334,     0,     0,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,    -3,
      88,     0,   361,     0,     0,     0,     0,     0,     0,    18,
      86,     0,    19,     0,     0,    20,     0,     0,    21,    22,
      23,    89,     0,    24,    25,    90,    91,    92,    26,    27,
      93,    94,     0,     0,    95,    96,    97,    98,     0,    99,
     100,   101,   102,     0,     0,   103,    28,    29,   104,   105,
     106,    30,    31,   107,    32,    33,    34,    35,    36,    37,
       0,    38,    39,    40,    41,    42,    43,   108,   117,    44,
       0,   109,    45,    46,    47,    48,    49,    50,     0,     0,
       0,    51,    52,    53,     0,     0,     0,     0,     0,   110,
       0,     0,     0,     0,     0,     0,    54,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    55,    56,     0,
      57,     0,    58,    59,     0,    18,    86,   474,    19,     0,
      60,    20,     0,     0,    21,    22,    23,    89,     0,    24,
      25,    90,    91,    92,    26,    27,    93,    94,     0,     0,
      95,    96,    97,    98,     0,    99,   100,   101,   102,     0,
       0,   103,    28,    29,   104,   105,   106,    30,    31,   107,
      32,    33,    34,    35,    36,    37,     0,    38,    39,    40,
      41,    42,    43,   108,   117,    44,     0,   109,    45,    46,
      47,    48,    49,    50,     0,     0,     0,    51,    52,    53,
       0,     0,     0,     0,     0,   110,     0,     0,     0,     0,
       0,     0,    54,     0,     0,     0,     0,     0,     0,     0,
       0,   199,     0,     0,     0,     0,     0,     0,   529,   200,
     201,   202,     0,    55,    56,     0,    57,     0,    58,    59,
       0,     0,   203,     0,     0,     0,    60,     0,   204,   205,
     206,   453,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,     0,     0,
       0,     0,   223,     0,     0,   224,   225,   226,   227,   228,
      88,     0,     0,     0,     0,     0,   567,   568,     0,    18,
      86,   559,    19,     0,     0,    20,     0,     0,    21,    22,
      23,    89,     0,    24,    25,    90,    91,    92,    26,    27,
      93,    94,     0,     0,    95,    96,    97,    98,   580,    99,
     100,   101,   102,     0,     0,   103,    28,    29,   104,   105,
     106,    30,    31,   107,    32,    33,    34,    35,    36,    37,
       0,    38,    39,    40,    41,    42,    43,   108,   117,    44,
       0,   109,    45,    46,    47,    48,    49,    50,     0,     0,
       0,    51,    52,    53,     0,     0,     0,     0,     0,   110,
       0,     0,     0,     0,     0,     0,    54,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    55,    56,     0,
      57,     0,    58,    59,     0,    18,    86,   628,    19,     0,
      60,    20,     0,     0,    21,    22,    23,    89,     0,    24,
      25,    90,    91,    92,    26,    27,    93,    94,     0,     0,
      95,    96,    97,    98,     0,    99,   100,   101,   102,     0,
       0,   103,    28,    29,   104,   105,   106,    30,    31,   107,
      32,    33,    34,    35,    36,    37,     0,    38,    39,    40,
      41,    42,    43,   108,   117,    44,     0,   109,    45,    46,
      47,    48,    49,    50,     0,     0,     0,    51,    52,    53,
       0,     0,     0,     0,     0,   110,     0,     0,     0,     0,
       0,     0,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    55,    56,     0,    57,     0,    58,    59,
       0,    18,    86,   632,    19,     0,    60,    20,     0,     0,
      21,    22,    23,    89,     0,    24,    25,    90,    91,    92,
      26,    27,    93,    94,     0,     0,    95,    96,    97,    98,
       0,    99,   100,   101,   102,     0,     0,   103,    28,    29,
     104,   105,   106,    30,    31,   107,    32,    33,    34,    35,
      36,    37,     0,    38,    39,    40,    41,    42,    43,   108,
     117,    44,     0,   109,    45,    46,    47,    48,    49,    50,
       0,     0,     0,    51,    52,    53,     0,     0,     0,     0,
       0,   110,     0,     0,     0,     0,     0,     0,    54,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    55,
      56,     0,    57,     0,    58,    59,     0,    18,    86,   647,
      19,     0,    60,    20,     0,     0,    21,    22,    23,    89,
       0,    24,    25,    90,    91,    92,    26,    27,    93,    94,
       0,     0,    95,    96,    97,    98,     0,    99,   100,   101,
     102,     0,     0,   103,    28,    29,   104,   105,   106,    30,
      31,   107,    32,    33,    34,    35,    36,    37,     0,    38,
      39,    40,    41,    42,    43,   108,   117,    44,     0,   109,
      45,    46,    47,    48,    49,    50,     0,     0,     0,    51,
      52,    53,     0,     0,     0,     0,     0,   110,     0,     0,
       0,     0,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    55,    56,     0,    57,     0,
      58,    59,     0,    18,    86,   651,    19,     0,    60,    20,
       0,     0,    21,    22,    23,    89,     0,    24,    25,    90,
      91,    92,    26,    27,    93,    94,     0,     0,    95,    96,
      97,    98,     0,    99,   100,   101,   102,     0,     0,   103,
      28,    29,   104,   105,   106,    30,    31,   107,    32,    33,
      34,    35,    36,    37,     0,    38,    39,    40,    41,    42,
      43,   108,   117,    44,     0,   109,    45,    46,    47,    48,
      49,    50,     0,     0,     0,    51,    52,    53,     0,     0,
       0,     0,     0,   110,     0,     0,     0,     0,     0,     0,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    55,    56,     0,    57,     0,    58,    59,     0,    18,
      86,     0,    19,     0,    60,    20,     0,     0,    21,    22,
      23,    89,     0,    24,    25,    90,    91,    92,    26,    27,
      93,    94,     0,     0,    95,    96,    97,    98,     0,    99,
     100,   101,   102,     0,     0,   103,    28,    29,   104,   105,
     106,    30,    31,   107,    32,    33,    34,    35,    36,    37,
       0,    38,    39,    40,    41,    42,    43,   108,   117,    44,
       0,   109,    45,    46,    47,    48,    49,    50,     0,     0,
       0,    51,    52,    53,     0,     0,   672,     0,     0,   110,
       0,     0,     0,     0,     0,     0,    54,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    55,    56,     0,
      57,     0,    58,    59,     0,    18,    86,     0,    19,     0,
      60,    20,     0,     0,    21,    22,    23,    89,     0,    24,
      25,    90,    91,    92,    26,    27,    93,    94,     0,     0,
      95,    96,    97,    98,     0,    99,   100,   101,   102,     0,
       0,   103,    28,    29,   104,   105,   106,    30,    31,   107,
      32,    33,    34,    35,    36,    37,     0,    38,    39,    40,
      41,    42,    43,   108,   117,    44,     0,   109,    45,    46,
      47,    48,    49,    50,     0,     0,     0,    51,    52,    53,
       0,     0,     0,     0,     0,   110,     0,     0,     0,     0,
       0,     0,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    55,    56,     0,    57,     0,    58,    59,
       0,    18,    86,     0,    19,     0,    60,    20,     0,     0,
      21,    22,    23,    89,     0,    24,    25,    90,    91,    92,
      26,    27,    93,    94,     0,     0,    95,    96,    97,    98,
       0,    99,   100,   101,   102,     0,     0,   103,    28,    29,
     104,   105,   106,    30,    31,   107,    32,    33,    34,    35,
      36,    37,     0,    38,    39,    40,    41,    42,    43,   108,
       0,    44,     0,   109,    45,    46,    47,    48,    49,    50,
       0,     0,     0,    51,    52,    53,     0,    88,     0,     0,
       0,   110,     0,     0,     0,     0,    18,     0,    54,    19,
       0,     0,    20,     0,     0,    21,    22,    23,   -19,     0,
      24,    25,     0,     0,     0,    26,    27,     0,     0,    55,
      56,     0,    57,     0,    58,    59,     0,     0,     0,     0,
       0,     0,    60,    28,    29,     0,     0,     0,    30,    31,
       0,    32,    33,    34,    35,    36,    37,     0,    38,    39,
      40,    41,    42,    43,     0,     0,    44,     0,     0,    45,
      46,    47,    48,    49,    50,     0,     0,    88,    51,    52,
      53,     0,     0,     0,     0,     0,    18,     0,     0,    19,
       0,     0,    20,    54,     0,    21,    22,    23,     0,     0,
      24,    25,     0,     0,     0,    26,    27,     0,     0,     0,
       0,     0,     0,     0,    55,    56,     0,    57,     0,    58,
      59,     0,     0,    28,    29,     0,     0,    60,    30,    31,
       0,    32,    33,    34,    35,    36,    37,     0,    38,    39,
      40,    41,    42,    43,     0,     0,    44,     0,     0,    45,
      46,    47,    48,    49,    50,     0,     0,     0,    51,    52,
      53,     0,     0,     0,     0,     0,    18,    86,     0,    19,
       0,     0,    20,    54,     0,    21,    22,    23,     0,     0,
      24,    25,     0,     0,     0,    26,    27,     0,     0,     0,
       0,     0,     0,     0,    55,    56,     0,    57,     0,    58,
      59,     0,     0,    28,    29,     0,   -19,    60,    30,    31,
       0,    32,   165,    34,    35,    36,    37,   127,    38,    39,
      40,    41,    42,    43,     0,     0,    44,     0,     0,    45,
      46,    47,    48,    49,    50,     0,     0,     0,    51,    52,
      53,     0,     0,     0,     0,     0,    18,    86,     0,    19,
       0,     0,    20,    54,     0,    21,    22,    23,     0,     0,
      24,    25,     0,     0,     0,    26,    27,     0,     0,     0,
       0,     0,     0,     0,    55,    56,     0,    57,     0,    58,
      59,     0,     0,    28,    29,     0,     0,    60,    30,    31,
       0,    32,    33,    34,    35,    36,    37,     0,    38,    39,
      40,    41,    42,    43,     0,     0,    44,     0,     0,    45,
      46,    47,    48,    49,    50,     0,     0,     0,    51,    52,
      53,     0,     0,     0,     0,     0,    18,     0,     0,    19,
       0,     0,    20,    54,     0,    21,    22,    23,     0,     0,
      24,    25,     0,     0,     0,    26,    27,     0,     0,     0,
       0,     0,     0,     0,    55,    56,     0,    57,     0,    58,
      59,     0,     0,    28,    29,     0,     0,    60,    30,    31,
       0,    32,    33,    34,    35,    36,    37,     0,    38,    39,
      40,    41,    42,    43,     0,     0,    44,     0,     0,    45,
      46,    47,    48,    49,    50,     0,     0,     0,    51,    52,
      53,     0,     0,     0,     0,     0,    18,     0,     0,    19,
       0,     0,    20,    54,     0,    21,    22,    23,     0,     0,
      24,    25,     0,     0,     0,    26,    27,     0,     0,     0,
       0,     0,     0,     0,    55,    56,     0,    57,     0,    58,
      59,     0,     0,    28,    29,     0,   183,    60,    30,    31,
       0,    32,    33,    34,    35,    36,    37,     0,    38,    39,
      40,    41,    42,    43,     0,     0,    44,     0,     0,    45,
      46,    47,    48,    49,    50,     0,     0,     0,    51,    52,
      53,     0,     0,     0,     0,     0,    18,     0,     0,    19,
       0,     0,    20,    54,     0,    21,    22,    23,     0,     0,
      24,    25,     0,     0,     0,    26,    27,     0,     0,     0,
       0,     0,     0,     0,    55,    56,     0,    57,     0,    58,
      59,     0,     0,    28,    29,     0,   296,    60,    30,    31,
       0,    32,    33,    34,    35,    36,    37,     0,    38,    39,
      40,    41,    42,    43,     0,     0,    44,     0,     0,    45,
      46,    47,    48,    49,    50,     0,     0,     0,    51,    52,
      53,     0,     0,     0,     0,     0,  -340,   230,     0,   231,
       0,     0,  -340,    54,     0,  -340,  -340,  -340,     0,     0,
    -340,  -340,     0,     0,     0,  -340,  -340,     0,     0,     0,
       0,     0,     0,     0,    55,    56,     0,    57,     0,    58,
      59,     0,     0,  -340,  -340,     0,   314,    60,  -340,  -340,
       0,  -340,  -340,  -340,  -340,  -340,  -340,     0,  -340,  -340,
    -340,  -340,  -340,  -340,     0,     0,  -340,     0,     0,  -340,
    -340,  -340,  -340,  -340,  -340,     0,     0,     0,  -340,  -340,
    -340,     0,     0,     0,     0,     0,    18,     0,     0,    19,
       0,     0,    20,  -340,     0,    21,    22,    23,     0,     0,
      24,    25,     0,     0,     0,    26,    27,     0,     0,     0,
       0,     0,     0,     0,  -340,  -340,     0,  -340,     0,  -340,
    -340,     0,     0,    28,    29,     0,     0,  -340,    30,    31,
       0,    32,    33,    34,    35,    36,    37,     0,    38,    39,
      40,    41,    42,    43,     0,     0,    44,     0,     0,    45,
      46,    47,    48,    49,    50,     0,     0,     0,    51,    52,
      53,     0,     0,     0,     0,     0,    18,     0,     0,    19,
       0,     0,    20,    54,     0,    21,    22,    23,     0,     0,
      24,    25,     0,     0,     0,    26,    27,     0,     0,     0,
       0,     0,     0,     0,    55,    56,     0,    57,     0,    58,
      59,     0,     0,    28,    29,     0,   332,    60,    30,    31,
       0,    32,    33,    34,    35,    36,    37,     0,    38,    39,
      40,    41,    42,    43,     0,     0,    44,     0,     0,    45,
      46,    47,    48,    49,    50,     0,     0,     0,    51,    52,
      53,     0,     0,     0,     0,     0,    18,     0,     0,    19,
       0,     0,    20,    54,     0,    21,    22,    23,     0,     0,
      24,    25,     0,     0,     0,    26,    27,     0,     0,     0,
       0,     0,     0,     0,    55,    56,     0,    57,     0,    58,
      59,     0,     0,    28,    29,     0,   374,    60,    30,    31,
       0,    32,    33,    34,    35,    36,    37,     0,    38,    39,
      40,    41,    42,    43,     0,     0,    44,     0,     0,    45,
      46,    47,    48,    49,    50,     0,     0,     0,    51,    52,
      53,     0,     0,     0,     0,     0,    18,     0,     0,    19,
       0,     0,    20,    54,     0,    21,    22,    23,     0,     0,
      24,    25,     0,     0,     0,    26,    27,     0,     0,     0,
       0,     0,     0,     0,    55,    56,     0,    57,     0,    58,
      59,     0,     0,    28,    29,     0,   429,    60,    30,    31,
       0,    32,    33,    34,    35,    36,    37,     0,    38,    39,
      40,    41,    42,    43,     0,     0,    44,     0,     0,    45,
      46,    47,    48,    49,    50,     0,     0,     0,    51,    52,
      53,     0,     0,     0,     0,     0,    18,     0,     0,    19,
       0,     0,    20,    54,     0,    21,    22,    23,     0,     0,
      24,    25,     0,     0,     0,    26,    27,     0,     0,     0,
       0,     0,     0,     0,    55,    56,     0,    57,     0,    58,
      59,     0,     0,    28,    29,     0,   463,    60,    30,    31,
       0,    32,    33,    34,    35,    36,    37,     0,    38,    39,
      40,    41,    42,    43,     0,     0,    44,     0,     0,    45,
      46,    47,    48,    49,    50,     0,     0,     0,    51,    52,
      53,     0,     0,     0,     0,     0,    18,     0,     0,    19,
       0,     0,    20,    54,     0,    21,    22,    23,     0,     0,
      24,    25,     0,     0,     0,    26,    27,     0,     0,     0,
       0,     0,     0,     0,    55,    56,     0,    57,     0,    58,
      59,     0,     0,    28,    29,     0,     0,    60,    30,    31,
       0,    32,    33,    34,    35,    36,    37,     0,    38,    39,
      40,    41,    42,    43,     0,     0,    44,     0,     0,    45,
      46,    47,    48,    49,    50,     0,     0,     0,    51,    52,
      53,     0,     0,     0,     0,     0,  -339,     0,     0,  -339,
       0,     0,  -339,    54,     0,  -339,  -339,  -339,     0,     0,
    -339,  -339,     0,     0,     0,  -339,  -339,     0,     0,     0,
       0,     0,     0,     0,    55,    56,     0,    57,     0,    58,
      59,     0,     0,  -339,  -339,     0,     0,   290,  -339,  -339,
       0,  -339,  -339,  -339,  -339,  -339,  -339,     0,  -339,  -339,
    -339,  -339,  -339,  -339,     0,     0,  -339,     0,     0,  -339,
    -339,  -339,  -339,  -339,  -339,     0,     0,     0,  -339,  -339,
    -339,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -339,     0,     0,     0,   199,     0,     0,
       0,     0,     0,     0,     0,   200,   201,   202,     0,     0,
       0,     0,     0,     0,  -339,  -339,     0,  -339,   203,  -339,
    -339,     0,     0,     0,   204,   205,   206,  -339,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,     0,     0,     0,     0,   223,   199,
       0,   224,   225,   226,   227,   228,     0,   200,   201,   202,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -341,     0,     0,     0,     0,     0,   204,   205,   206,     0,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,     0,     0,     0,     0,
     223,   199,     0,   224,   225,   226,   227,   228,     0,   200,
     201,   202,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   204,   205,
     206,     0,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,     0,     0,
       0,     0,   223,   199,     0,   224,   225,   226,   227,   228,
       0,   200,   201,   202,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   206,     0,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
       0,     0,     0,     0,   223,  -341,     0,   224,   225,   226,
     227,   228,     0,   200,   201,   202,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   200,   201,   202,     0,   223,     0,     0,   224,
     225,   226,   227,   228,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   200,   201,   202,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,     0,     0,     0,     0,   223,     0,     0,   224,   225,
     226,   227,   228,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   200,   201,   202,     0,   223,     0,
       0,   224,   225,   226,   227,   228,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   200,   201,   202,     0,     0,
       0,     0,     0,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,     0,   200,   201,   202,   223,     0,     0,
     224,   225,   226,   227,   228,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   200,   201,   202,     0,   223,     0,
       0,   224,   225,   226,   227,   228,   216,   217,   218,   219,
     220,   221,   222,   200,   201,   202,     0,   223,     0,     0,
     224,   225,   226,   227,   228,     0,     0,     0,   218,   219,
     220,   221,   222,   200,   201,   202,     0,   223,     0,     0,
     224,   225,   226,   227,   228,     0,     0,  -341,   219,   220,
     221,   222,   200,   201,   202,     0,   223,     0,     0,   224,
     225,   226,   227,   228,     0,     0,     0,     0,   219,   220,
     221,   222,     0,     0,     0,     0,   223,     0,     0,   224,
     225,   226,   227,   228,     0,     0,     0,     0,   220,   221,
     222,     0,     0,     0,     0,   223,     0,     0,   224,   225,
     226,   227,   228
};

static const yytype_int16 yycheck[] =
{
      10,    17,    19,    49,    27,    27,   403,    11,    54,    19,
     150,   306,   582,   151,    18,    11,    20,    13,    22,    10,
      24,    25,   110,   103,    12,    29,   556,   105,    19,    88,
      34,    35,    16,   111,    13,    52,    20,    13,   176,    49,
      24,    16,    52,    11,    48,    49,    50,    51,    22,    16,
      93,    94,    95,    96,    11,    30,    13,    11,    18,    13,
      20,    52,    22,    11,    24,    25,     0,    27,    16,    60,
      93,    93,   131,    11,    34,    35,    13,    25,   393,    18,
      11,    22,    13,    22,    22,    24,    25,   130,   403,    49,
      15,    51,   131,   408,   409,    34,    35,   101,    23,   669,
     131,     9,   112,    14,    31,   151,    85,    14,    56,    85,
      49,    14,    51,    61,   124,    42,   139,   139,    59,    93,
      94,    95,    96,    11,   170,   171,   656,    11,    85,   117,
     176,    85,    16,    93,    22,   131,    96,   121,   148,   149,
     150,   151,   131,    56,   161,   162,   121,   131,    61,   140,
      15,   161,   162,   157,    85,   111,   131,    16,   162,   111,
     112,    20,   302,   154,   131,    24,   176,   109,   110,   160,
     161,   162,    56,   261,    25,    11,   264,    61,    86,   139,
     109,   496,    93,    94,    95,    96,    93,    94,    95,    96,
      93,    94,    95,    96,   185,   186,   187,   188,   131,   190,
     191,   192,   162,    10,    11,    56,    13,    16,    11,    16,
      61,    20,    56,    20,    14,    24,    56,    24,    25,   131,
      11,   237,    13,   162,    22,   248,   248,    14,   238,   270,
     271,   241,   273,   274,   549,   550,   128,   129,   229,   230,
     231,   232,   233,   234,   235,   236,    95,    96,   388,    14,
      57,    32,   131,   131,    35,    36,    37,    38,    33,    34,
      41,   265,   131,   309,    93,    94,    95,    96,   228,   666,
     131,   566,    14,   131,   589,    82,    14,    11,   269,   270,
     271,   272,   273,   274,   362,    11,    39,    13,   248,    22,
      22,   308,   302,    93,    94,    95,    96,    14,   308,   290,
     615,   130,    85,    22,   442,    59,    93,    94,    95,    96,
     131,    85,    93,    94,    95,    96,    22,   308,    88,    11,
     635,    13,   130,    22,   131,   130,    22,   318,    93,    94,
      95,    96,   323,   587,    11,    22,    13,   245,   246,   247,
      13,   249,   250,    56,   252,   253,   254,   255,    22,   130,
      85,    93,    94,    95,    96,    93,    94,    95,    96,    56,
     121,   365,   125,   126,   127,   128,   129,   621,   622,   623,
     510,    56,   363,   364,    93,    94,    95,    96,   388,   131,
     371,   404,   404,   637,   638,    44,    15,    93,    94,    95,
      96,    79,    80,   403,   410,    59,   442,    93,    94,    95,
      96,   392,   393,   657,    79,   365,    93,    94,    95,    96,
      61,   665,   403,    79,    59,   406,   407,   408,   409,    93,
      94,    95,    96,   130,   564,   563,   436,    89,   116,   117,
     440,    11,   442,    13,   122,   395,    12,   125,   126,   127,
     128,   129,   117,    13,   404,   131,    25,   122,   465,    18,
     125,   126,   127,   128,   129,   465,   122,    25,   449,   125,
     126,   127,   128,   129,   544,   545,    10,    93,    94,    95,
      96,   551,    16,    25,   465,    25,    20,   557,   558,    32,
      24,    59,    35,    36,    37,    38,    30,    98,    41,    93,
      94,    95,    96,   503,   131,   505,    56,   405,    22,    98,
     510,    98,   130,   411,   130,   496,   414,   131,    12,   131,
     590,   591,   592,   530,    12,    12,   596,   563,    12,    12,
     530,   130,   130,    22,   131,   485,   434,    16,   130,   609,
     521,    93,    94,    95,    96,   130,   616,   617,   130,   530,
      93,    94,    95,    96,    93,    94,    95,    96,   130,   565,
     131,    56,    11,   563,   564,   130,    11,    89,   549,   550,
     640,    12,   578,    93,    94,    95,    96,   475,   130,   477,
      22,   581,   582,   653,   130,    15,   130,   587,    22,   130,
     488,   130,    45,   131,   664,   130,    87,   130,   604,   131,
     130,   130,   608,    22,   674,   131,   606,   588,   589,    22,
     130,    93,    94,    95,    96,    93,    94,    95,    96,   130,
     130,   621,   622,   623,     3,     4,     5,     6,     7,     8,
       9,   130,    17,   583,   615,    86,    13,   637,   638,   588,
     130,   117,   666,   541,   130,   595,   292,   406,   130,   649,
     283,   645,   130,   505,   635,   661,    21,   657,    23,   428,
     516,    26,   598,    28,    29,   665,   666,   434,   139,   669,
     404,   248,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,
      -1,    -1,    -1,    48,    -1,     0,     1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    10,    11,    -1,    13,    -1,
     598,    16,    -1,    -1,    19,    20,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    36,    37,    38,    -1,    40,    41,    42,    43,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    -1,    72,    73,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    82,    83,    84,
      -1,    -1,    -1,    -1,   139,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   118,   119,    -1,   121,    -1,   123,   124,
      -1,    -1,    -1,    -1,    -1,    -1,   131,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,    -1,
     195,    -1,    -1,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,     0,
       1,    -1,   227,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    -1,    13,    -1,    -1,    16,    -1,    -1,    19,    20,
      21,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    36,    37,    38,    -1,    40,
      41,    42,    43,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      -1,    72,    73,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,   118,   119,    -1,
     121,    -1,   123,   124,    -1,    10,    11,    12,    13,    -1,
     131,    16,    -1,    -1,    19,    20,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    36,    37,    38,    -1,    40,    41,    42,    43,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    -1,    72,    73,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,   453,    79,
      80,    81,    -1,   118,   119,    -1,   121,    -1,   123,   124,
      -1,    -1,    92,    -1,    -1,    -1,   131,    -1,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,    -1,    -1,
      -1,    -1,   122,    -1,    -1,   125,   126,   127,   128,   129,
       1,    -1,    -1,    -1,    -1,    -1,   511,   512,    -1,    10,
      11,    12,    13,    -1,    -1,    16,    -1,    -1,    19,    20,
      21,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    36,    37,    38,   543,    40,
      41,    42,    43,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      -1,    72,    73,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,   118,   119,    -1,
     121,    -1,   123,   124,    -1,    10,    11,    12,    13,    -1,
     131,    16,    -1,    -1,    19,    20,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    36,    37,    38,    -1,    40,    41,    42,    43,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    -1,    72,    73,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,   118,   119,    -1,   121,    -1,   123,   124,
      -1,    10,    11,    12,    13,    -1,   131,    16,    -1,    -1,
      19,    20,    21,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      -1,    40,    41,    42,    43,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    -1,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,   118,
     119,    -1,   121,    -1,   123,   124,    -1,    10,    11,    12,
      13,    -1,   131,    16,    -1,    -1,    19,    20,    21,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    36,    37,    38,    -1,    40,    41,    42,
      43,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    -1,    72,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    82,
      83,    84,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,   118,   119,    -1,   121,    -1,
     123,   124,    -1,    10,    11,    12,    13,    -1,   131,    16,
      -1,    -1,    19,    20,    21,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    36,
      37,    38,    -1,    40,    41,    42,    43,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    -1,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    -1,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,   118,   119,    -1,   121,    -1,   123,   124,    -1,    10,
      11,    -1,    13,    -1,   131,    16,    -1,    -1,    19,    20,
      21,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    36,    37,    38,    -1,    40,
      41,    42,    43,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      -1,    72,    73,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,   118,   119,    -1,
     121,    -1,   123,   124,    -1,    10,    11,    -1,    13,    -1,
     131,    16,    -1,    -1,    19,    20,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    36,    37,    38,    -1,    40,    41,    42,    43,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    -1,    72,    73,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,   118,   119,    -1,   121,    -1,   123,   124,
      -1,    10,    11,    -1,    13,    -1,   131,    16,    -1,    -1,
      19,    20,    21,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      -1,    40,    41,    42,    43,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    -1,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    82,    83,    84,    -1,     1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    10,    -1,    97,    13,
      -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,    -1,
      24,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,   118,
     119,    -1,   121,    -1,   123,   124,    -1,    -1,    -1,    -1,
      -1,    -1,   131,    47,    48,    -1,    -1,    -1,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    -1,    -1,    70,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    -1,     1,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    13,
      -1,    -1,    16,    97,    -1,    19,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,   121,    -1,   123,
     124,    -1,    -1,    47,    48,    -1,    -1,   131,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    -1,    -1,    70,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    10,    11,    -1,    13,
      -1,    -1,    16,    97,    -1,    19,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,   121,    -1,   123,
     124,    -1,    -1,    47,    48,    -1,   130,   131,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    70,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    10,    11,    -1,    13,
      -1,    -1,    16,    97,    -1,    19,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,   121,    -1,   123,
     124,    -1,    -1,    47,    48,    -1,    -1,   131,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    -1,    -1,    70,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    13,
      -1,    -1,    16,    97,    -1,    19,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,   121,    -1,   123,
     124,    -1,    -1,    47,    48,    -1,    -1,   131,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    -1,    -1,    70,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    13,
      -1,    -1,    16,    97,    -1,    19,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,   121,    -1,   123,
     124,    -1,    -1,    47,    48,    -1,   130,   131,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    -1,    -1,    70,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    13,
      -1,    -1,    16,    97,    -1,    19,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,   121,    -1,   123,
     124,    -1,    -1,    47,    48,    -1,   130,   131,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    -1,    -1,    70,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    10,    11,    -1,    13,
      -1,    -1,    16,    97,    -1,    19,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,   121,    -1,   123,
     124,    -1,    -1,    47,    48,    -1,   130,   131,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    -1,    -1,    70,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    13,
      -1,    -1,    16,    97,    -1,    19,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,   121,    -1,   123,
     124,    -1,    -1,    47,    48,    -1,    -1,   131,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    -1,    -1,    70,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    13,
      -1,    -1,    16,    97,    -1,    19,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,   121,    -1,   123,
     124,    -1,    -1,    47,    48,    -1,   130,   131,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    -1,    -1,    70,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    13,
      -1,    -1,    16,    97,    -1,    19,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,   121,    -1,   123,
     124,    -1,    -1,    47,    48,    -1,   130,   131,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    -1,    -1,    70,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    13,
      -1,    -1,    16,    97,    -1,    19,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,   121,    -1,   123,
     124,    -1,    -1,    47,    48,    -1,   130,   131,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    -1,    -1,    70,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    13,
      -1,    -1,    16,    97,    -1,    19,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,   121,    -1,   123,
     124,    -1,    -1,    47,    48,    -1,   130,   131,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    -1,    -1,    70,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    13,
      -1,    -1,    16,    97,    -1,    19,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,   121,    -1,   123,
     124,    -1,    -1,    47,    48,    -1,    -1,   131,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    -1,    -1,    70,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    13,
      -1,    -1,    16,    97,    -1,    19,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,   121,    -1,   123,
     124,    -1,    -1,    47,    48,    -1,    -1,   131,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    -1,    -1,    70,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,   121,    92,   123,
     124,    -1,    -1,    -1,    98,    99,   100,   131,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,    -1,    -1,    -1,    -1,   122,    71,
      -1,   125,   126,   127,   128,   129,    -1,    79,    80,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,    -1,    -1,    -1,    -1,
     122,    71,    -1,   125,   126,   127,   128,   129,    -1,    79,
      80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,
     100,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,    -1,    -1,
      -1,    -1,   122,    71,    -1,   125,   126,   127,   128,   129,
      -1,    79,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
      -1,    -1,    -1,    -1,   122,    71,    -1,   125,   126,   127,
     128,   129,    -1,    79,    80,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,    79,    80,    81,    -1,   122,    -1,    -1,   125,
     126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    81,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,    -1,    -1,    -1,    -1,   122,    -1,    -1,   125,   126,
     127,   128,   129,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,    79,    80,    81,    -1,   122,    -1,
      -1,   125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    81,    -1,    -1,
      -1,    -1,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,    -1,    79,    80,    81,   122,    -1,    -1,
     125,   126,   127,   128,   129,   109,   110,   111,   112,   113,
     114,   115,   116,   117,    79,    80,    81,    -1,   122,    -1,
      -1,   125,   126,   127,   128,   129,   111,   112,   113,   114,
     115,   116,   117,    79,    80,    81,    -1,   122,    -1,    -1,
     125,   126,   127,   128,   129,    -1,    -1,    -1,   113,   114,
     115,   116,   117,    79,    80,    81,    -1,   122,    -1,    -1,
     125,   126,   127,   128,   129,    -1,    -1,   113,   114,   115,
     116,   117,    79,    80,    81,    -1,   122,    -1,    -1,   125,
     126,   127,   128,   129,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,    -1,    -1,    -1,    -1,   122,    -1,    -1,   125,
     126,   127,   128,   129,    -1,    -1,    -1,    -1,   115,   116,
     117,    -1,    -1,    -1,    -1,   122,    -1,    -1,   125,   126,
     127,   128,   129
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,   133,   134,
     135,   136,   137,   138,   139,   140,     0,   145,    10,    13,
      16,    19,    20,    21,    24,    25,    29,    30,    47,    48,
      52,    53,    55,    56,    57,    58,    59,    60,    62,    63,
      64,    65,    66,    67,    70,    73,    74,    75,    76,    77,
      78,    82,    83,    84,    97,   118,   119,   121,   123,   124,
     131,   143,   204,   205,   206,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   220,   227,   235,   236,   237,
     238,   239,   240,   241,   242,   243,    11,   142,     1,    22,
      26,    27,    28,    31,    32,    35,    36,    37,    38,    40,
      41,    42,    43,    46,    49,    50,    51,    54,    68,    72,
      90,   141,   142,   155,   169,   204,   224,    69,   153,   154,
     155,   143,   151,   197,   198,   151,    56,    61,   142,   236,
     244,   227,   244,   218,   244,   218,   244,   244,   218,   121,
     131,   221,   236,   237,   238,   218,   142,   218,   181,   181,
     182,   244,   244,   219,    13,   131,   218,   181,   218,   131,
     131,    88,   131,   142,   218,    56,   143,   205,   226,   236,
     244,   142,   244,   227,    56,    61,   184,   205,   218,   218,
     218,   218,   218,   130,   204,    93,    94,    95,    96,    15,
      11,    13,   131,   111,   112,   111,   109,   110,   109,    71,
      79,    80,    81,    92,    98,    99,   100,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   122,   125,   126,   127,   128,   129,   131,
      11,    13,    11,    13,    11,    13,    11,   145,   183,    56,
      56,   222,   236,   237,   238,   131,   131,    30,   121,   131,
     234,   236,   131,   131,   131,   131,   142,    11,   146,   146,
     180,   184,    22,   180,   184,    39,   143,   171,    22,    32,
      35,    36,    37,    38,    41,    22,   154,   155,   153,    16,
      20,    24,   143,   189,   190,   191,   192,   193,   194,    14,
     131,   218,   221,   236,   237,   238,   130,   204,    85,   187,
      59,   143,   185,    85,   143,   186,   186,   226,   131,    88,
     204,   130,   142,   130,   130,   204,   227,   227,   244,   205,
     205,    22,   226,    13,   130,   204,   204,   204,   204,   218,
     204,   204,   130,   204,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,    10,    11,    13,    16,    20,    24,    25,    57,
      82,   131,   208,   236,   130,   204,   204,   204,   204,   204,
     204,   204,   204,   151,    56,   143,   179,    56,    56,    85,
     143,   223,   145,   145,   121,   145,    30,   232,   233,   235,
     236,   237,   238,   145,   145,   131,   145,   145,   145,   145,
     147,    44,   159,   180,   158,   180,   142,   168,   204,   168,
     168,   176,   204,   168,   168,    61,   188,   188,    15,   130,
     204,   187,   130,    59,   186,    59,   145,   202,   202,   227,
     205,    14,   207,   130,    89,   130,   204,    12,   204,    13,
      22,    14,   130,   101,    25,   184,   204,   204,    25,    25,
      25,    25,    25,   130,   204,   131,   130,    22,    14,    22,
      14,    22,    14,    22,    12,    18,   144,    11,    22,   186,
      59,    98,   177,   204,   177,   131,   229,   236,   131,   143,
     169,   174,   177,   178,   204,   232,   145,   176,   175,   204,
     177,   177,   151,   145,    56,   156,    22,   145,   199,   200,
     157,    98,    98,   192,   130,   200,   131,   143,   195,   196,
     130,    23,   143,   228,   226,   130,    14,   204,    12,   218,
     131,    22,    14,   130,   227,    12,    12,    12,    12,   145,
     145,    11,    22,   225,   130,   130,   230,   231,   236,   131,
     145,   130,    22,   162,   177,   130,   130,   130,   130,    12,
     131,   143,   148,    56,   185,    11,   186,   218,   218,   197,
      11,   204,    89,    14,   227,    12,   130,    22,   164,   145,
     218,   146,   146,    15,   130,   177,   177,   146,   160,   131,
     130,   173,   173,   146,   146,   149,   163,   226,   186,   151,
      22,   201,   202,   130,   203,   130,    87,   151,   165,    33,
      34,   143,   170,   170,   236,   131,   130,   130,   171,   175,
     177,   146,   146,   146,   236,   146,    22,   199,    12,   151,
     143,   152,    12,   151,   146,   131,   177,   146,   146,    22,
     130,   171,   171,   171,   150,    45,   172,    12,    22,    59,
     166,    12,   177,   130,   171,   171,   161,   146,   130,   142,
      17,    86,   143,   167,   130,   146,   173,   171,   151,   146,
     171,   178,    87,   170,   130,   146
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   132,   134,   133,   135,   133,   136,   133,   137,   133,
     138,   133,   139,   133,   140,   133,   141,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   148,   151,   151,
     152,   152,   153,   153,   154,   154,   155,   155,   156,   155,
     157,   155,   158,   155,   155,   155,   159,   155,   155,   155,
     155,   155,   155,   155,   155,   160,   161,   155,   155,   155,
     155,   162,   155,   155,   155,   163,   155,   155,   164,   155,
     165,   155,   155,   155,   155,   155,   155,   166,   167,   167,
     168,   169,   169,   169,   169,   169,   169,   169,   169,   170,
     170,   170,   171,   171,   172,   172,   173,   174,   174,   175,
     175,   176,   177,   178,   179,   179,   180,   181,   182,   183,
     184,   184,   185,   185,   186,   186,   186,   187,   187,   188,
     188,   189,   189,   190,   190,   190,   191,   191,   191,   192,
     192,   193,   193,   193,   194,   194,   195,   195,   196,   198,
     197,   199,   199,   200,   201,   201,   203,   202,   204,   204,
     204,   204,   204,   205,   205,   205,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   207,   206,
     208,   208,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   211,   211,
     211,   211,   211,   212,   212,   213,   213,   213,   213,   214,
     214,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     216,   216,   216,   216,   216,   217,   217,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   219,   218,   218,   218,   218,
     220,   220,   220,   220,   221,   221,   221,   221,   221,   222,
     222,   222,   223,   223,   223,   224,   225,   224,   226,   226,
     227,   227,   228,   228,   229,   230,   230,   230,   231,   232,
     232,   232,   233,   233,   234,   234,   235,   236,   237,   238,
     239,   239,   240,   241,   241,   242,   242,   243,   243,   244,
     244,   244,   244
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     3,     1,     1,     4,     0,
       7,     0,     4,     0,     1,     0,     0,     5,     1,     2,
       1,     2,     1,     1,     2,     2,     1,     4,     0,     7,
       0,     6,     0,     4,     4,     5,     0,     7,     7,     7,
       6,     6,     2,     8,     8,     0,     0,    13,     9,    11,
       8,     0,    10,     9,     7,     0,     8,     2,     0,     8,
       0,     9,     2,     2,     2,     2,     1,     2,     1,     3,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     1,
       2,     6,     1,     2,     0,     2,     0,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     0,     0,     0,     0,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     0,
       1,     1,     1,     2,     3,     4,     2,     3,     4,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     3,     0,
       2,     1,     1,     4,     1,     1,     0,     6,     3,     3,
       3,     3,     1,     2,     3,     1,     3,     3,     5,     6,
       3,     7,     4,     3,     5,     2,     4,     4,     0,     5,
       1,     1,     5,     4,     5,     4,     5,     6,     5,     4,
       5,     4,     3,     6,     4,     5,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       2,     2,     3,     3,     3,     1,     3,     2,     2,     3,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     4,     5,     4,     4,     2,     2,     1,     1,     1,
       1,     5,     2,     1,     2,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     4,     4,     5,     5,     1,     1,
       3,     4,     3,     4,     4,     4,     4,     4,     1,     2,
       2,     1,     2,     2,     1,     2,     1,     2,     1,     3,
       1,     3,     1,     3,     4,     0,     6,     1,     1,     1,
       3,     2,     4,     3,     3,     2,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     3,     0,     6,     1,     1,
       1,     1,     1,     2,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     4,     2,     1,     3,     1,     3,     1,     3,     1,
       1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = PERL_BISON_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == PERL_BISON_EMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use PERL_BISON_error or PERL_BISON_UNDEF. */
#define YYERRCODE PERL_BISON_UNDEF


/* Enable debugging if requested.  */
#if PERL_BISON_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !PERL_BISON_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !PERL_BISON_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = PERL_BISON_EMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == PERL_BISON_EMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval);
    }

  if (yychar <= PERL_BISON_EOF)
    {
      yychar = PERL_BISON_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == PERL_BISON_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = PERL_BISON_UNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = PERL_BISON_EMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* @1: %empty  */
#line 170 "perly.y"
                        {
			  parser->expect = XSTATE;
                          (yyval.ival) = 0;
			}
#line 2435 "bison-perly-lalr.tab.c"
    break;

  case 3: /* grammar: GRAMPROG @1 remember stmtseq  */
#line 175 "perly.y"
                        {
			  newPROG(block_end((yyvsp[-1].ival),(yyvsp[0].opval)));
			  PL_compiling.cop_seq = 0;
			  (yyval.ival) = 0;
			}
#line 2445 "bison-perly-lalr.tab.c"
    break;

  case 4: /* @2: %empty  */
#line 181 "perly.y"
                        {
			  parser->expect = XTERM;
                          (yyval.ival) = 0;
			}
#line 2454 "bison-perly-lalr.tab.c"
    break;

  case 5: /* grammar: GRAMEXPR @2 optexpr  */
#line 186 "perly.y"
                        {
			  PL_eval_root = (yyvsp[0].opval);
			  (yyval.ival) = 0;
			}
#line 2463 "bison-perly-lalr.tab.c"
    break;

  case 6: /* @3: %empty  */
#line 191 "perly.y"
                        {
			  parser->expect = XBLOCK;
                          (yyval.ival) = 0;
			}
#line 2472 "bison-perly-lalr.tab.c"
    break;

  case 7: /* grammar: GRAMBLOCK @3 block  */
#line 196 "perly.y"
                        {
			  PL_pad_reset_pending = TRUE;
			  PL_eval_root = (yyvsp[0].opval);
			  (yyval.ival) = 0;
			  yyunlex();
			  parser->yychar = yytoken = PERL_PARSER_EOF;
			}
#line 2484 "bison-perly-lalr.tab.c"
    break;

  case 8: /* @4: %empty  */
#line 204 "perly.y"
                        {
			  parser->expect = XSTATE;
                          (yyval.ival) = 0;
			}
#line 2493 "bison-perly-lalr.tab.c"
    break;

  case 9: /* grammar: GRAMBARESTMT @4 barestmt  */
#line 209 "perly.y"
                        {
			  PL_pad_reset_pending = TRUE;
			  PL_eval_root = (yyvsp[0].opval);
			  (yyval.ival) = 0;
			  yyunlex();
			  parser->yychar = yytoken = PERL_PARSER_EOF;
			}
#line 2505 "bison-perly-lalr.tab.c"
    break;

  case 10: /* @5: %empty  */
#line 217 "perly.y"
                        {
			  parser->expect = XSTATE;
                          (yyval.ival) = 0;
			}
#line 2514 "bison-perly-lalr.tab.c"
    break;

  case 11: /* grammar: GRAMFULLSTMT @5 fullstmt  */
#line 222 "perly.y"
                        {
			  PL_pad_reset_pending = TRUE;
			  PL_eval_root = (yyvsp[0].opval);
			  (yyval.ival) = 0;
			  yyunlex();
			  parser->yychar = yytoken = PERL_PARSER_EOF;
			}
#line 2526 "bison-perly-lalr.tab.c"
    break;

  case 12: /* @6: %empty  */
#line 230 "perly.y"
                        {
			  parser->expect = XSTATE;
                          (yyval.ival) = 0;
			}
#line 2535 "bison-perly-lalr.tab.c"
    break;

  case 13: /* grammar: GRAMSTMTSEQ @6 stmtseq  */
#line 235 "perly.y"
                        {
			  PL_eval_root = (yyvsp[0].opval);
			  (yyval.ival) = 0;
			}
#line 2544 "bison-perly-lalr.tab.c"
    break;

  case 14: /* @7: %empty  */
#line 240 "perly.y"
                        {
			  parser->expect = XSTATE;
			  (yyval.ival) = 0;
			}
#line 2553 "bison-perly-lalr.tab.c"
    break;

  case 15: /* grammar: GRAMSUBSIGNATURE @7 subsigguts  */
#line 245 "perly.y"
                        {
			  PL_eval_root = (yyvsp[0].opval);
			  (yyval.ival) = 0;
			}
#line 2562 "bison-perly-lalr.tab.c"
    break;

  case 16: /* sigsub_or_method_named: KW_SUB_named_sig  */
#line 254 "perly.y"
                        { (yyval.ival) = KW_SUB_named_sig; }
#line 2568 "bison-perly-lalr.tab.c"
    break;

  case 17: /* sigsub_or_method_named: KW_METHOD_named  */
#line 256 "perly.y"
                        { (yyval.ival) = KW_METHOD_named; }
#line 2574 "bison-perly-lalr.tab.c"
    break;

  case 18: /* block: PERLY_BRACE_OPEN remember stmtseq PERLY_BRACE_CLOSE  */
#line 261 "perly.y"
                        { if (parser->copline > (line_t)(yyvsp[-3].ival))
			      parser->copline = (line_t)(yyvsp[-3].ival);
			  (yyval.opval) = block_end((yyvsp[-2].ival), (yyvsp[-1].opval));
			}
#line 2583 "bison-perly-lalr.tab.c"
    break;

  case 19: /* empty: %empty  */
#line 268 "perly.y"
                                { (yyval.opval) = NULL; }
#line 2589 "bison-perly-lalr.tab.c"
    break;

  case 20: /* formblock: PERLY_EQUAL_SIGN remember PERLY_SEMICOLON FORMRBRACK formstmtseq PERLY_SEMICOLON PERLY_DOT  */
#line 273 "perly.y"
                        { if (parser->copline > (line_t)(yyvsp[-6].ival))
			      parser->copline = (line_t)(yyvsp[-6].ival);
			  (yyval.opval) = block_end((yyvsp[-5].ival), (yyvsp[-2].opval));
			}
#line 2598 "bison-perly-lalr.tab.c"
    break;

  case 21: /* remember: %empty  */
#line 280 "perly.y"
                        { (yyval.ival) = block_start(TRUE);
			  parser->parsed_sub = 0; }
#line 2605 "bison-perly-lalr.tab.c"
    break;

  case 22: /* mblock: PERLY_BRACE_OPEN mremember stmtseq PERLY_BRACE_CLOSE  */
#line 285 "perly.y"
                        { if (parser->copline > (line_t)(yyvsp[-3].ival))
			      parser->copline = (line_t)(yyvsp[-3].ival);
			  (yyval.opval) = block_end((yyvsp[-2].ival), (yyvsp[-1].opval));
			}
#line 2614 "bison-perly-lalr.tab.c"
    break;

  case 23: /* mremember: %empty  */
#line 292 "perly.y"
                        { (yyval.ival) = block_start(FALSE);
			  parser->parsed_sub = 0; }
#line 2621 "bison-perly-lalr.tab.c"
    break;

  case 25: /* $@8: %empty  */
#line 301 "perly.y"
                        { parser->in_my = KEY_catch; }
#line 2627 "bison-perly-lalr.tab.c"
    break;

  case 26: /* $@9: %empty  */
#line 303 "perly.y"
                        { parser->in_my = 0; intro_my(); }
#line 2633 "bison-perly-lalr.tab.c"
    break;

  case 27: /* catch_paren: PERLY_PAREN_OPEN $@8 scalar $@9 PERLY_PAREN_CLOSE  */
#line 305 "perly.y"
                        { (yyval.opval) = (yyvsp[-2].opval); }
#line 2639 "bison-perly-lalr.tab.c"
    break;

  case 29: /* stmtseq: stmtseq fullstmt  */
#line 312 "perly.y"
                        {   (yyval.opval) = op_append_list(OP_LINESEQ, (yyvsp[-1].opval), (yyvsp[0].opval));
			    PL_pad_reset_pending = TRUE;
			    if ((yyvsp[-1].opval) && (yyvsp[0].opval))
				PL_hints |= HINT_BLOCK_SCOPE;
			}
#line 2649 "bison-perly-lalr.tab.c"
    break;

  case 31: /* formstmtseq: formstmtseq formline  */
#line 323 "perly.y"
                        {   (yyval.opval) = op_append_list(OP_LINESEQ, (yyvsp[-1].opval), (yyvsp[0].opval));
			    PL_pad_reset_pending = TRUE;
			    if ((yyvsp[-1].opval) && (yyvsp[0].opval))
				PL_hints |= HINT_BLOCK_SCOPE;
			}
#line 2659 "bison-perly-lalr.tab.c"
    break;

  case 32: /* fullstmt: barestmt  */
#line 332 "perly.y"
                        {
			  (yyval.opval) = (yyvsp[0].opval) ? newSTATEOP(0, NULL, (yyvsp[0].opval)) : NULL;
			}
#line 2667 "bison-perly-lalr.tab.c"
    break;

  case 33: /* fullstmt: labfullstmt  */
#line 336 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); }
#line 2673 "bison-perly-lalr.tab.c"
    break;

  case 34: /* labfullstmt: LABEL barestmt  */
#line 340 "perly.y"
                        {
                          SV *label = cSVOPx_sv((yyvsp[-1].opval));
			  (yyval.opval) = newSTATEOP(SvFLAGS(label) & SVf_UTF8,
                                            savepv(SvPVX_const(label)), (yyvsp[0].opval));
                          op_free((yyvsp[-1].opval));
			}
#line 2684 "bison-perly-lalr.tab.c"
    break;

  case 35: /* labfullstmt: LABEL labfullstmt  */
#line 347 "perly.y"
                        {
                          SV *label = cSVOPx_sv((yyvsp[-1].opval));
			  (yyval.opval) = newSTATEOP(SvFLAGS(label) & SVf_UTF8,
                                            savepv(SvPVX_const(label)), (yyvsp[0].opval));
                          op_free((yyvsp[-1].opval));
			}
#line 2695 "bison-perly-lalr.tab.c"
    break;

  case 36: /* barestmt: PLUGSTMT  */
#line 357 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); }
#line 2701 "bison-perly-lalr.tab.c"
    break;

  case 37: /* barestmt: KW_FORMAT startformsub formname formblock  */
#line 359 "perly.y"
                        {
			  CV *fmtcv = PL_compcv;
			  newFORM((yyvsp[-2].ival), (yyvsp[-1].opval), (yyvsp[0].opval));
			  (yyval.opval) = NULL;
			  if (CvOUTSIDE(fmtcv) && !CvEVAL(CvOUTSIDE(fmtcv))) {
			      pad_add_weakref(fmtcv);
			  }
			  parser->parsed_sub = 1;
			}
#line 2715 "bison-perly-lalr.tab.c"
    break;

  case 38: /* $@10: %empty  */
#line 371 "perly.y"
                        {
                          init_named_cv(PL_compcv, (yyvsp[-1].opval));
			  parser->in_my = 0;
			  parser->in_my_stash = NULL;
			}
#line 2725 "bison-perly-lalr.tab.c"
    break;

  case 39: /* barestmt: KW_SUB_named subname startsub $@10 proto subattrlist optsubbody  */
#line 377 "perly.y"
                        {
			  SvREFCNT_inc_simple_void(PL_compcv);
			  (yyvsp[-5].opval)->op_type == OP_CONST
			      ? newATTRSUB((yyvsp[-4].ival), (yyvsp[-5].opval), (yyvsp[-2].opval), (yyvsp[-1].opval), (yyvsp[0].opval))
			      : newMYSUB((yyvsp[-4].ival), (yyvsp[-5].opval), (yyvsp[-2].opval), (yyvsp[-1].opval), (yyvsp[0].opval))
			  ;
			  (yyval.opval) = NULL;
			  intro_my();
			  parser->parsed_sub = 1;
			}
#line 2740 "bison-perly-lalr.tab.c"
    break;

  case 40: /* $@11: %empty  */
#line 392 "perly.y"
                        {
                          init_named_cv(PL_compcv, (yyvsp[-1].opval));
			  if((yyvsp[-2].ival) == KW_METHOD_named) {
			      croak_kw_unless_class("method");
			      class_prepare_method_parse(PL_compcv);
			  }
			  parser->in_my = 0;
			  parser->in_my_stash = NULL;
			}
#line 2754 "bison-perly-lalr.tab.c"
    break;

  case 41: /* barestmt: sigsub_or_method_named subname startsub $@11 subattrlist optsigsubbody  */
#line 402 "perly.y"
                        {
			  OP *body = (yyvsp[0].opval);

			  SvREFCNT_inc_simple_void(PL_compcv);
			  (yyvsp[-4].opval)->op_type == OP_CONST
			      ? newATTRSUB((yyvsp[-3].ival), (yyvsp[-4].opval), NULL, (yyvsp[-1].opval), body)
			      : newMYSUB(  (yyvsp[-3].ival), (yyvsp[-4].opval), NULL, (yyvsp[-1].opval), body)
			  ;
			  (yyval.opval) = NULL;
			  intro_my();
			  parser->parsed_sub = 1;
			}
#line 2771 "bison-perly-lalr.tab.c"
    break;

  case 42: /* $@12: %empty  */
#line 415 "perly.y"
                        {
			  switch((yyvsp[-1].ival)) {
			      case KEY_ADJUST:
			         croak_kw_unless_class("ADJUST");
			         class_prepare_method_parse(PL_compcv);
			         break;
			      default:
			         NOT_REACHED;
			  }
			}
#line 2786 "bison-perly-lalr.tab.c"
    break;

  case 43: /* barestmt: PHASER startsub $@12 optsubbody  */
#line 426 "perly.y"
                        {
			  OP *body = (yyvsp[0].opval);
			  SvREFCNT_inc_simple_void(PL_compcv);

			  CV *cv;

			  switch((yyvsp[-3].ival)) {
			      case KEY_ADJUST:
			          cv = newATTRSUB((yyvsp[-2].ival), NULL, NULL, NULL, body);
			          class_add_ADJUST(PL_curstash, cv);
			          break;
			  }
			  (yyval.opval) = NULL;
			}
#line 2805 "bison-perly-lalr.tab.c"
    break;

  case 44: /* barestmt: KW_PACKAGE BAREWORD BAREWORD PERLY_SEMICOLON  */
#line 445 "perly.y"
                        {
			  package((yyvsp[-1].opval));
			  if ((yyvsp[-2].opval))
			      package_version((yyvsp[-2].opval));
			  (yyval.opval) = NULL;
			}
#line 2816 "bison-perly-lalr.tab.c"
    break;

  case 45: /* barestmt: KW_CLASS BAREWORD BAREWORD subattrlist PERLY_SEMICOLON  */
#line 452 "perly.y"
                        {
			  package((yyvsp[-2].opval));
			  if ((yyvsp[-3].opval))
			      package_version((yyvsp[-3].opval));
			  (yyval.opval) = NULL;
			  class_setup_stash(PL_curstash);
			  if ((yyvsp[-1].opval)) {
			      class_apply_attributes(PL_curstash, (yyvsp[-1].opval));
			  }
			}
#line 2831 "bison-perly-lalr.tab.c"
    break;

  case 46: /* $@13: %empty  */
#line 463 "perly.y"
                        { CvSPECIAL_on(PL_compcv); /* It's a BEGIN {} */ }
#line 2837 "bison-perly-lalr.tab.c"
    break;

  case 47: /* barestmt: KW_USE_or_NO startsub $@13 BAREWORD BAREWORD optlistexpr PERLY_SEMICOLON  */
#line 467 "perly.y"
                        {
			  SvREFCNT_inc_simple_void(PL_compcv);
			  utilize((yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-3].opval), (yyvsp[-2].opval), (yyvsp[-1].opval));
			  parser->parsed_sub = 1;
			  (yyval.opval) = NULL;
			}
#line 2848 "bison-perly-lalr.tab.c"
    break;

  case 48: /* barestmt: KW_IF PERLY_PAREN_OPEN remember mexpr PERLY_PAREN_CLOSE mblock else  */
#line 474 "perly.y"
                        {
			  (yyval.opval) = block_end((yyvsp[-4].ival),
			      newCONDOP(0, (yyvsp[-3].opval), op_scope((yyvsp[-1].opval)), (yyvsp[0].opval)));
			  parser->copline = (line_t)(yyvsp[-6].ival);
			}
#line 2858 "bison-perly-lalr.tab.c"
    break;

  case 49: /* barestmt: KW_UNLESS PERLY_PAREN_OPEN remember mexpr PERLY_PAREN_CLOSE mblock else  */
#line 480 "perly.y"
                        {
			  (yyval.opval) = block_end((yyvsp[-4].ival),
                              newCONDOP(0, (yyvsp[-3].opval), (yyvsp[0].opval), op_scope((yyvsp[-1].opval))));
			  parser->copline = (line_t)(yyvsp[-6].ival);
			}
#line 2868 "bison-perly-lalr.tab.c"
    break;

  case 50: /* barestmt: KW_GIVEN PERLY_PAREN_OPEN remember mexpr PERLY_PAREN_CLOSE mblock  */
#line 486 "perly.y"
                        {
			  (yyval.opval) = block_end((yyvsp[-3].ival), newGIVENOP((yyvsp[-2].opval), op_scope((yyvsp[0].opval)), 0));
			  parser->copline = (line_t)(yyvsp[-5].ival);
			}
#line 2877 "bison-perly-lalr.tab.c"
    break;

  case 51: /* barestmt: KW_WHEN PERLY_PAREN_OPEN remember mexpr PERLY_PAREN_CLOSE mblock  */
#line 491 "perly.y"
                        { (yyval.opval) = block_end((yyvsp[-3].ival), newWHENOP((yyvsp[-2].opval), op_scope((yyvsp[0].opval)))); }
#line 2883 "bison-perly-lalr.tab.c"
    break;

  case 52: /* barestmt: KW_DEFAULT block  */
#line 493 "perly.y"
                        { (yyval.opval) = newWHENOP(0, op_scope((yyvsp[0].opval))); }
#line 2889 "bison-perly-lalr.tab.c"
    break;

  case 53: /* barestmt: KW_WHILE PERLY_PAREN_OPEN remember texpr PERLY_PAREN_CLOSE mintro mblock cont  */
#line 495 "perly.y"
                        {
			  (yyval.opval) = block_end((yyvsp[-5].ival),
				  newWHILEOP(0, 1, NULL,
				      (yyvsp[-4].opval), (yyvsp[-1].opval), (yyvsp[0].opval), (yyvsp[-2].ival)));
			  parser->copline = (line_t)(yyvsp[-7].ival);
			}
#line 2900 "bison-perly-lalr.tab.c"
    break;

  case 54: /* barestmt: KW_UNTIL PERLY_PAREN_OPEN remember iexpr PERLY_PAREN_CLOSE mintro mblock cont  */
#line 502 "perly.y"
                        {
			  (yyval.opval) = block_end((yyvsp[-5].ival),
				  newWHILEOP(0, 1, NULL,
				      (yyvsp[-4].opval), (yyvsp[-1].opval), (yyvsp[0].opval), (yyvsp[-2].ival)));
			  parser->copline = (line_t)(yyvsp[-7].ival);
			}
#line 2911 "bison-perly-lalr.tab.c"
    break;

  case 55: /* $@14: %empty  */
#line 509 "perly.y"
                        { parser->expect = XTERM; }
#line 2917 "bison-perly-lalr.tab.c"
    break;

  case 56: /* $@15: %empty  */
#line 511 "perly.y"
                        { parser->expect = XTERM; }
#line 2923 "bison-perly-lalr.tab.c"
    break;

  case 57: /* barestmt: KW_FOR PERLY_PAREN_OPEN remember mnexpr PERLY_SEMICOLON $@14 texpr PERLY_SEMICOLON $@15 mintro mnexpr PERLY_PAREN_CLOSE mblock  */
#line 514 "perly.y"
                        {
			  OP *initop = (yyvsp[-9].opval);
			  OP *forop = newWHILEOP(0, 1, NULL,
				      scalar((yyvsp[-6].opval)), (yyvsp[0].opval), (yyvsp[-2].opval), (yyvsp[-3].ival));
			  if (initop) {
			      forop = op_prepend_elem(OP_LINESEQ, initop,
				  op_append_elem(OP_LINESEQ,
				      newOP(OP_UNSTACK, OPf_SPECIAL),
				      forop));
			  }
			  PL_hints |= HINT_BLOCK_SCOPE;
			  (yyval.opval) = block_end((yyvsp[-10].ival), forop);
			  parser->copline = (line_t)(yyvsp[-12].ival);
			}
#line 2942 "bison-perly-lalr.tab.c"
    break;

  case 58: /* barestmt: KW_FOR KW_MY remember my_scalar PERLY_PAREN_OPEN mexpr PERLY_PAREN_CLOSE mblock cont  */
#line 529 "perly.y"
                        {
			  (yyval.opval) = block_end((yyvsp[-6].ival), newFOROP(0, (yyvsp[-5].opval), (yyvsp[-3].opval), (yyvsp[-1].opval), (yyvsp[0].opval)));
			  parser->copline = (line_t)(yyvsp[-8].ival);
			}
#line 2951 "bison-perly-lalr.tab.c"
    break;

  case 59: /* barestmt: KW_FOR KW_MY remember PERLY_PAREN_OPEN my_list_of_scalars PERLY_PAREN_CLOSE PERLY_PAREN_OPEN mexpr PERLY_PAREN_CLOSE mblock cont  */
#line 534 "perly.y"
                        {
                          if ((yyvsp[-6].opval)->op_type == OP_PADSV)
                            /* degenerate case of 1 var: for my ($x) ....
                               Flag it so it can be special-cased in newFOROP */
                                (yyvsp[-6].opval)->op_flags |= OPf_PARENS;
			  (yyval.opval) = block_end((yyvsp[-8].ival), newFOROP(0, (yyvsp[-6].opval), (yyvsp[-3].opval), (yyvsp[-1].opval), (yyvsp[0].opval)));
			  parser->copline = (line_t)(yyvsp[-10].ival);
			}
#line 2964 "bison-perly-lalr.tab.c"
    break;

  case 60: /* barestmt: KW_FOR scalar PERLY_PAREN_OPEN remember mexpr PERLY_PAREN_CLOSE mblock cont  */
#line 543 "perly.y"
                        {
			  (yyval.opval) = block_end((yyvsp[-4].ival), newFOROP(0,
				      op_lvalue((yyvsp[-6].opval), OP_ENTERLOOP), (yyvsp[-3].opval), (yyvsp[-1].opval), (yyvsp[0].opval)));
			  parser->copline = (line_t)(yyvsp[-7].ival);
			}
#line 2974 "bison-perly-lalr.tab.c"
    break;

  case 61: /* @16: %empty  */
#line 549 "perly.y"
                        { parser->in_my = 0; (yyval.opval) = my((yyvsp[0].opval)); }
#line 2980 "bison-perly-lalr.tab.c"
    break;

  case 62: /* barestmt: KW_FOR my_refgen remember my_var @16 PERLY_PAREN_OPEN mexpr PERLY_PAREN_CLOSE mblock cont  */
#line 551 "perly.y"
                        {
			  (yyval.opval) = block_end(
				(yyvsp[-7].ival),
				newFOROP(0,
					 op_lvalue(
					    newUNOP(OP_REFGEN, 0,
						    (yyvsp[-5].opval)),
					    OP_ENTERLOOP),
					 (yyvsp[-3].opval), (yyvsp[-1].opval), (yyvsp[0].opval))
			  );
			  parser->copline = (line_t)(yyvsp[-9].ival);
			}
#line 2997 "bison-perly-lalr.tab.c"
    break;

  case 63: /* barestmt: KW_FOR REFGEN refgen_topic PERLY_PAREN_OPEN remember mexpr PERLY_PAREN_CLOSE mblock cont  */
#line 564 "perly.y"
                        {
			  (yyval.opval) = block_end((yyvsp[-4].ival), newFOROP(
				0, op_lvalue(newUNOP(OP_REFGEN, 0,
						     (yyvsp[-6].opval)),
					     OP_ENTERLOOP), (yyvsp[-3].opval), (yyvsp[-1].opval), (yyvsp[0].opval)));
			  parser->copline = (line_t)(yyvsp[-8].ival);
			}
#line 3009 "bison-perly-lalr.tab.c"
    break;

  case 64: /* barestmt: KW_FOR PERLY_PAREN_OPEN remember mexpr PERLY_PAREN_CLOSE mblock cont  */
#line 572 "perly.y"
                        {
			  (yyval.opval) = block_end((yyvsp[-4].ival),
				  newFOROP(0, NULL, (yyvsp[-3].opval), (yyvsp[-1].opval), (yyvsp[0].opval)));
			  parser->copline = (line_t)(yyvsp[-6].ival);
			}
#line 3019 "bison-perly-lalr.tab.c"
    break;

  case 65: /* $@17: %empty  */
#line 578 "perly.y"
                        {
			  if(!(yyvsp[0].opval)) {
			      yyerror("catch block requires a (VAR)");
			      YYERROR;
			  }
			}
#line 3030 "bison-perly-lalr.tab.c"
    break;

  case 66: /* barestmt: KW_TRY mblock KW_CATCH remember catch_paren $@17 mblock finally  */
#line 585 "perly.y"
                        {
			  (yyval.opval) = newTRYCATCHOP(0,
				  (yyvsp[-6].opval), (yyvsp[-3].opval), block_end((yyvsp[-4].ival), op_scope((yyvsp[-1].opval))));
			  if((yyvsp[0].opval))
			      (yyval.opval) = op_wrap_finally((yyval.opval), (yyvsp[0].opval));
			  parser->copline = (line_t)(yyvsp[-7].ival);
			}
#line 3042 "bison-perly-lalr.tab.c"
    break;

  case 67: /* barestmt: block cont  */
#line 593 "perly.y"
                        {
			  /* a block is a loop that happens once */
			  (yyval.opval) = newWHILEOP(0, 1, NULL,
				  NULL, (yyvsp[-1].opval), (yyvsp[0].opval), 0);
			}
#line 3052 "bison-perly-lalr.tab.c"
    break;

  case 68: /* $@18: %empty  */
#line 599 "perly.y"
                        {
			  package((yyvsp[-2].opval));
			  if ((yyvsp[-3].opval)) {
			      package_version((yyvsp[-3].opval));
			  }
			}
#line 3063 "bison-perly-lalr.tab.c"
    break;

  case 69: /* barestmt: KW_PACKAGE BAREWORD BAREWORD PERLY_BRACE_OPEN remember $@18 stmtseq PERLY_BRACE_CLOSE  */
#line 606 "perly.y"
                        {
			  /* a block is a loop that happens once */
			  (yyval.opval) = newWHILEOP(0, 1, NULL,
				  NULL, block_end((yyvsp[-3].ival), (yyvsp[-1].opval)), NULL, 0);
			  if (parser->copline > (line_t)(yyvsp[-4].ival))
			      parser->copline = (line_t)(yyvsp[-4].ival);
			}
#line 3075 "bison-perly-lalr.tab.c"
    break;

  case 70: /* $@19: %empty  */
#line 614 "perly.y"
                        {
			  package((yyvsp[-3].opval));

			  if ((yyvsp[-4].opval)) {
			      package_version((yyvsp[-4].opval));
			  }
			  class_setup_stash(PL_curstash);
			  if ((yyvsp[-2].opval)) {
			      class_apply_attributes(PL_curstash, (yyvsp[-2].opval));
			  }
			}
#line 3091 "bison-perly-lalr.tab.c"
    break;

  case 71: /* barestmt: KW_CLASS BAREWORD BAREWORD subattrlist PERLY_BRACE_OPEN remember $@19 stmtseq PERLY_BRACE_CLOSE  */
#line 626 "perly.y"
                        {
			  /* a block is a loop that happens once */
			  (yyval.opval) = newWHILEOP(0, 1, NULL,
				  NULL, block_end((yyvsp[-3].ival), (yyvsp[-1].opval)), NULL, 0);
			  if (parser->copline > (line_t)(yyvsp[-4].ival))
			      parser->copline = (line_t)(yyvsp[-4].ival);
			}
#line 3103 "bison-perly-lalr.tab.c"
    break;

  case 72: /* barestmt: fielddecl PERLY_SEMICOLON  */
#line 634 "perly.y"
                        {
			  (yyval.opval) = (yyvsp[-1].opval);
			}
#line 3111 "bison-perly-lalr.tab.c"
    break;

  case 73: /* barestmt: sideff PERLY_SEMICOLON  */
#line 638 "perly.y"
                        {
			  (yyval.opval) = (yyvsp[-1].opval);
			}
#line 3119 "bison-perly-lalr.tab.c"
    break;

  case 74: /* barestmt: KW_DEFER mblock  */
#line 642 "perly.y"
                        {
			  (yyval.opval) = newDEFEROP(0, op_scope((yyvsp[0].opval)));
			}
#line 3127 "bison-perly-lalr.tab.c"
    break;

  case 75: /* barestmt: YADAYADA PERLY_SEMICOLON  */
#line 646 "perly.y"
                        {
                          /* diag_listed_as: Unimplemented */
			  (yyval.opval) = newLISTOP(OP_DIE, 0, newOP(OP_PUSHMARK, 0),
				newSVOP(OP_CONST, 0, newSVpvs("Unimplemented")));
			}
#line 3137 "bison-perly-lalr.tab.c"
    break;

  case 76: /* barestmt: PERLY_SEMICOLON  */
#line 652 "perly.y"
                        {
			  (yyval.opval) = NULL;
			  parser->copline = NOLINE;
			}
#line 3146 "bison-perly-lalr.tab.c"
    break;

  case 77: /* formline: THING formarg  */
#line 660 "perly.y"
                        { OP *list;
			  if ((yyvsp[0].opval)) {
			      OP *term = (yyvsp[0].opval);
			      list = op_append_elem(OP_LIST, (yyvsp[-1].opval), term);
			  }
			  else {
			      list = (yyvsp[-1].opval);
			  }
			  if (parser->copline == NOLINE)
			       parser->copline = CopLINE(PL_curcop)-1;
			  else parser->copline--;
			  (yyval.opval) = newSTATEOP(0, NULL,
					  op_convert_list(OP_FORMLINE, 0, list));
			}
#line 3165 "bison-perly-lalr.tab.c"
    break;

  case 79: /* formarg: FORMLBRACK stmtseq FORMRBRACK  */
#line 679 "perly.y"
                        { (yyval.opval) = op_unscope((yyvsp[-1].opval)); }
#line 3171 "bison-perly-lalr.tab.c"
    break;

  case 81: /* sideff: error  */
#line 687 "perly.y"
                        { (yyval.opval) = NULL; }
#line 3177 "bison-perly-lalr.tab.c"
    break;

  case 82: /* sideff: expr  */
#line 689 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); }
#line 3183 "bison-perly-lalr.tab.c"
    break;

  case 83: /* sideff: expr KW_IF condition  */
#line 691 "perly.y"
                        { (yyval.opval) = newLOGOP(OP_AND, 0, (yyvsp[0].opval), (yyvsp[-2].opval)); }
#line 3189 "bison-perly-lalr.tab.c"
    break;

  case 84: /* sideff: expr KW_UNLESS condition  */
#line 693 "perly.y"
                        { (yyval.opval) = newLOGOP(OP_OR, 0, (yyvsp[0].opval), (yyvsp[-2].opval)); }
#line 3195 "bison-perly-lalr.tab.c"
    break;

  case 85: /* sideff: expr KW_WHILE condition  */
#line 695 "perly.y"
                        { (yyval.opval) = newLOOPOP(OPf_PARENS, 1, scalar((yyvsp[0].opval)), (yyvsp[-2].opval)); }
#line 3201 "bison-perly-lalr.tab.c"
    break;

  case 86: /* sideff: expr KW_UNTIL iexpr  */
#line 697 "perly.y"
                        { (yyval.opval) = newLOOPOP(OPf_PARENS, 1, (yyvsp[0].opval), (yyvsp[-2].opval)); }
#line 3207 "bison-perly-lalr.tab.c"
    break;

  case 87: /* sideff: expr KW_FOR condition  */
#line 699 "perly.y"
                        { (yyval.opval) = newFOROP(0, NULL, (yyvsp[0].opval), (yyvsp[-2].opval), NULL);
			  parser->copline = (line_t)(yyvsp[-1].ival); }
#line 3214 "bison-perly-lalr.tab.c"
    break;

  case 88: /* sideff: expr KW_WHEN condition  */
#line 702 "perly.y"
                        { (yyval.opval) = newWHENOP((yyvsp[0].opval), op_scope((yyvsp[-2].opval))); }
#line 3220 "bison-perly-lalr.tab.c"
    break;

  case 90: /* else: KW_ELSE mblock  */
#line 709 "perly.y"
                        {
			  ((yyvsp[0].opval))->op_flags |= OPf_PARENS;
			  (yyval.opval) = op_scope((yyvsp[0].opval));
			}
#line 3229 "bison-perly-lalr.tab.c"
    break;

  case 91: /* else: KW_ELSIF PERLY_PAREN_OPEN mexpr PERLY_PAREN_CLOSE mblock else  */
#line 714 "perly.y"
                        { parser->copline = (line_t)(yyvsp[-5].ival);
			    (yyval.opval) = newCONDOP(0,
				newSTATEOP(OPf_SPECIAL,NULL,(yyvsp[-3].opval)),
				op_scope((yyvsp[-1].opval)), (yyvsp[0].opval));
			  PL_hints |= HINT_BLOCK_SCOPE;
			}
#line 3240 "bison-perly-lalr.tab.c"
    break;

  case 93: /* cont: KW_CONTINUE block  */
#line 726 "perly.y"
                        { (yyval.opval) = op_scope((yyvsp[0].opval)); }
#line 3246 "bison-perly-lalr.tab.c"
    break;

  case 94: /* finally: %empty  */
#line 731 "perly.y"
                        { (yyval.opval) = NULL; }
#line 3252 "bison-perly-lalr.tab.c"
    break;

  case 95: /* finally: KW_FINALLY block  */
#line 733 "perly.y"
                        { (yyval.opval) = op_scope((yyvsp[0].opval)); }
#line 3258 "bison-perly-lalr.tab.c"
    break;

  case 96: /* mintro: %empty  */
#line 738 "perly.y"
                        { (yyval.ival) = (PL_min_intro_pending &&
			    PL_max_intro_pending >=  PL_min_intro_pending);
			  intro_my(); }
#line 3266 "bison-perly-lalr.tab.c"
    break;

  case 99: /* texpr: %empty  */
#line 750 "perly.y"
                        { PERL_PARSER_STYPE tmplval;
			  (void)scan_num("1", &tmplval);
			  (yyval.opval) = tmplval.opval; }
#line 3274 "bison-perly-lalr.tab.c"
    break;

  case 101: /* iexpr: expr  */
#line 758 "perly.y"
                        { (yyval.opval) = invert(scalar((yyvsp[0].opval))); }
#line 3280 "bison-perly-lalr.tab.c"
    break;

  case 102: /* mexpr: expr  */
#line 763 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); intro_my(); }
#line 3286 "bison-perly-lalr.tab.c"
    break;

  case 103: /* mnexpr: nexpr  */
#line 767 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); intro_my(); }
#line 3292 "bison-perly-lalr.tab.c"
    break;

  case 104: /* formname: BAREWORD  */
#line 770 "perly.y"
                                { (yyval.opval) = (yyvsp[0].opval); }
#line 3298 "bison-perly-lalr.tab.c"
    break;

  case 106: /* startsub: %empty  */
#line 775 "perly.y"
                        { (yyval.ival) = start_subparse(FALSE, 0);
			    SAVEFREESV(PL_compcv); }
#line 3305 "bison-perly-lalr.tab.c"
    break;

  case 107: /* startanonsub: %empty  */
#line 781 "perly.y"
                        { (yyval.ival) = start_subparse(FALSE, CVf_ANON);
			    SAVEFREESV(PL_compcv); }
#line 3312 "bison-perly-lalr.tab.c"
    break;

  case 108: /* startanonmethod: %empty  */
#line 786 "perly.y"
                        { (yyval.ival) = start_subparse(FALSE, CVf_ANON|CVf_IsMETHOD);
			    SAVEFREESV(PL_compcv); }
#line 3319 "bison-perly-lalr.tab.c"
    break;

  case 109: /* startformsub: %empty  */
#line 791 "perly.y"
                        { (yyval.ival) = start_subparse(TRUE, 0);
			    SAVEFREESV(PL_compcv); }
#line 3326 "bison-perly-lalr.tab.c"
    break;

  case 115: /* subattrlist: COLONATTR THING  */
#line 810 "perly.y"
                        {
			  OP *attrlist = (yyvsp[0].opval);
			  if(attrlist && !PL_parser->sig_seen)
			      attrlist = apply_builtin_cv_attributes(PL_compcv, attrlist);
			  (yyval.opval) = attrlist;
			}
#line 3337 "bison-perly-lalr.tab.c"
    break;

  case 116: /* subattrlist: COLONATTR  */
#line 817 "perly.y"
                        { (yyval.opval) = NULL; }
#line 3343 "bison-perly-lalr.tab.c"
    break;

  case 117: /* myattrlist: COLONATTR THING  */
#line 822 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); }
#line 3349 "bison-perly-lalr.tab.c"
    break;

  case 118: /* myattrlist: COLONATTR  */
#line 824 "perly.y"
                        { (yyval.opval) = NULL; }
#line 3355 "bison-perly-lalr.tab.c"
    break;

  case 119: /* sigvarname: %empty  */
#line 835 "perly.y"
                        { parser->in_my = 0; (yyval.opval) = NULL; }
#line 3361 "bison-perly-lalr.tab.c"
    break;

  case 120: /* sigvarname: PRIVATEREF  */
#line 837 "perly.y"
                        { parser->in_my = 0; (yyval.opval) = (yyvsp[0].opval); }
#line 3367 "bison-perly-lalr.tab.c"
    break;

  case 121: /* sigslurpsigil: PERLY_SNAIL  */
#line 842 "perly.y"
                        { (yyval.ival) = '@'; }
#line 3373 "bison-perly-lalr.tab.c"
    break;

  case 122: /* sigslurpsigil: PERLY_PERCENT_SIGN  */
#line 844 "perly.y"
                        { (yyval.ival) = '%'; }
#line 3379 "bison-perly-lalr.tab.c"
    break;

  case 123: /* sigslurpelem: sigslurpsigil sigvarname  */
#line 848 "perly.y"
                        {
                            subsignature_append_slurpy((yyvsp[-1].ival), (yyvsp[0].opval));
                            (yyval.opval) = NULL;
                        }
#line 3388 "bison-perly-lalr.tab.c"
    break;

  case 124: /* sigslurpelem: sigslurpsigil sigvarname ASSIGNOP  */
#line 853 "perly.y"
                        {
			    yyerror("A slurpy parameter may not have a default value");
                        }
#line 3396 "bison-perly-lalr.tab.c"
    break;

  case 125: /* sigslurpelem: sigslurpsigil sigvarname ASSIGNOP term  */
#line 857 "perly.y"
                        {
			    yyerror("A slurpy parameter may not have a default value");
                        }
#line 3404 "bison-perly-lalr.tab.c"
    break;

  case 126: /* sigscalarelem: PERLY_DOLLAR sigvarname  */
#line 865 "perly.y"
                        {
                            subsignature_append_positional((yyvsp[0].opval), 0, NULL);
                            (yyval.opval) = NULL;
                        }
#line 3413 "bison-perly-lalr.tab.c"
    break;

  case 127: /* sigscalarelem: PERLY_DOLLAR sigvarname ASSIGNOP  */
#line 870 "perly.y"
                        {
                            subsignature_append_positional((yyvsp[-1].opval), (yyvsp[0].ival), newOP(OP_NULL, 0));
                            (yyval.opval) = NULL;
                        }
#line 3422 "bison-perly-lalr.tab.c"
    break;

  case 128: /* sigscalarelem: PERLY_DOLLAR sigvarname ASSIGNOP term  */
#line 875 "perly.y"
                        {
                            subsignature_append_positional((yyvsp[-2].opval), (yyvsp[-1].ival), (yyvsp[0].opval));
                            (yyval.opval) = NULL;
                        }
#line 3431 "bison-perly-lalr.tab.c"
    break;

  case 129: /* sigelem: sigscalarelem  */
#line 884 "perly.y"
                        { parser->in_my = KEY_sigvar; (yyval.opval) = (yyvsp[0].opval); }
#line 3437 "bison-perly-lalr.tab.c"
    break;

  case 130: /* sigelem: sigslurpelem  */
#line 886 "perly.y"
                        { parser->in_my = KEY_sigvar; (yyval.opval) = (yyvsp[0].opval); }
#line 3443 "bison-perly-lalr.tab.c"
    break;

  case 138: /* subsignature: PERLY_PAREN_OPEN subsigguts PERLY_PAREN_CLOSE  */
#line 912 "perly.y"
                        { (yyval.opval) = (yyvsp[-1].opval); }
#line 3449 "bison-perly-lalr.tab.c"
    break;

  case 139: /* $@20: %empty  */
#line 915 "perly.y"
                        {
                            ENTER;
                            subsignature_start();
                            parser->in_my = KEY_sigvar;
                        }
#line 3459 "bison-perly-lalr.tab.c"
    break;

  case 140: /* subsigguts: $@20 optsiglist  */
#line 921 "perly.y"
                        {
			    if (!FEATURE_SIGNATURES_IS_ENABLED && !CvIsMETHOD(PL_compcv))
			        croak("Experimental "
                                    "subroutine signatures not enabled");

                            /* We shouldn't get here otherwise */
                            (yyval.opval) = subsignature_finish();

			    CvSIGNATURE_on(PL_compcv);

                            parser->in_my = 0;
                            /* tell the toker that attrributes can follow
                             * this sig, but only so that the toker
                             * can skip through any (illegal) trailing
                             * attribute text then give a useful error
                             * message about "attributes before sig",
                             * rather than falling over ina mess at
                             * unrecognised syntax.
                             */
                            parser->expect = XATTRBLOCK;
                            parser->sig_seen = TRUE;
                            LEAVE;
			}
#line 3487 "bison-perly-lalr.tab.c"
    break;

  case 142: /* optsubbody: PERLY_SEMICOLON  */
#line 949 "perly.y"
                                { (yyval.opval) = NULL; }
#line 3493 "bison-perly-lalr.tab.c"
    break;

  case 143: /* subbody: remember PERLY_BRACE_OPEN stmtseq PERLY_BRACE_CLOSE  */
#line 955 "perly.y"
                        {
			  if (parser->copline > (line_t)(yyvsp[-2].ival))
			      parser->copline = (line_t)(yyvsp[-2].ival);
			  (yyval.opval) = block_end((yyvsp[-3].ival), (yyvsp[-1].opval));
			}
#line 3503 "bison-perly-lalr.tab.c"
    break;

  case 145: /* optsigsubbody: PERLY_SEMICOLON  */
#line 967 "perly.y"
                                   { (yyval.opval) = NULL; }
#line 3509 "bison-perly-lalr.tab.c"
    break;

  case 146: /* $@21: %empty  */
#line 972 "perly.y"
                        { PL_parser->sig_seen = FALSE; }
#line 3515 "bison-perly-lalr.tab.c"
    break;

  case 147: /* sigsubbody: remember optsubsignature PERLY_BRACE_OPEN $@21 stmtseq PERLY_BRACE_CLOSE  */
#line 974 "perly.y"
                        {
			  if (parser->copline > (line_t)(yyvsp[-3].ival))
			      parser->copline = (line_t)(yyvsp[-3].ival);
			  (yyval.opval) = block_end((yyvsp[-5].ival),
				op_append_list(OP_LINESEQ, (yyvsp[-4].opval), (yyvsp[-1].opval)));
 			}
#line 3526 "bison-perly-lalr.tab.c"
    break;

  case 148: /* expr: expr ANDOP expr  */
#line 985 "perly.y"
                        { (yyval.opval) = newLOGOP(OP_AND, 0, (yyvsp[-2].opval), (yyvsp[0].opval)); }
#line 3532 "bison-perly-lalr.tab.c"
    break;

  case 149: /* expr: expr PLUGIN_LOGICAL_AND_LOW_OP expr  */
#line 987 "perly.y"
                        { (yyval.opval) = build_infix_plugin((yyvsp[-2].opval), (yyvsp[0].opval), (yyvsp[-1].pval)); }
#line 3538 "bison-perly-lalr.tab.c"
    break;

  case 150: /* expr: expr OROP expr  */
#line 989 "perly.y"
                        { (yyval.opval) = newLOGOP((yyvsp[-1].ival), 0, (yyvsp[-2].opval), (yyvsp[0].opval)); }
#line 3544 "bison-perly-lalr.tab.c"
    break;

  case 151: /* expr: expr PLUGIN_LOGICAL_OR_LOW_OP expr  */
#line 991 "perly.y"
                        { (yyval.opval) = build_infix_plugin((yyvsp[-2].opval), (yyvsp[0].opval), (yyvsp[-1].pval)); }
#line 3550 "bison-perly-lalr.tab.c"
    break;

  case 153: /* listexpr: listexpr PERLY_COMMA  */
#line 997 "perly.y"
                        { (yyval.opval) = (yyvsp[-1].opval); }
#line 3556 "bison-perly-lalr.tab.c"
    break;

  case 154: /* listexpr: listexpr PERLY_COMMA term  */
#line 999 "perly.y"
                        {
			  OP* term = (yyvsp[0].opval);
			  (yyval.opval) = op_append_elem(OP_LIST, (yyvsp[-2].opval), term);
			}
#line 3565 "bison-perly-lalr.tab.c"
    break;

  case 156: /* listop: LSTOP indirob listexpr  */
#line 1008 "perly.y"
                        { (yyval.opval) = op_convert_list((yyvsp[-2].ival), OPf_STACKED,
				op_prepend_elem(OP_LIST, newGVREF((yyvsp[-2].ival),(yyvsp[-1].opval)), (yyvsp[0].opval)) );
			}
#line 3573 "bison-perly-lalr.tab.c"
    break;

  case 157: /* listop: BLKLSTOP block listexpr  */
#line 1012 "perly.y"
                        { (yyval.opval) = op_convert_list((yyvsp[-2].ival), OPf_STACKED,
                                op_prepend_elem(OP_LIST, newUNOP(OP_NULL, 0, op_scope((yyvsp[-1].opval))), (yyvsp[0].opval)) );
                        }
#line 3581 "bison-perly-lalr.tab.c"
    break;

  case 158: /* listop: FUNC PERLY_PAREN_OPEN indirob expr PERLY_PAREN_CLOSE  */
#line 1016 "perly.y"
                        { (yyval.opval) = op_convert_list((yyvsp[-4].ival), OPf_STACKED,
				op_prepend_elem(OP_LIST, newGVREF((yyvsp[-4].ival),(yyvsp[-2].opval)), (yyvsp[-1].opval)) );
			}
#line 3589 "bison-perly-lalr.tab.c"
    break;

  case 159: /* listop: term ARROW methodname PERLY_PAREN_OPEN optexpr PERLY_PAREN_CLOSE  */
#line 1020 "perly.y"
                        { (yyval.opval) = op_convert_list(OP_ENTERSUB, OPf_STACKED,
				op_append_elem(OP_LIST,
				    op_prepend_elem(OP_LIST, scalar((yyvsp[-5].opval)), (yyvsp[-1].opval)),
				    newMETHOP(OP_METHOD, 0, (yyvsp[-3].opval))));
			}
#line 3599 "bison-perly-lalr.tab.c"
    break;

  case 160: /* listop: term ARROW methodname  */
#line 1026 "perly.y"
                        { (yyval.opval) = op_convert_list(OP_ENTERSUB, OPf_STACKED,
				op_append_elem(OP_LIST, scalar((yyvsp[-2].opval)),
				    newMETHOP(OP_METHOD, 0, (yyvsp[0].opval))));
			}
#line 3608 "bison-perly-lalr.tab.c"
    break;

  case 161: /* listop: term ARROW PERLY_AMPERSAND subname PERLY_PAREN_OPEN optexpr PERLY_PAREN_CLOSE  */
#line 1031 "perly.y"
                        { (yyval.opval) = op_convert_list(OP_ENTERSUB, OPf_STACKED,
				op_append_elem(OP_LIST,
				    op_prepend_elem(OP_LIST, scalar((yyvsp[-6].opval)), (yyvsp[-1].opval)),
				    newCVREF(0, (yyvsp[-3].opval))));
			}
#line 3618 "bison-perly-lalr.tab.c"
    break;

  case 162: /* listop: term ARROW PERLY_AMPERSAND subname  */
#line 1037 "perly.y"
                        { (yyval.opval) = op_convert_list(OP_ENTERSUB, OPf_STACKED,
				op_append_elem(OP_LIST,
				    scalar((yyvsp[-3].opval)),
				    newCVREF(0, (yyvsp[0].opval))));
			}
#line 3628 "bison-perly-lalr.tab.c"
    break;

  case 163: /* listop: METHCALL0 indirob optlistexpr  */
#line 1043 "perly.y"
                        { (yyval.opval) = op_convert_list(OP_ENTERSUB, OPf_STACKED,
				op_append_elem(OP_LIST,
				    op_prepend_elem(OP_LIST, (yyvsp[-1].opval), (yyvsp[0].opval)),
				    newMETHOP(OP_METHOD, 0, (yyvsp[-2].opval))));
			}
#line 3638 "bison-perly-lalr.tab.c"
    break;

  case 164: /* listop: METHCALL indirob PERLY_PAREN_OPEN optexpr PERLY_PAREN_CLOSE  */
#line 1049 "perly.y"
                        { (yyval.opval) = op_convert_list(OP_ENTERSUB, OPf_STACKED,
				op_append_elem(OP_LIST,
				    op_prepend_elem(OP_LIST, (yyvsp[-3].opval), (yyvsp[-1].opval)),
				    newMETHOP(OP_METHOD, 0, (yyvsp[-4].opval))));
			}
#line 3648 "bison-perly-lalr.tab.c"
    break;

  case 165: /* listop: LSTOP optlistexpr  */
#line 1055 "perly.y"
                        { (yyval.opval) = op_convert_list((yyvsp[-1].ival), 0, (yyvsp[0].opval)); }
#line 3654 "bison-perly-lalr.tab.c"
    break;

  case 166: /* listop: FUNC PERLY_PAREN_OPEN optexpr PERLY_PAREN_CLOSE  */
#line 1057 "perly.y"
                        { (yyval.opval) = op_convert_list((yyvsp[-3].ival), 0, (yyvsp[-1].opval)); }
#line 3660 "bison-perly-lalr.tab.c"
    break;

  case 167: /* listop: FUNC SUBLEXSTART optexpr SUBLEXEND  */
#line 1059 "perly.y"
                        { (yyval.opval) = op_convert_list((yyvsp[-3].ival), 0, (yyvsp[-1].opval)); }
#line 3666 "bison-perly-lalr.tab.c"
    break;

  case 168: /* @22: %empty  */
#line 1061 "perly.y"
                        { SvREFCNT_inc_simple_void(PL_compcv);
                          (yyval.opval) = newANONATTRSUB((yyvsp[-1].ival), 0, NULL, (yyvsp[0].opval));
                          /* prevent double op_free() if the following fails to parse */
                          (yyvsp[0].opval) = NULL;
                        }
#line 3676 "bison-perly-lalr.tab.c"
    break;

  case 169: /* listop: LSTOPSUB startanonsub block @22 optlistexpr  */
#line 1067 "perly.y"
                        { (yyval.opval) = newUNOP(OP_ENTERSUB, OPf_STACKED,
				 op_append_elem(OP_LIST,
				   op_prepend_elem(OP_LIST, (yyvsp[-1].opval), (yyvsp[0].opval)), (yyvsp[-4].opval)));
			}
#line 3685 "bison-perly-lalr.tab.c"
    break;

  case 172: /* subscripted: gelem PERLY_BRACE_OPEN expr PERLY_SEMICOLON PERLY_BRACE_CLOSE  */
#line 1082 "perly.y"
                        { (yyval.opval) = newBINOP(OP_GELEM, 0, (yyvsp[-4].opval), scalar((yyvsp[-2].opval))); }
#line 3691 "bison-perly-lalr.tab.c"
    break;

  case 173: /* subscripted: scalar PERLY_BRACKET_OPEN expr PERLY_BRACKET_CLOSE  */
#line 1084 "perly.y"
                        { (yyval.opval) = newBINOP(OP_AELEM, 0, oopsAV((yyvsp[-3].opval)), scalar((yyvsp[-1].opval)));
			}
#line 3698 "bison-perly-lalr.tab.c"
    break;

  case 174: /* subscripted: term ARROW PERLY_BRACKET_OPEN expr PERLY_BRACKET_CLOSE  */
#line 1087 "perly.y"
                        { (yyval.opval) = newBINOP(OP_AELEM, 0,
					ref(newAVREF((yyvsp[-4].opval)),OP_RV2AV),
					scalar((yyvsp[-1].opval)));
			}
#line 3707 "bison-perly-lalr.tab.c"
    break;

  case 175: /* subscripted: subscripted PERLY_BRACKET_OPEN expr PERLY_BRACKET_CLOSE  */
#line 1092 "perly.y"
                        { (yyval.opval) = newBINOP(OP_AELEM, 0,
					ref(newAVREF((yyvsp[-3].opval)),OP_RV2AV),
					scalar((yyvsp[-1].opval)));
			}
#line 3716 "bison-perly-lalr.tab.c"
    break;

  case 176: /* subscripted: scalar PERLY_BRACE_OPEN expr PERLY_SEMICOLON PERLY_BRACE_CLOSE  */
#line 1097 "perly.y"
                        { (yyval.opval) = newBINOP(OP_HELEM, 0, oopsHV((yyvsp[-4].opval)), jmaybe((yyvsp[-2].opval)));
			}
#line 3723 "bison-perly-lalr.tab.c"
    break;

  case 177: /* subscripted: term ARROW PERLY_BRACE_OPEN expr PERLY_SEMICOLON PERLY_BRACE_CLOSE  */
#line 1100 "perly.y"
                        { (yyval.opval) = newBINOP(OP_HELEM, 0,
					ref(newHVREF((yyvsp[-5].opval)),OP_RV2HV),
					jmaybe((yyvsp[-2].opval))); }
#line 3731 "bison-perly-lalr.tab.c"
    break;

  case 178: /* subscripted: subscripted PERLY_BRACE_OPEN expr PERLY_SEMICOLON PERLY_BRACE_CLOSE  */
#line 1104 "perly.y"
                        { (yyval.opval) = newBINOP(OP_HELEM, 0,
					ref(newHVREF((yyvsp[-4].opval)),OP_RV2HV),
					jmaybe((yyvsp[-2].opval))); }
#line 3739 "bison-perly-lalr.tab.c"
    break;

  case 179: /* subscripted: term ARROW PERLY_PAREN_OPEN PERLY_PAREN_CLOSE  */
#line 1108 "perly.y"
                        { (yyval.opval) = newUNOP(OP_ENTERSUB, OPf_STACKED,
				   newCVREF(0, scalar((yyvsp[-3].opval))));
			  if (parser->expect == XBLOCK)
			      parser->expect = XOPERATOR;
			}
#line 3749 "bison-perly-lalr.tab.c"
    break;

  case 180: /* subscripted: term ARROW PERLY_PAREN_OPEN expr PERLY_PAREN_CLOSE  */
#line 1114 "perly.y"
                        { (yyval.opval) = newUNOP(OP_ENTERSUB, OPf_STACKED,
				   op_append_elem(OP_LIST, (yyvsp[-1].opval),
				       newCVREF(0, scalar((yyvsp[-4].opval)))));
			  if (parser->expect == XBLOCK)
			      parser->expect = XOPERATOR;
			}
#line 3760 "bison-perly-lalr.tab.c"
    break;

  case 181: /* subscripted: subscripted PERLY_PAREN_OPEN expr PERLY_PAREN_CLOSE  */
#line 1122 "perly.y"
                        { (yyval.opval) = newUNOP(OP_ENTERSUB, OPf_STACKED,
				   op_append_elem(OP_LIST, (yyvsp[-1].opval),
					       newCVREF(0, scalar((yyvsp[-3].opval)))));
			  if (parser->expect == XBLOCK)
			      parser->expect = XOPERATOR;
			}
#line 3771 "bison-perly-lalr.tab.c"
    break;

  case 182: /* subscripted: subscripted PERLY_PAREN_OPEN PERLY_PAREN_CLOSE  */
#line 1129 "perly.y"
                        { (yyval.opval) = newUNOP(OP_ENTERSUB, OPf_STACKED,
				   newCVREF(0, scalar((yyvsp[-2].opval))));
			  if (parser->expect == XBLOCK)
			      parser->expect = XOPERATOR;
			}
#line 3781 "bison-perly-lalr.tab.c"
    break;

  case 183: /* subscripted: PERLY_PAREN_OPEN expr PERLY_PAREN_CLOSE PERLY_BRACKET_OPEN expr PERLY_BRACKET_CLOSE  */
#line 1135 "perly.y"
                        { (yyval.opval) = newSLICEOP(0, (yyvsp[-1].opval), (yyvsp[-4].opval)); }
#line 3787 "bison-perly-lalr.tab.c"
    break;

  case 184: /* subscripted: QWLIST PERLY_BRACKET_OPEN expr PERLY_BRACKET_CLOSE  */
#line 1137 "perly.y"
                        { (yyval.opval) = newSLICEOP(0, (yyvsp[-1].opval), (yyvsp[-3].opval)); }
#line 3793 "bison-perly-lalr.tab.c"
    break;

  case 185: /* subscripted: PERLY_PAREN_OPEN PERLY_PAREN_CLOSE PERLY_BRACKET_OPEN expr PERLY_BRACKET_CLOSE  */
#line 1139 "perly.y"
                        { (yyval.opval) = newSLICEOP(0, (yyvsp[-1].opval), NULL); }
#line 3799 "bison-perly-lalr.tab.c"
    break;

  case 186: /* termbinop: term PLUGIN_HIGH_OP term  */
#line 1144 "perly.y"
                        { (yyval.opval) = build_infix_plugin((yyvsp[-2].opval), (yyvsp[0].opval), (yyvsp[-1].pval)); }
#line 3805 "bison-perly-lalr.tab.c"
    break;

  case 187: /* termbinop: term ASSIGNOP term  */
#line 1146 "perly.y"
                        { (yyval.opval) = newASSIGNOP(OPf_STACKED, (yyvsp[-2].opval), (yyvsp[-1].ival), (yyvsp[0].opval)); }
#line 3811 "bison-perly-lalr.tab.c"
    break;

  case 188: /* termbinop: term PLUGIN_ASSIGN_OP term  */
#line 1148 "perly.y"
                        { (yyval.opval) = build_infix_plugin((yyvsp[-2].opval), (yyvsp[0].opval), (yyvsp[-1].pval)); }
#line 3817 "bison-perly-lalr.tab.c"
    break;

  case 189: /* termbinop: term POWOP term  */
#line 1150 "perly.y"
                        { (yyval.opval) = newBINOP((yyvsp[-1].ival), 0, scalar((yyvsp[-2].opval)), scalar((yyvsp[0].opval))); }
#line 3823 "bison-perly-lalr.tab.c"
    break;

  case 190: /* termbinop: term PLUGIN_POW_OP term  */
#line 1152 "perly.y"
                        { (yyval.opval) = build_infix_plugin((yyvsp[-2].opval), (yyvsp[0].opval), (yyvsp[-1].pval)); }
#line 3829 "bison-perly-lalr.tab.c"
    break;

  case 191: /* termbinop: term MULOP term  */
#line 1154 "perly.y"
                        {   if ((yyvsp[-1].ival) != OP_REPEAT)
				scalar((yyvsp[-2].opval));
			    (yyval.opval) = newBINOP((yyvsp[-1].ival), 0, (yyvsp[-2].opval), scalar((yyvsp[0].opval)));
			}
#line 3838 "bison-perly-lalr.tab.c"
    break;

  case 192: /* termbinop: term PLUGIN_MUL_OP term  */
#line 1159 "perly.y"
                        { (yyval.opval) = build_infix_plugin((yyvsp[-2].opval), (yyvsp[0].opval), (yyvsp[-1].pval)); }
#line 3844 "bison-perly-lalr.tab.c"
    break;

  case 193: /* termbinop: term ADDOP term  */
#line 1161 "perly.y"
                        { (yyval.opval) = newBINOP((yyvsp[-1].ival), 0, scalar((yyvsp[-2].opval)), scalar((yyvsp[0].opval))); }
#line 3850 "bison-perly-lalr.tab.c"
    break;

  case 194: /* termbinop: term PLUGIN_ADD_OP term  */
#line 1163 "perly.y"
                        { (yyval.opval) = build_infix_plugin((yyvsp[-2].opval), (yyvsp[0].opval), (yyvsp[-1].pval)); }
#line 3856 "bison-perly-lalr.tab.c"
    break;

  case 195: /* termbinop: term SHIFTOP term  */
#line 1165 "perly.y"
                        { (yyval.opval) = newBINOP((yyvsp[-1].ival), 0, scalar((yyvsp[-2].opval)), scalar((yyvsp[0].opval))); }
#line 3862 "bison-perly-lalr.tab.c"
    break;

  case 196: /* termbinop: termrelop  */
#line 1167 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); }
#line 3868 "bison-perly-lalr.tab.c"
    break;

  case 197: /* termbinop: termeqop  */
#line 1169 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); }
#line 3874 "bison-perly-lalr.tab.c"
    break;

  case 198: /* termbinop: term BITANDOP term  */
#line 1171 "perly.y"
                        { (yyval.opval) = newBINOP((yyvsp[-1].ival), 0, scalar((yyvsp[-2].opval)), scalar((yyvsp[0].opval))); }
#line 3880 "bison-perly-lalr.tab.c"
    break;

  case 199: /* termbinop: term BITOROP term  */
#line 1173 "perly.y"
                        { (yyval.opval) = newBINOP((yyvsp[-1].ival), 0, scalar((yyvsp[-2].opval)), scalar((yyvsp[0].opval))); }
#line 3886 "bison-perly-lalr.tab.c"
    break;

  case 200: /* termbinop: term DOTDOT term  */
#line 1175 "perly.y"
                        { (yyval.opval) = newRANGE((yyvsp[-1].ival), scalar((yyvsp[-2].opval)), scalar((yyvsp[0].opval))); }
#line 3892 "bison-perly-lalr.tab.c"
    break;

  case 201: /* termbinop: term ANDAND term  */
#line 1177 "perly.y"
                        { (yyval.opval) = newLOGOP(OP_AND, 0, (yyvsp[-2].opval), (yyvsp[0].opval)); }
#line 3898 "bison-perly-lalr.tab.c"
    break;

  case 202: /* termbinop: term PLUGIN_LOGICAL_AND_OP term  */
#line 1179 "perly.y"
                        { (yyval.opval) = build_infix_plugin((yyvsp[-2].opval), (yyvsp[0].opval), (yyvsp[-1].pval)); }
#line 3904 "bison-perly-lalr.tab.c"
    break;

  case 203: /* termbinop: term OROR term  */
#line 1181 "perly.y"
                        { (yyval.opval) = newLOGOP((yyvsp[-1].ival), 0, (yyvsp[-2].opval), (yyvsp[0].opval)); }
#line 3910 "bison-perly-lalr.tab.c"
    break;

  case 204: /* termbinop: term PLUGIN_LOGICAL_OR_OP term  */
#line 1183 "perly.y"
                        { (yyval.opval) = build_infix_plugin((yyvsp[-2].opval), (yyvsp[0].opval), (yyvsp[-1].pval)); }
#line 3916 "bison-perly-lalr.tab.c"
    break;

  case 205: /* termbinop: term DORDOR term  */
#line 1185 "perly.y"
                        { (yyval.opval) = newLOGOP(OP_DOR, 0, (yyvsp[-2].opval), (yyvsp[0].opval)); }
#line 3922 "bison-perly-lalr.tab.c"
    break;

  case 206: /* termbinop: term MATCHOP term  */
#line 1187 "perly.y"
                        { (yyval.opval) = bind_match((yyvsp[-1].ival), (yyvsp[-2].opval), (yyvsp[0].opval)); }
#line 3928 "bison-perly-lalr.tab.c"
    break;

  case 207: /* termbinop: term PLUGIN_LOW_OP term  */
#line 1189 "perly.y"
                        { (yyval.opval) = build_infix_plugin((yyvsp[-2].opval), (yyvsp[0].opval), (yyvsp[-1].pval)); }
#line 3934 "bison-perly-lalr.tab.c"
    break;

  case 208: /* termrelop: relopchain  */
#line 1193 "perly.y"
                        { (yyval.opval) = cmpchain_finish((yyvsp[0].opval)); }
#line 3940 "bison-perly-lalr.tab.c"
    break;

  case 209: /* termrelop: term NCRELOP term  */
#line 1195 "perly.y"
                        { (yyval.opval) = newBINOP((yyvsp[-1].ival), 0, scalar((yyvsp[-2].opval)), scalar((yyvsp[0].opval))); }
#line 3946 "bison-perly-lalr.tab.c"
    break;

  case 210: /* termrelop: termrelop NCRELOP  */
#line 1197 "perly.y"
                        { yyerror("syntax error"); YYERROR; }
#line 3952 "bison-perly-lalr.tab.c"
    break;

  case 211: /* termrelop: termrelop CHRELOP  */
#line 1199 "perly.y"
                        { yyerror("syntax error"); YYERROR; }
#line 3958 "bison-perly-lalr.tab.c"
    break;

  case 212: /* termrelop: term PLUGIN_REL_OP term  */
#line 1201 "perly.y"
                        { (yyval.opval) = build_infix_plugin((yyvsp[-2].opval), (yyvsp[0].opval), (yyvsp[-1].pval)); }
#line 3964 "bison-perly-lalr.tab.c"
    break;

  case 213: /* relopchain: term CHRELOP term  */
#line 1205 "perly.y"
                        { (yyval.opval) = cmpchain_start((yyvsp[-1].ival), (yyvsp[-2].opval), (yyvsp[0].opval)); }
#line 3970 "bison-perly-lalr.tab.c"
    break;

  case 214: /* relopchain: relopchain CHRELOP term  */
#line 1207 "perly.y"
                        { (yyval.opval) = cmpchain_extend((yyvsp[-1].ival), (yyvsp[-2].opval), (yyvsp[0].opval)); }
#line 3976 "bison-perly-lalr.tab.c"
    break;

  case 215: /* termeqop: eqopchain  */
#line 1211 "perly.y"
                        { (yyval.opval) = cmpchain_finish((yyvsp[0].opval)); }
#line 3982 "bison-perly-lalr.tab.c"
    break;

  case 216: /* termeqop: term NCEQOP term  */
#line 1213 "perly.y"
                        { (yyval.opval) = newBINOP((yyvsp[-1].ival), 0, scalar((yyvsp[-2].opval)), scalar((yyvsp[0].opval))); }
#line 3988 "bison-perly-lalr.tab.c"
    break;

  case 217: /* termeqop: termeqop NCEQOP  */
#line 1215 "perly.y"
                        { yyerror("syntax error"); YYERROR; }
#line 3994 "bison-perly-lalr.tab.c"
    break;

  case 218: /* termeqop: termeqop CHEQOP  */
#line 1217 "perly.y"
                        { yyerror("syntax error"); YYERROR; }
#line 4000 "bison-perly-lalr.tab.c"
    break;

  case 219: /* eqopchain: term CHEQOP term  */
#line 1221 "perly.y"
                        { (yyval.opval) = cmpchain_start((yyvsp[-1].ival), (yyvsp[-2].opval), (yyvsp[0].opval)); }
#line 4006 "bison-perly-lalr.tab.c"
    break;

  case 220: /* eqopchain: eqopchain CHEQOP term  */
#line 1223 "perly.y"
                        { (yyval.opval) = cmpchain_extend((yyvsp[-1].ival), (yyvsp[-2].opval), (yyvsp[0].opval)); }
#line 4012 "bison-perly-lalr.tab.c"
    break;

  case 221: /* termunop: PERLY_MINUS term  */
#line 1228 "perly.y"
                        { (yyval.opval) = newUNOP(OP_NEGATE, 0, scalar((yyvsp[0].opval))); }
#line 4018 "bison-perly-lalr.tab.c"
    break;

  case 222: /* termunop: PERLY_PLUS term  */
#line 1230 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); }
#line 4024 "bison-perly-lalr.tab.c"
    break;

  case 223: /* termunop: PERLY_EXCLAMATION_MARK term  */
#line 1233 "perly.y"
                        { (yyval.opval) = newUNOP(OP_NOT, 0, scalar((yyvsp[0].opval))); }
#line 4030 "bison-perly-lalr.tab.c"
    break;

  case 224: /* termunop: PERLY_TILDE term  */
#line 1235 "perly.y"
                        { (yyval.opval) = newUNOP((yyvsp[-1].ival), 0, scalar((yyvsp[0].opval))); }
#line 4036 "bison-perly-lalr.tab.c"
    break;

  case 225: /* termunop: term POSTINC  */
#line 1237 "perly.y"
                        { (yyval.opval) = newUNOP(OP_POSTINC, 0,
					op_lvalue(scalar((yyvsp[-1].opval)), OP_POSTINC)); }
#line 4043 "bison-perly-lalr.tab.c"
    break;

  case 226: /* termunop: term POSTDEC  */
#line 1240 "perly.y"
                        { (yyval.opval) = newUNOP(OP_POSTDEC, 0,
					op_lvalue(scalar((yyvsp[-1].opval)), OP_POSTDEC));}
#line 4050 "bison-perly-lalr.tab.c"
    break;

  case 227: /* termunop: term POSTJOIN  */
#line 1243 "perly.y"
                        { (yyval.opval) = op_convert_list(OP_JOIN, 0,
				       op_append_elem(
					OP_LIST,
					newSVREF(scalar(
					    newSVOP(OP_CONST,0,
						    newSVpvs("\""))
					)),
					(yyvsp[-1].opval)
				       ));
			}
#line 4065 "bison-perly-lalr.tab.c"
    break;

  case 228: /* termunop: PREINC term  */
#line 1254 "perly.y"
                        { (yyval.opval) = newUNOP(OP_PREINC, 0,
					op_lvalue(scalar((yyvsp[0].opval)), OP_PREINC)); }
#line 4072 "bison-perly-lalr.tab.c"
    break;

  case 229: /* termunop: PREDEC term  */
#line 1257 "perly.y"
                        { (yyval.opval) = newUNOP(OP_PREDEC, 0,
					op_lvalue(scalar((yyvsp[0].opval)), OP_PREDEC)); }
#line 4079 "bison-perly-lalr.tab.c"
    break;

  case 230: /* anonymous: PERLY_BRACKET_OPEN optexpr PERLY_BRACKET_CLOSE  */
#line 1265 "perly.y"
                        { (yyval.opval) = newANONLIST((yyvsp[-1].opval)); }
#line 4085 "bison-perly-lalr.tab.c"
    break;

  case 231: /* anonymous: HASHBRACK optexpr PERLY_SEMICOLON PERLY_BRACE_CLOSE  */
#line 1267 "perly.y"
                        { (yyval.opval) = newANONHASH((yyvsp[-2].opval)); }
#line 4091 "bison-perly-lalr.tab.c"
    break;

  case 232: /* anonymous: KW_SUB_anon startanonsub proto subattrlist subbody  */
#line 1269 "perly.y"
                        { SvREFCNT_inc_simple_void(PL_compcv);
			  (yyval.opval) = newANONATTRSUB((yyvsp[-3].ival), (yyvsp[-2].opval), (yyvsp[-1].opval), (yyvsp[0].opval)); }
#line 4098 "bison-perly-lalr.tab.c"
    break;

  case 233: /* anonymous: KW_SUB_anon_sig startanonsub subattrlist sigsubbody  */
#line 1272 "perly.y"
                        { SvREFCNT_inc_simple_void(PL_compcv);
			  (yyval.opval) = newANONATTRSUB((yyvsp[-2].ival), NULL, (yyvsp[-1].opval), (yyvsp[0].opval)); }
#line 4105 "bison-perly-lalr.tab.c"
    break;

  case 234: /* anonymous: KW_METHOD_anon startanonmethod subattrlist sigsubbody  */
#line 1275 "perly.y"
                        {
			  SvREFCNT_inc_simple_void(PL_compcv);
			  (yyval.opval) = newANONATTRSUB((yyvsp[-2].ival), NULL, (yyvsp[-1].opval), (yyvsp[0].opval));
			}
#line 4114 "bison-perly-lalr.tab.c"
    break;

  case 235: /* termdo: KW_DO term  */
#line 1283 "perly.y"
                        { (yyval.opval) = dofile((yyvsp[0].opval), (yyvsp[-1].ival));}
#line 4120 "bison-perly-lalr.tab.c"
    break;

  case 236: /* termdo: KW_DO block  */
#line 1285 "perly.y"
                        { (yyval.opval) = newUNOP(OP_NULL, OPf_SPECIAL, op_scope((yyvsp[0].opval)));}
#line 4126 "bison-perly-lalr.tab.c"
    break;

  case 241: /* term: term PERLY_QUESTION_MARK term PERLY_COLON term  */
#line 1293 "perly.y"
                        { (yyval.opval) = newCONDOP(0, (yyvsp[-4].opval), (yyvsp[-2].opval), (yyvsp[0].opval)); }
#line 4132 "bison-perly-lalr.tab.c"
    break;

  case 242: /* term: REFGEN term  */
#line 1295 "perly.y"
                        { (yyval.opval) = newUNOP(OP_REFGEN, 0, (yyvsp[0].opval)); }
#line 4138 "bison-perly-lalr.tab.c"
    break;

  case 243: /* term: myattrterm  */
#line 1297 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); }
#line 4144 "bison-perly-lalr.tab.c"
    break;

  case 244: /* term: KW_LOCAL term  */
#line 1299 "perly.y"
                        { (yyval.opval) = localize((yyvsp[0].opval),0); }
#line 4150 "bison-perly-lalr.tab.c"
    break;

  case 245: /* term: PERLY_PAREN_OPEN expr PERLY_PAREN_CLOSE  */
#line 1301 "perly.y"
                        { (yyval.opval) = sawparens((yyvsp[-1].opval)); }
#line 4156 "bison-perly-lalr.tab.c"
    break;

  case 246: /* term: QWLIST  */
#line 1303 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); }
#line 4162 "bison-perly-lalr.tab.c"
    break;

  case 247: /* term: PERLY_PAREN_OPEN PERLY_PAREN_CLOSE  */
#line 1305 "perly.y"
                        { (yyval.opval) = sawparens(newNULLLIST()); }
#line 4168 "bison-perly-lalr.tab.c"
    break;

  case 248: /* term: scalar  */
#line 1307 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); }
#line 4174 "bison-perly-lalr.tab.c"
    break;

  case 249: /* term: star  */
#line 1309 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); }
#line 4180 "bison-perly-lalr.tab.c"
    break;

  case 250: /* term: hsh  */
#line 1311 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); }
#line 4186 "bison-perly-lalr.tab.c"
    break;

  case 251: /* term: ary  */
#line 1313 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); }
#line 4192 "bison-perly-lalr.tab.c"
    break;

  case 252: /* term: arylen  */
#line 1315 "perly.y"
                        { (yyval.opval) = newUNOP(OP_AV2ARYLEN, 0, ref((yyvsp[0].opval), OP_AV2ARYLEN));}
#line 4198 "bison-perly-lalr.tab.c"
    break;

  case 253: /* term: subscripted  */
#line 1317 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); }
#line 4204 "bison-perly-lalr.tab.c"
    break;

  case 254: /* term: sliceme PERLY_BRACKET_OPEN expr PERLY_BRACKET_CLOSE  */
#line 1319 "perly.y"
                        { (yyval.opval) = op_prepend_elem(OP_ASLICE,
				newOP(OP_PUSHMARK, 0),
				    newLISTOP(OP_ASLICE, 0,
					list((yyvsp[-1].opval)),
					ref((yyvsp[-3].opval), OP_ASLICE)));
			  if ((yyval.opval) && (yyvsp[-3].opval))
			      (yyval.opval)->op_private |=
				  (yyvsp[-3].opval)->op_private & OPpSLICEWARNING;
			}
#line 4218 "bison-perly-lalr.tab.c"
    break;

  case 255: /* term: kvslice PERLY_BRACKET_OPEN expr PERLY_BRACKET_CLOSE  */
#line 1329 "perly.y"
                        { (yyval.opval) = op_prepend_elem(OP_KVASLICE,
				newOP(OP_PUSHMARK, 0),
				    newLISTOP(OP_KVASLICE, 0,
					list((yyvsp[-1].opval)),
					ref(oopsAV((yyvsp[-3].opval)), OP_KVASLICE)));
			  if ((yyval.opval) && (yyvsp[-3].opval))
			      (yyval.opval)->op_private |=
				  (yyvsp[-3].opval)->op_private & OPpSLICEWARNING;
			}
#line 4232 "bison-perly-lalr.tab.c"
    break;

  case 256: /* term: sliceme PERLY_BRACE_OPEN expr PERLY_SEMICOLON PERLY_BRACE_CLOSE  */
#line 1339 "perly.y"
                        { (yyval.opval) = op_prepend_elem(OP_HSLICE,
				newOP(OP_PUSHMARK, 0),
				    newLISTOP(OP_HSLICE, 0,
					list((yyvsp[-2].opval)),
					ref(oopsHV((yyvsp[-4].opval)), OP_HSLICE)));
			  if ((yyval.opval) && (yyvsp[-4].opval))
			      (yyval.opval)->op_private |=
				  (yyvsp[-4].opval)->op_private & OPpSLICEWARNING;
			}
#line 4246 "bison-perly-lalr.tab.c"
    break;

  case 257: /* term: kvslice PERLY_BRACE_OPEN expr PERLY_SEMICOLON PERLY_BRACE_CLOSE  */
#line 1349 "perly.y"
                        { (yyval.opval) = op_prepend_elem(OP_KVHSLICE,
				newOP(OP_PUSHMARK, 0),
				    newLISTOP(OP_KVHSLICE, 0,
					list((yyvsp[-2].opval)),
					ref((yyvsp[-4].opval), OP_KVHSLICE)));
			  if ((yyval.opval) && (yyvsp[-4].opval))
			      (yyval.opval)->op_private |=
				  (yyvsp[-4].opval)->op_private & OPpSLICEWARNING;
			}
#line 4260 "bison-perly-lalr.tab.c"
    break;

  case 258: /* term: THING  */
#line 1359 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); }
#line 4266 "bison-perly-lalr.tab.c"
    break;

  case 259: /* term: amper  */
#line 1361 "perly.y"
                        { (yyval.opval) = newUNOP(OP_ENTERSUB, 0, scalar((yyvsp[0].opval))); }
#line 4272 "bison-perly-lalr.tab.c"
    break;

  case 260: /* term: amper PERLY_PAREN_OPEN PERLY_PAREN_CLOSE  */
#line 1363 "perly.y"
                        { (yyval.opval) = newUNOP(OP_ENTERSUB, OPf_STACKED, scalar((yyvsp[-2].opval)));
			}
#line 4279 "bison-perly-lalr.tab.c"
    break;

  case 261: /* term: amper PERLY_PAREN_OPEN expr PERLY_PAREN_CLOSE  */
#line 1366 "perly.y"
                        {
			  (yyval.opval) = newUNOP(OP_ENTERSUB, OPf_STACKED,
				op_append_elem(OP_LIST, (yyvsp[-1].opval), scalar((yyvsp[-3].opval))));
			}
#line 4288 "bison-perly-lalr.tab.c"
    break;

  case 262: /* term: NOAMP subname optlistexpr  */
#line 1371 "perly.y"
                        { (yyval.opval) = newUNOP(OP_ENTERSUB, OPf_STACKED,
			    op_append_elem(OP_LIST, (yyvsp[0].opval), scalar((yyvsp[-1].opval))));
			}
#line 4296 "bison-perly-lalr.tab.c"
    break;

  case 263: /* term: term ARROW PERLY_DOLLAR PERLY_STAR  */
#line 1375 "perly.y"
                        { (yyval.opval) = newSVREF((yyvsp[-3].opval)); }
#line 4302 "bison-perly-lalr.tab.c"
    break;

  case 264: /* term: term ARROW PERLY_SNAIL PERLY_STAR  */
#line 1377 "perly.y"
                        { (yyval.opval) = newAVREF((yyvsp[-3].opval)); }
#line 4308 "bison-perly-lalr.tab.c"
    break;

  case 265: /* term: term ARROW PERLY_PERCENT_SIGN PERLY_STAR  */
#line 1379 "perly.y"
                        { (yyval.opval) = newHVREF((yyvsp[-3].opval)); }
#line 4314 "bison-perly-lalr.tab.c"
    break;

  case 266: /* term: term ARROW PERLY_AMPERSAND PERLY_STAR  */
#line 1381 "perly.y"
                        { (yyval.opval) = newUNOP(OP_ENTERSUB, 0,
				       scalar(newCVREF((yyvsp[-1].ival),(yyvsp[-3].opval)))); }
#line 4321 "bison-perly-lalr.tab.c"
    break;

  case 267: /* term: term ARROW PERLY_STAR PERLY_STAR  */
#line 1384 "perly.y"
                        { (yyval.opval) = newGVREF(0,(yyvsp[-3].opval)); }
#line 4327 "bison-perly-lalr.tab.c"
    break;

  case 268: /* term: LOOPEX  */
#line 1386 "perly.y"
                        { (yyval.opval) = newOP((yyvsp[0].ival), OPf_SPECIAL);
			    PL_hints |= HINT_BLOCK_SCOPE; }
#line 4334 "bison-perly-lalr.tab.c"
    break;

  case 269: /* term: LOOPEX term  */
#line 1389 "perly.y"
                        { (yyval.opval) = newLOOPEX((yyvsp[-1].ival),(yyvsp[0].opval)); }
#line 4340 "bison-perly-lalr.tab.c"
    break;

  case 270: /* term: NOTOP listexpr  */
#line 1391 "perly.y"
                        { (yyval.opval) = newUNOP(OP_NOT, 0, scalar((yyvsp[0].opval))); }
#line 4346 "bison-perly-lalr.tab.c"
    break;

  case 271: /* term: UNIOP  */
#line 1393 "perly.y"
                        { (yyval.opval) = newOP((yyvsp[0].ival), 0); }
#line 4352 "bison-perly-lalr.tab.c"
    break;

  case 272: /* term: UNIOP block  */
#line 1395 "perly.y"
                        { (yyval.opval) = newUNOP((yyvsp[-1].ival), 0, (yyvsp[0].opval)); }
#line 4358 "bison-perly-lalr.tab.c"
    break;

  case 273: /* term: UNIOP term  */
#line 1397 "perly.y"
                        { (yyval.opval) = newUNOP((yyvsp[-1].ival), 0, (yyvsp[0].opval)); }
#line 4364 "bison-perly-lalr.tab.c"
    break;

  case 274: /* term: KW_REQUIRE  */
#line 1399 "perly.y"
                        { (yyval.opval) = newOP(OP_REQUIRE, (yyvsp[0].ival) ? OPf_SPECIAL : 0); }
#line 4370 "bison-perly-lalr.tab.c"
    break;

  case 275: /* term: KW_REQUIRE term  */
#line 1401 "perly.y"
                        { (yyval.opval) = newUNOP(OP_REQUIRE, (yyvsp[-1].ival) ? OPf_SPECIAL : 0, (yyvsp[0].opval)); }
#line 4376 "bison-perly-lalr.tab.c"
    break;

  case 276: /* term: UNIOPSUB  */
#line 1403 "perly.y"
                        { (yyval.opval) = newUNOP(OP_ENTERSUB, OPf_STACKED, scalar((yyvsp[0].opval))); }
#line 4382 "bison-perly-lalr.tab.c"
    break;

  case 277: /* term: UNIOPSUB term  */
#line 1405 "perly.y"
                        { (yyval.opval) = newUNOP(OP_ENTERSUB, OPf_STACKED,
			    op_append_elem(OP_LIST, (yyvsp[0].opval), scalar((yyvsp[-1].opval)))); }
#line 4389 "bison-perly-lalr.tab.c"
    break;

  case 278: /* term: FUNC0  */
#line 1408 "perly.y"
                        { (yyval.opval) = newOP((yyvsp[0].ival), 0); }
#line 4395 "bison-perly-lalr.tab.c"
    break;

  case 279: /* term: FUNC0 PERLY_PAREN_OPEN PERLY_PAREN_CLOSE  */
#line 1410 "perly.y"
                        { (yyval.opval) = newOP((yyvsp[-2].ival), 0);}
#line 4401 "bison-perly-lalr.tab.c"
    break;

  case 280: /* term: FUNC0OP  */
#line 1412 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); }
#line 4407 "bison-perly-lalr.tab.c"
    break;

  case 281: /* term: FUNC0OP PERLY_PAREN_OPEN PERLY_PAREN_CLOSE  */
#line 1414 "perly.y"
                        { (yyval.opval) = (yyvsp[-2].opval); }
#line 4413 "bison-perly-lalr.tab.c"
    break;

  case 282: /* term: FUNC0SUB  */
#line 1416 "perly.y"
                        { (yyval.opval) = newUNOP(OP_ENTERSUB, OPf_STACKED, scalar((yyvsp[0].opval))); }
#line 4419 "bison-perly-lalr.tab.c"
    break;

  case 283: /* term: FUNC1 PERLY_PAREN_OPEN PERLY_PAREN_CLOSE  */
#line 1418 "perly.y"
                        { (yyval.opval) = ((yyvsp[-2].ival) == OP_NOT)
                          ? newUNOP((yyvsp[-2].ival), 0, newSVOP(OP_CONST, 0, newSViv(0)))
                          : newOP((yyvsp[-2].ival), OPf_SPECIAL); }
#line 4427 "bison-perly-lalr.tab.c"
    break;

  case 284: /* term: FUNC1 PERLY_PAREN_OPEN expr PERLY_PAREN_CLOSE  */
#line 1422 "perly.y"
                        { (yyval.opval) = newUNOP((yyvsp[-3].ival), 0, (yyvsp[-1].opval)); }
#line 4433 "bison-perly-lalr.tab.c"
    break;

  case 285: /* @23: %empty  */
#line 1424 "perly.y"
                        {
			    if (   (yyvsp[0].opval)->op_type != OP_TRANS
			        && (yyvsp[0].opval)->op_type != OP_TRANSR
				&& (((PMOP*)(yyvsp[0].opval))->op_pmflags & PMf_HAS_CV))
			    {
				(yyval.ival) = start_subparse(FALSE, CVf_ANON);
				SAVEFREESV(PL_compcv);
			    } else
				(yyval.ival) = 0;
			}
#line 4448 "bison-perly-lalr.tab.c"
    break;

  case 286: /* term: PMFUNC @23 SUBLEXSTART listexpr optrepl SUBLEXEND  */
#line 1435 "perly.y"
                        { (yyval.opval) = pmruntime((yyvsp[-5].opval), (yyvsp[-2].opval), (yyvsp[-1].opval), 1, (yyvsp[-4].ival)); }
#line 4454 "bison-perly-lalr.tab.c"
    break;

  case 290: /* myattrterm: KW_MY myterm myattrlist  */
#line 1444 "perly.y"
                        { (yyval.opval) = my_attrs((yyvsp[-1].opval),(yyvsp[0].opval)); }
#line 4460 "bison-perly-lalr.tab.c"
    break;

  case 291: /* myattrterm: KW_MY myterm  */
#line 1446 "perly.y"
                        { (yyval.opval) = localize((yyvsp[0].opval),1); }
#line 4466 "bison-perly-lalr.tab.c"
    break;

  case 292: /* myattrterm: KW_MY REFGEN myterm myattrlist  */
#line 1448 "perly.y"
                        { (yyval.opval) = newUNOP(OP_REFGEN, 0, my_attrs((yyvsp[-1].opval),(yyvsp[0].opval))); }
#line 4472 "bison-perly-lalr.tab.c"
    break;

  case 293: /* myattrterm: KW_MY REFGEN term  */
#line 1450 "perly.y"
                        { (yyval.opval) = newUNOP(OP_REFGEN, 0, localize((yyvsp[0].opval),1)); }
#line 4478 "bison-perly-lalr.tab.c"
    break;

  case 294: /* myterm: PERLY_PAREN_OPEN expr PERLY_PAREN_CLOSE  */
#line 1455 "perly.y"
                        { (yyval.opval) = sawparens((yyvsp[-1].opval)); }
#line 4484 "bison-perly-lalr.tab.c"
    break;

  case 295: /* myterm: PERLY_PAREN_OPEN PERLY_PAREN_CLOSE  */
#line 1457 "perly.y"
                        { (yyval.opval) = sawparens(newNULLLIST()); }
#line 4490 "bison-perly-lalr.tab.c"
    break;

  case 296: /* myterm: scalar  */
#line 1460 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); }
#line 4496 "bison-perly-lalr.tab.c"
    break;

  case 297: /* myterm: hsh  */
#line 1462 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); }
#line 4502 "bison-perly-lalr.tab.c"
    break;

  case 298: /* myterm: ary  */
#line 1464 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); }
#line 4508 "bison-perly-lalr.tab.c"
    break;

  case 299: /* fieldvar: scalar  */
#line 1469 "perly.y"
                        {
			  (yyval.pval) = PadnamelistARRAY(PL_comppad_name)[(yyvsp[0].opval)->op_targ];
			  op_free((yyvsp[0].opval));
			}
#line 4517 "bison-perly-lalr.tab.c"
    break;

  case 300: /* fieldvar: hsh  */
#line 1474 "perly.y"
                        {
			  (yyval.pval) = PadnamelistARRAY(PL_comppad_name)[(yyvsp[0].opval)->op_targ];
			  op_free((yyvsp[0].opval));
			}
#line 4526 "bison-perly-lalr.tab.c"
    break;

  case 301: /* fieldvar: ary  */
#line 1479 "perly.y"
                        {
			  (yyval.pval) = PadnamelistARRAY(PL_comppad_name)[(yyvsp[0].opval)->op_targ];
			  op_free((yyvsp[0].opval));
			}
#line 4535 "bison-perly-lalr.tab.c"
    break;

  case 302: /* optfieldattrlist: COLONATTR THING  */
#line 1487 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); }
#line 4541 "bison-perly-lalr.tab.c"
    break;

  case 303: /* optfieldattrlist: COLONATTR  */
#line 1489 "perly.y"
                        { (yyval.opval) = NULL; }
#line 4547 "bison-perly-lalr.tab.c"
    break;

  case 305: /* fielddecl: KW_FIELD fieldvar optfieldattrlist  */
#line 1495 "perly.y"
                        {
			  parser->in_my = 0;
			  if((yyvsp[0].opval))
			    class_apply_field_attributes((PADNAME *)(yyvsp[-1].pval), (yyvsp[0].opval));
			  (yyval.opval) = newOP(OP_NULL, 0);
			}
#line 4558 "bison-perly-lalr.tab.c"
    break;

  case 306: /* $@24: %empty  */
#line 1502 "perly.y"
                        {
			  parser->in_my = 0;
			  if((yyvsp[-1].opval))
			    class_apply_field_attributes((PADNAME *)(yyvsp[-2].pval), (yyvsp[-1].opval));
			  ENTER;
			  class_prepare_initfield_parse();
			}
#line 4570 "bison-perly-lalr.tab.c"
    break;

  case 307: /* fielddecl: KW_FIELD fieldvar optfieldattrlist ASSIGNOP $@24 term  */
#line 1510 "perly.y"
                        {
			  class_set_field_defop((PADNAME *)(yyvsp[-4].pval), (yyvsp[-2].ival), (yyvsp[0].opval));
			  LEAVE;
			  (yyval.opval) = newOP(OP_NULL, 0);
			}
#line 4580 "bison-perly-lalr.tab.c"
    break;

  case 313: /* optrepl: PERLY_SLASH expr  */
#line 1530 "perly.y"
                                        { (yyval.opval) = (yyvsp[0].opval); }
#line 4586 "bison-perly-lalr.tab.c"
    break;

  case 314: /* my_scalar: scalar  */
#line 1536 "perly.y"
                        { parser->in_my = 0; (yyval.opval) = my((yyvsp[0].opval)); }
#line 4592 "bison-perly-lalr.tab.c"
    break;

  case 315: /* list_of_scalars: list_of_scalars PERLY_COMMA  */
#line 1541 "perly.y"
                        { (yyval.opval) = (yyvsp[-1].opval); }
#line 4598 "bison-perly-lalr.tab.c"
    break;

  case 316: /* list_of_scalars: list_of_scalars PERLY_COMMA scalar  */
#line 1543 "perly.y"
                        {
			  (yyval.opval) = op_append_elem(OP_LIST, (yyvsp[-2].opval), (yyvsp[0].opval));
			}
#line 4606 "bison-perly-lalr.tab.c"
    break;

  case 318: /* my_list_of_scalars: list_of_scalars  */
#line 1550 "perly.y"
                        { parser->in_my = 0; (yyval.opval) = (yyvsp[0].opval); }
#line 4612 "bison-perly-lalr.tab.c"
    break;

  case 326: /* amper: PERLY_AMPERSAND indirob  */
#line 1567 "perly.y"
                        { (yyval.opval) = newCVREF((yyvsp[-1].ival),(yyvsp[0].opval)); }
#line 4618 "bison-perly-lalr.tab.c"
    break;

  case 327: /* scalar: PERLY_DOLLAR indirob  */
#line 1571 "perly.y"
                        { (yyval.opval) = newSVREF((yyvsp[0].opval)); }
#line 4624 "bison-perly-lalr.tab.c"
    break;

  case 328: /* ary: PERLY_SNAIL indirob  */
#line 1575 "perly.y"
                        { (yyval.opval) = newAVREF((yyvsp[0].opval));
			  if ((yyval.opval)) (yyval.opval)->op_private |= (yyvsp[-1].ival);
			}
#line 4632 "bison-perly-lalr.tab.c"
    break;

  case 329: /* hsh: PERLY_PERCENT_SIGN indirob  */
#line 1581 "perly.y"
                        { (yyval.opval) = newHVREF((yyvsp[0].opval));
			  if ((yyval.opval)) (yyval.opval)->op_private |= (yyvsp[-1].ival);
			}
#line 4640 "bison-perly-lalr.tab.c"
    break;

  case 330: /* arylen: DOLSHARP indirob  */
#line 1587 "perly.y"
                        { (yyval.opval) = newAVREF((yyvsp[0].opval)); }
#line 4646 "bison-perly-lalr.tab.c"
    break;

  case 331: /* arylen: term ARROW DOLSHARP PERLY_STAR  */
#line 1589 "perly.y"
                        { (yyval.opval) = newAVREF((yyvsp[-3].opval)); }
#line 4652 "bison-perly-lalr.tab.c"
    break;

  case 332: /* star: PERLY_STAR indirob  */
#line 1593 "perly.y"
                        { (yyval.opval) = newGVREF(0,(yyvsp[0].opval)); }
#line 4658 "bison-perly-lalr.tab.c"
    break;

  case 334: /* sliceme: term ARROW PERLY_SNAIL  */
#line 1598 "perly.y"
                        { (yyval.opval) = newAVREF((yyvsp[-2].opval)); }
#line 4664 "bison-perly-lalr.tab.c"
    break;

  case 336: /* kvslice: term ARROW PERLY_PERCENT_SIGN  */
#line 1603 "perly.y"
                        { (yyval.opval) = newHVREF((yyvsp[-2].opval)); }
#line 4670 "bison-perly-lalr.tab.c"
    break;

  case 338: /* gelem: term ARROW PERLY_STAR  */
#line 1608 "perly.y"
                        { (yyval.opval) = newGVREF(0,(yyvsp[-2].opval)); }
#line 4676 "bison-perly-lalr.tab.c"
    break;

  case 339: /* indirob: BAREWORD  */
#line 1613 "perly.y"
                        { (yyval.opval) = scalar((yyvsp[0].opval)); }
#line 4682 "bison-perly-lalr.tab.c"
    break;

  case 340: /* indirob: scalar  */
#line 1615 "perly.y"
                        { (yyval.opval) = scalar((yyvsp[0].opval)); }
#line 4688 "bison-perly-lalr.tab.c"
    break;

  case 341: /* indirob: block  */
#line 1617 "perly.y"
                        { (yyval.opval) = op_scope((yyvsp[0].opval)); }
#line 4694 "bison-perly-lalr.tab.c"
    break;

  case 342: /* indirob: PRIVATEREF  */
#line 1620 "perly.y"
                        { (yyval.opval) = (yyvsp[0].opval); }
#line 4700 "bison-perly-lalr.tab.c"
    break;


#line 4704 "bison-perly-lalr.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == PERL_BISON_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= PERL_BISON_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == PERL_BISON_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = PERL_BISON_EMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != PERL_BISON_EMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

