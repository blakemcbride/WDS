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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 3 "sqlgrammar.y"



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sqlstructs.h"

#define YYERROR_VERBOSE
#define YYPARSE_PARAM root
#define YYDEBUG 1

#pragma warning (disable:4013)

int yylex(void);

int block_count = 0;

typedef struct __allocated_block_struct
{
	struct __allocated_block_struct *pnext;
	char pdata[1];
} __allocated_block;

static __allocated_block *p_allocations = NULL;

void *__sql_alloc(size_t size)
{
	__allocated_block *pblock = calloc(1, size + sizeof(void*));
	pblock->pnext = p_allocations;
	p_allocations = pblock;

	block_count += 1;
	return pblock->pdata;
}

void __free_allocated_blocks()
{
	while (p_allocations)
	{
		__allocated_block *ptmp = p_allocations->pnext;
		free(p_allocations);
		block_count -= 1;
		p_allocations = ptmp;
	}
}

int yywrap(void)
{
	return 1;
}

int yyerror(void *root, char const *msg)
{
	return 1;
}

#line 129 "sqlgrammar.tab.c"

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

#include "sqlgrammar.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NAME = 3,                       /* NAME  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_INTNUM = 5,                     /* INTNUM  */
  YYSYMBOL_APPROXNUM = 6,                  /* APPROXNUM  */
  YYSYMBOL_OR = 7,                         /* OR  */
  YYSYMBOL_AND = 8,                        /* AND  */
  YYSYMBOL_NOT = 9,                        /* NOT  */
  YYSYMBOL_10_ = 10,                       /* '+'  */
  YYSYMBOL_11_ = 11,                       /* '-'  */
  YYSYMBOL_12_ = 12,                       /* '*'  */
  YYSYMBOL_13_ = 13,                       /* '/'  */
  YYSYMBOL_UMINUS = 14,                    /* UMINUS  */
  YYSYMBOL_ALL = 15,                       /* ALL  */
  YYSYMBOL_AMMSC = 16,                     /* AMMSC  */
  YYSYMBOL_ANY = 17,                       /* ANY  */
  YYSYMBOL_AS = 18,                        /* AS  */
  YYSYMBOL_ASC = 19,                       /* ASC  */
  YYSYMBOL_AUTHORIZATION = 20,             /* AUTHORIZATION  */
  YYSYMBOL_BETWEEN = 21,                   /* BETWEEN  */
  YYSYMBOL_BY = 22,                        /* BY  */
  YYSYMBOL_CHARACTER = 23,                 /* CHARACTER  */
  YYSYMBOL_CHECK = 24,                     /* CHECK  */
  YYSYMBOL_CLOSE = 25,                     /* CLOSE  */
  YYSYMBOL_COMMIT = 26,                    /* COMMIT  */
  YYSYMBOL_CREATE = 27,                    /* CREATE  */
  YYSYMBOL_CURRENT = 28,                   /* CURRENT  */
  YYSYMBOL_CURSOR = 29,                    /* CURSOR  */
  YYSYMBOL_DATE_LITERAL = 30,              /* DATE_LITERAL  */
  YYSYMBOL_DECIMAL2 = 31,                  /* DECIMAL2  */
  YYSYMBOL_DECLARE = 32,                   /* DECLARE  */
  YYSYMBOL_DEFAULT = 33,                   /* DEFAULT  */
  YYSYMBOL_DELETE2 = 34,                   /* DELETE2  */
  YYSYMBOL_DESC = 35,                      /* DESC  */
  YYSYMBOL_DISTINCT = 36,                  /* DISTINCT  */
  YYSYMBOL_DOUBLE2 = 37,                   /* DOUBLE2  */
  YYSYMBOL_DROP = 38,                      /* DROP  */
  YYSYMBOL_EQUALS = 39,                    /* EQUALS  */
  YYSYMBOL_ESCAPE = 40,                    /* ESCAPE  */
  YYSYMBOL_EXISTS = 41,                    /* EXISTS  */
  YYSYMBOL_FETCH = 42,                     /* FETCH  */
  YYSYMBOL_FLOAT2 = 43,                    /* FLOAT2  */
  YYSYMBOL_FOR = 44,                       /* FOR  */
  YYSYMBOL_FOREIGN = 45,                   /* FOREIGN  */
  YYSYMBOL_FROM = 46,                      /* FROM  */
  YYSYMBOL_GRANT = 47,                     /* GRANT  */
  YYSYMBOL_GREATER_THAN = 48,              /* GREATER_THAN  */
  YYSYMBOL_GREATER_THAN_EQ = 49,           /* GREATER_THAN_EQ  */
  YYSYMBOL_GROUP = 50,                     /* GROUP  */
  YYSYMBOL_HAVING = 51,                    /* HAVING  */
  YYSYMBOL_IN2 = 52,                       /* IN2  */
  YYSYMBOL_INDICATOR = 53,                 /* INDICATOR  */
  YYSYMBOL_INNER = 54,                     /* INNER  */
  YYSYMBOL_INSERT = 55,                    /* INSERT  */
  YYSYMBOL_INTEGER = 56,                   /* INTEGER  */
  YYSYMBOL_INTO = 57,                      /* INTO  */
  YYSYMBOL_IS = 58,                        /* IS  */
  YYSYMBOL_JOIN = 59,                      /* JOIN  */
  YYSYMBOL_KEY = 60,                       /* KEY  */
  YYSYMBOL_LANGUAGE = 61,                  /* LANGUAGE  */
  YYSYMBOL_LEFT = 62,                      /* LEFT  */
  YYSYMBOL_LESS_THAN = 63,                 /* LESS_THAN  */
  YYSYMBOL_LESS_THAN_EQ = 64,              /* LESS_THAN_EQ  */
  YYSYMBOL_LIKE = 65,                      /* LIKE  */
  YYSYMBOL_MODULE = 66,                    /* MODULE  */
  YYSYMBOL_NOT_EQUALS = 67,                /* NOT_EQUALS  */
  YYSYMBOL_NULLX = 68,                     /* NULLX  */
  YYSYMBOL_NUMERIC = 69,                   /* NUMERIC  */
  YYSYMBOL_OF = 70,                        /* OF  */
  YYSYMBOL_ON = 71,                        /* ON  */
  YYSYMBOL_OPEN = 72,                      /* OPEN  */
  YYSYMBOL_OPTION = 73,                    /* OPTION  */
  YYSYMBOL_ORDER = 74,                     /* ORDER  */
  YYSYMBOL_OUTER = 75,                     /* OUTER  */
  YYSYMBOL_PRECISION = 76,                 /* PRECISION  */
  YYSYMBOL_PRIMARY = 77,                   /* PRIMARY  */
  YYSYMBOL_PRIVILEGES = 78,                /* PRIVILEGES  */
  YYSYMBOL_PROCEDURE = 79,                 /* PROCEDURE  */
  YYSYMBOL_PUBLIC = 80,                    /* PUBLIC  */
  YYSYMBOL_REAL = 81,                      /* REAL  */
  YYSYMBOL_REFERENCES = 82,                /* REFERENCES  */
  YYSYMBOL_RIGHT = 83,                     /* RIGHT  */
  YYSYMBOL_ROLLBACK = 84,                  /* ROLLBACK  */
  YYSYMBOL_SCHEMA = 85,                    /* SCHEMA  */
  YYSYMBOL_SELECT = 86,                    /* SELECT  */
  YYSYMBOL_SET = 87,                       /* SET  */
  YYSYMBOL_SMALLINT = 88,                  /* SMALLINT  */
  YYSYMBOL_SOME = 89,                      /* SOME  */
  YYSYMBOL_SQLCODE = 90,                   /* SQLCODE  */
  YYSYMBOL_SYSDATE = 91,                   /* SYSDATE  */
  YYSYMBOL_TABLE = 92,                     /* TABLE  */
  YYSYMBOL_TIME_LITERAL = 93,              /* TIME_LITERAL  */
  YYSYMBOL_TO = 94,                        /* TO  */
  YYSYMBOL_TRIGGER = 95,                   /* TRIGGER  */
  YYSYMBOL_UNION = 96,                     /* UNION  */
  YYSYMBOL_UNIQUE = 97,                    /* UNIQUE  */
  YYSYMBOL_UPDATE = 98,                    /* UPDATE  */
  YYSYMBOL_USER = 99,                      /* USER  */
  YYSYMBOL_VALUES = 100,                   /* VALUES  */
  YYSYMBOL_VIEW = 101,                     /* VIEW  */
  YYSYMBOL_WHERE = 102,                    /* WHERE  */
  YYSYMBOL_WITH = 103,                     /* WITH  */
  YYSYMBOL_WORK = 104,                     /* WORK  */
  YYSYMBOL_COBOL = 105,                    /* COBOL  */
  YYSYMBOL_FORTRAN = 106,                  /* FORTRAN  */
  YYSYMBOL_PASCAL2 = 107,                  /* PASCAL2  */
  YYSYMBOL_PLI = 108,                      /* PLI  */
  YYSYMBOL_C = 109,                        /* C  */
  YYSYMBOL_ADA = 110,                      /* ADA  */
  YYSYMBOL_VARCHAR = 111,                  /* VARCHAR  */
  YYSYMBOL_112_ = 112,                     /* ';'  */
  YYSYMBOL_113_ = 113,                     /* '('  */
  YYSYMBOL_114_ = 114,                     /* ')'  */
  YYSYMBOL_115_ = 115,                     /* ','  */
  YYSYMBOL_116_ = 116,                     /* '.'  */
  YYSYMBOL_117_ = 117,                     /* ':'  */
  YYSYMBOL_YYACCEPT = 118,                 /* $accept  */
  YYSYMBOL_root = 119,                     /* root  */
  YYSYMBOL_sql_list = 120,                 /* sql_list  */
  YYSYMBOL_sql = 121,                      /* sql  */
  YYSYMBOL_schema = 122,                   /* schema  */
  YYSYMBOL_opt_schema_element_list = 123,  /* opt_schema_element_list  */
  YYSYMBOL_schema_element_list = 124,      /* schema_element_list  */
  YYSYMBOL_schema_element = 125,           /* schema_element  */
  YYSYMBOL_drop_trigger = 126,             /* drop_trigger  */
  YYSYMBOL_drop_table = 127,               /* drop_table  */
  YYSYMBOL_base_table_def = 128,           /* base_table_def  */
  YYSYMBOL_base_table_element_commalist = 129, /* base_table_element_commalist  */
  YYSYMBOL_base_table_element = 130,       /* base_table_element  */
  YYSYMBOL_column_def = 131,               /* column_def  */
  YYSYMBOL_column_def_opt_list = 132,      /* column_def_opt_list  */
  YYSYMBOL_column_def_opt = 133,           /* column_def_opt  */
  YYSYMBOL_table_constraint_def = 134,     /* table_constraint_def  */
  YYSYMBOL_column_commalist = 135,         /* column_commalist  */
  YYSYMBOL_view_def = 136,                 /* view_def  */
  YYSYMBOL_opt_with_check_option = 137,    /* opt_with_check_option  */
  YYSYMBOL_opt_column_commalist = 138,     /* opt_column_commalist  */
  YYSYMBOL_privilege_def = 139,            /* privilege_def  */
  YYSYMBOL_opt_with_grant_option = 140,    /* opt_with_grant_option  */
  YYSYMBOL_privileges = 141,               /* privileges  */
  YYSYMBOL_operation_commalist = 142,      /* operation_commalist  */
  YYSYMBOL_operation = 143,                /* operation  */
  YYSYMBOL_grantee_commalist = 144,        /* grantee_commalist  */
  YYSYMBOL_grantee = 145,                  /* grantee  */
  YYSYMBOL_module_def = 146,               /* module_def  */
  YYSYMBOL_opt_module = 147,               /* opt_module  */
  YYSYMBOL_lang = 148,                     /* lang  */
  YYSYMBOL_opt_cursor_def_list = 149,      /* opt_cursor_def_list  */
  YYSYMBOL_cursor_def_list = 150,          /* cursor_def_list  */
  YYSYMBOL_cursor_def = 151,               /* cursor_def  */
  YYSYMBOL_opt_order_by_clause = 152,      /* opt_order_by_clause  */
  YYSYMBOL_ordering_spec_commalist = 153,  /* ordering_spec_commalist  */
  YYSYMBOL_ordering_spec = 154,            /* ordering_spec  */
  YYSYMBOL_opt_asc_desc = 155,             /* opt_asc_desc  */
  YYSYMBOL_procedure_def_list = 156,       /* procedure_def_list  */
  YYSYMBOL_procedure_def = 157,            /* procedure_def  */
  YYSYMBOL_manipulative_statement_list = 158, /* manipulative_statement_list  */
  YYSYMBOL_parameter_def_list = 159,       /* parameter_def_list  */
  YYSYMBOL_parameter_def = 160,            /* parameter_def  */
  YYSYMBOL_manipulative_statement = 161,   /* manipulative_statement  */
  YYSYMBOL_close_statement = 162,          /* close_statement  */
  YYSYMBOL_commit_statement = 163,         /* commit_statement  */
  YYSYMBOL_delete_statement_positioned = 164, /* delete_statement_positioned  */
  YYSYMBOL_delete_statement_searched = 165, /* delete_statement_searched  */
  YYSYMBOL_fetch_statement = 166,          /* fetch_statement  */
  YYSYMBOL_insert_statement = 167,         /* insert_statement  */
  YYSYMBOL_values_or_query_spec = 168,     /* values_or_query_spec  */
  YYSYMBOL_insert_atom_commalist = 169,    /* insert_atom_commalist  */
  YYSYMBOL_insert_atom = 170,              /* insert_atom  */
  YYSYMBOL_open_statement = 171,           /* open_statement  */
  YYSYMBOL_rollback_statement = 172,       /* rollback_statement  */
  YYSYMBOL_select_statement = 173,         /* select_statement  */
  YYSYMBOL_opt_all_distinct = 174,         /* opt_all_distinct  */
  YYSYMBOL_update_statement_positioned = 175, /* update_statement_positioned  */
  YYSYMBOL_assignment_commalist = 176,     /* assignment_commalist  */
  YYSYMBOL_assignment = 177,               /* assignment  */
  YYSYMBOL_update_statement_searched = 178, /* update_statement_searched  */
  YYSYMBOL_target_commalist = 179,         /* target_commalist  */
  YYSYMBOL_target = 180,                   /* target  */
  YYSYMBOL_opt_where_clause = 181,         /* opt_where_clause  */
  YYSYMBOL_query_exp = 182,                /* query_exp  */
  YYSYMBOL_query_term = 183,               /* query_term  */
  YYSYMBOL_query_spec = 184,               /* query_spec  */
  YYSYMBOL_selection = 185,                /* selection  */
  YYSYMBOL_table_exp = 186,                /* table_exp  */
  YYSYMBOL_from_clause = 187,              /* from_clause  */
  YYSYMBOL_join_ref = 188,                 /* join_ref  */
  YYSYMBOL_table_ref_commalist = 189,      /* table_ref_commalist  */
  YYSYMBOL_table_ref = 190,                /* table_ref  */
  YYSYMBOL_where_clause = 191,             /* where_clause  */
  YYSYMBOL_opt_group_by_clause = 192,      /* opt_group_by_clause  */
  YYSYMBOL_column_ref_commalist = 193,     /* column_ref_commalist  */
  YYSYMBOL_opt_having_clause = 194,        /* opt_having_clause  */
  YYSYMBOL_search_condition = 195,         /* search_condition  */
  YYSYMBOL_predicate = 196,                /* predicate  */
  YYSYMBOL_comparison_predicate = 197,     /* comparison_predicate  */
  YYSYMBOL_between_predicate = 198,        /* between_predicate  */
  YYSYMBOL_like_predicate = 199,           /* like_predicate  */
  YYSYMBOL_opt_escape = 200,               /* opt_escape  */
  YYSYMBOL_test_for_null = 201,            /* test_for_null  */
  YYSYMBOL_in_predicate = 202,             /* in_predicate  */
  YYSYMBOL_atom_commalist = 203,           /* atom_commalist  */
  YYSYMBOL_all_or_any_predicate = 204,     /* all_or_any_predicate  */
  YYSYMBOL_any_all_some = 205,             /* any_all_some  */
  YYSYMBOL_existence_test = 206,           /* existence_test  */
  YYSYMBOL_subquery = 207,                 /* subquery  */
  YYSYMBOL_scalar_exp = 208,               /* scalar_exp  */
  YYSYMBOL_scalar_exp_commalist = 209,     /* scalar_exp_commalist  */
  YYSYMBOL_atom = 210,                     /* atom  */
  YYSYMBOL_parameter_ref = 211,            /* parameter_ref  */
  YYSYMBOL_function_ref = 212,             /* function_ref  */
  YYSYMBOL_literal = 213,                  /* literal  */
  YYSYMBOL_string_literal = 214,           /* string_literal  */
  YYSYMBOL_table = 215,                    /* table  */
  YYSYMBOL_trigger_name = 216,             /* trigger_name  */
  YYSYMBOL_column_ref = 217,               /* column_ref  */
  YYSYMBOL_comparison = 218,               /* comparison  */
  YYSYMBOL_data_type = 219,                /* data_type  */
  YYSYMBOL_column = 220,                   /* column  */
  YYSYMBOL_cursor = 221,                   /* cursor  */
  YYSYMBOL_module = 222,                   /* module  */
  YYSYMBOL_parameter = 223,                /* parameter  */
  YYSYMBOL_procedure = 224,                /* procedure  */
  YYSYMBOL_range_variable = 225,           /* range_variable  */
  YYSYMBOL_user = 226                      /* user  */
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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

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
#define YYFINAL  69
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   705

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  118
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  109
/* YYNRULES -- Number of rules.  */
#define YYNRULES  281
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  503

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   362


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     113,   114,    12,    10,   115,    11,   116,    13,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   117,   112,
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
       5,     6,     7,     8,     9,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   101,   101,   108,   113,   118,   127,   135,   145,   154,
     156,   163,   168,   176,   183,   190,   197,   205,   215,   222,
     229,   239,   244,   252,   259,   269,   281,   284,   292,   299,
     306,   313,   322,   331,   340,   347,   355,   367,   374,   381,
     392,   404,   414,   419,   427,   440,   443,   451,   454,   461,
     474,   477,   484,   491,   498,   508,   513,   521,   526,   531,
     536,   541,   551,   556,   564,   568,   575,   582,   589,   591,
     595,   596,   597,   598,   599,   600,   603,   605,   609,   610,
     614,   619,   622,   630,   635,   644,   652,   664,   667,   671,
     678,   679,   683,   688,   693,   701,   702,   706,   707,   712,
     722,   729,   736,   743,   750,   751,   752,   753,   754,   755,
     756,   760,   764,   768,   770,   774,   782,   792,   796,   807,
     814,   824,   829,   837,   841,   848,   852,   856,   871,   874,
     878,   885,   889,   890,   895,   903,   910,   920,   931,   936,
     944,   952,   955,   963,   973,   979,   986,   996,  1003,  1014,
    1026,  1033,  1048,  1055,  1068,  1074,  1080,  1086,  1093,  1101,
    1109,  1121,  1126,  1134,  1141,  1149,  1157,  1168,  1176,  1179,
    1186,  1191,  1200,  1203,  1212,  1220,  1228,  1235,  1242,  1251,
    1258,  1265,  1272,  1279,  1286,  1293,  1303,  1312,  1324,  1333,
    1345,  1354,  1367,  1370,  1377,  1384,  1394,  1403,  1412,  1421,
    1433,  1438,  1446,  1458,  1462,  1466,  1473,  1480,  1489,  1499,
    1509,  1517,  1525,  1533,  1541,  1549,  1557,  1563,  1569,  1575,
    1584,  1589,  1597,  1604,  1611,  1621,  1622,  1623,  1627,  1634,
    1642,  1649,  1657,  1664,  1673,  1677,  1684,  1691,  1698,  1705,
    1712,  1723,  1731,  1743,  1749,  1759,  1765,  1775,  1781,  1791,
    1801,  1808,  1819,  1830,  1841,  1842,  1843,  1844,  1845,  1846,
    1850,  1857,  1864,  1870,  1877,  1885,  1891,  1898,  1906,  1912,
    1918,  1924,  1930,  1936,  1943,  1954,  1960,  1966,  1973,  1979,
    1985,  1991
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NAME", "STRING",
  "INTNUM", "APPROXNUM", "OR", "AND", "NOT", "'+'", "'-'", "'*'", "'/'",
  "UMINUS", "ALL", "AMMSC", "ANY", "AS", "ASC", "AUTHORIZATION", "BETWEEN",
  "BY", "CHARACTER", "CHECK", "CLOSE", "COMMIT", "CREATE", "CURRENT",
  "CURSOR", "DATE_LITERAL", "DECIMAL2", "DECLARE", "DEFAULT", "DELETE2",
  "DESC", "DISTINCT", "DOUBLE2", "DROP", "EQUALS", "ESCAPE", "EXISTS",
  "FETCH", "FLOAT2", "FOR", "FOREIGN", "FROM", "GRANT", "GREATER_THAN",
  "GREATER_THAN_EQ", "GROUP", "HAVING", "IN2", "INDICATOR", "INNER",
  "INSERT", "INTEGER", "INTO", "IS", "JOIN", "KEY", "LANGUAGE", "LEFT",
  "LESS_THAN", "LESS_THAN_EQ", "LIKE", "MODULE", "NOT_EQUALS", "NULLX",
  "NUMERIC", "OF", "ON", "OPEN", "OPTION", "ORDER", "OUTER", "PRECISION",
  "PRIMARY", "PRIVILEGES", "PROCEDURE", "PUBLIC", "REAL", "REFERENCES",
  "RIGHT", "ROLLBACK", "SCHEMA", "SELECT", "SET", "SMALLINT", "SOME",
  "SQLCODE", "SYSDATE", "TABLE", "TIME_LITERAL", "TO", "TRIGGER", "UNION",
  "UNIQUE", "UPDATE", "USER", "VALUES", "VIEW", "WHERE", "WITH", "WORK",
  "COBOL", "FORTRAN", "PASCAL2", "PLI", "C", "ADA", "VARCHAR", "';'",
  "'('", "')'", "','", "'.'", "':'", "$accept", "root", "sql_list", "sql",
  "schema", "opt_schema_element_list", "schema_element_list",
  "schema_element", "drop_trigger", "drop_table", "base_table_def",
  "base_table_element_commalist", "base_table_element", "column_def",
  "column_def_opt_list", "column_def_opt", "table_constraint_def",
  "column_commalist", "view_def", "opt_with_check_option",
  "opt_column_commalist", "privilege_def", "opt_with_grant_option",
  "privileges", "operation_commalist", "operation", "grantee_commalist",
  "grantee", "module_def", "opt_module", "lang", "opt_cursor_def_list",
  "cursor_def_list", "cursor_def", "opt_order_by_clause",
  "ordering_spec_commalist", "ordering_spec", "opt_asc_desc",
  "procedure_def_list", "procedure_def", "manipulative_statement_list",
  "parameter_def_list", "parameter_def", "manipulative_statement",
  "close_statement", "commit_statement", "delete_statement_positioned",
  "delete_statement_searched", "fetch_statement", "insert_statement",
  "values_or_query_spec", "insert_atom_commalist", "insert_atom",
  "open_statement", "rollback_statement", "select_statement",
  "opt_all_distinct", "update_statement_positioned",
  "assignment_commalist", "assignment", "update_statement_searched",
  "target_commalist", "target", "opt_where_clause", "query_exp",
  "query_term", "query_spec", "selection", "table_exp", "from_clause",
  "join_ref", "table_ref_commalist", "table_ref", "where_clause",
  "opt_group_by_clause", "column_ref_commalist", "opt_having_clause",
  "search_condition", "predicate", "comparison_predicate",
  "between_predicate", "like_predicate", "opt_escape", "test_for_null",
  "in_predicate", "atom_commalist", "all_or_any_predicate", "any_all_some",
  "existence_test", "subquery", "scalar_exp", "scalar_exp_commalist",
  "atom", "parameter_ref", "function_ref", "literal", "string_literal",
  "table", "trigger_name", "column_ref", "comparison", "data_type",
  "column", "cursor", "module", "parameter", "procedure", "range_variable",
  "user", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-364)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     545,    91,    -6,    46,    21,   -18,    91,   520,   144,   134,
      91,    28,    26,   204,   225,   545,   127,  -364,  -364,  -364,
    -364,  -364,  -364,  -364,  -364,  -364,  -364,  -364,  -364,  -364,
    -364,  -364,  -364,  -364,  -364,  -364,  -364,  -364,  -364,  -364,
    -364,   245,   204,   204,   154,   204,   141,   204,   252,   220,
     202,  -364,  -364,   168,  -364,   168,   222,   186,  -364,   204,
    -364,   221,  -364,  -364,  -364,  -364,  -364,   526,   208,  -364,
     198,  -364,   316,   214,   168,   327,   237,   312,  -364,  -364,
    -364,   228,  -364,   249,  -364,   360,  -364,  -364,   204,   163,
     168,   440,    33,  -364,  -364,  -364,   526,   526,  -364,   260,
    -364,  -364,   526,   118,   549,   263,  -364,  -364,   381,  -364,
     360,  -364,  -364,   219,   171,   362,  -364,   365,  -364,   464,
     326,   294,   464,   266,  -364,  -364,  -364,  -364,  -364,  -364,
    -364,  -364,   638,   354,   415,   416,   305,  -364,  -364,   -20,
    -364,   177,  -364,   329,  -364,   -25,  -364,  -364,  -364,  -364,
    -364,  -364,   402,  -364,   421,   226,   210,   210,   248,   169,
     204,   249,   352,   325,  -364,   526,   526,   526,   526,   426,
     526,  -364,   102,  -364,   391,   139,  -364,   219,  -364,   318,
     372,   378,   331,   188,  -364,  -364,  -364,   497,   359,   369,
    -364,    91,   359,  -364,    15,   223,   464,   464,    75,   526,
    -364,  -364,  -364,   335,  -364,  -364,   106,  -364,   398,    38,
    -364,  -364,   249,   249,  -364,  -364,   360,    27,    26,   336,
    -364,  -364,   316,  -364,    35,  -364,   337,   526,   447,  -364,
     180,   339,  -364,   340,   246,   212,     9,   432,  -364,   464,
     407,   376,   376,   210,   210,  -364,   549,   431,   360,  -364,
     496,  -364,   464,   347,   349,   360,  -364,   171,   350,   351,
     389,  -364,  -364,   358,  -364,  -364,   364,  -364,   379,    91,
    -364,   367,  -364,   475,  -364,   526,   371,   106,   583,    22,
    -364,   370,  -364,   445,  -364,  -364,  -364,  -364,  -364,   511,
     294,  -364,   549,   420,  -364,  -364,  -364,  -364,  -364,   -45,
    -364,  -364,   526,    60,   458,  -364,   489,   490,  -364,   286,
      51,   383,  -364,  -364,   204,   246,   204,   423,   428,  -364,
    -364,   492,  -364,  -364,   166,   482,   459,   439,  -364,  -364,
     549,    42,   360,   360,   192,  -364,   508,   513,  -364,   514,
     528,   187,   501,  -364,  -364,  -364,   650,    22,  -364,   445,
     526,   199,  -364,   527,   106,  -364,  -364,  -364,   504,    27,
    -364,   509,  -364,   211,  -364,  -364,    91,   479,   458,  -364,
    -364,  -364,  -364,   540,  -364,  -364,  -364,   289,   246,   246,
    -364,   167,   448,  -364,   167,   447,   464,  -364,    91,  -364,
     218,   232,  -364,   451,   235,   240,   454,   512,   456,   353,
     204,  -364,   503,   526,   277,  -364,   549,  -364,   106,  -364,
     515,  -364,  -364,    60,   552,   581,   479,  -364,  -364,   464,
    -364,  -364,  -364,  -364,  -364,  -364,   166,  -364,   483,  -364,
     266,  -364,   517,  -364,  -364,  -364,   600,  -364,   602,  -364,
      73,   464,  -364,  -364,  -364,   499,  -364,   549,  -364,  -364,
    -364,  -364,   566,  -364,    24,  -364,   328,  -364,   447,   204,
     500,   502,   553,  -364,    52,   360,    44,  -364,   -44,  -364,
     497,  -364,  -364,   510,  -364,  -364,  -364,  -364,   284,    44,
      39,  -364,  -364,   548,  -364,  -364,   360,  -364,    80,     6,
    -364,    26,   548,  -364,   302,  -364,    44,  -364,   526,  -364,
    -364,  -364,   558
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
       0,     0,   128,     0,     0,     2,     5,     6,     7,    16,
      17,    13,    14,    15,    66,    99,   104,   105,   106,   100,
     107,   101,   108,   109,   102,   110,   103,   143,   276,   111,
     112,     0,     0,     0,   243,     0,   141,     0,     0,     0,
      53,    59,    58,    47,    57,    47,     0,    54,    55,     0,
     277,     0,    69,   125,   126,   129,   130,     0,     0,     1,
       0,     3,     0,     0,    47,     0,   141,     0,   116,   142,
      19,   245,    18,     0,    52,     0,    61,    60,     0,     0,
      47,     0,   247,   241,   235,   236,     0,     0,   237,     0,
     239,   240,     0,     0,   220,   150,   218,   216,   234,   217,
     132,     4,   281,     9,     0,     0,   244,     0,   115,     0,
       0,     0,     0,   167,   178,   179,   183,   184,   181,   180,
     185,   182,     0,   217,     0,     0,   117,   138,   140,   225,
     275,     0,    42,     0,    56,     0,    70,    71,    72,    73,
      74,    75,     0,   248,     0,     0,   214,   215,     0,     0,
       0,     0,    81,   141,   208,     0,     0,     0,     0,     0,
       0,   242,   141,   133,     0,     0,     8,    10,    11,     0,
       0,     0,     0,     0,    21,    23,    24,     0,     0,     0,
     176,     0,     0,   206,     0,     0,     0,     0,     0,     0,
     254,   256,   258,     0,   257,   259,     0,   255,     0,     0,
     246,   278,     0,     0,   226,    48,     0,     0,   128,     0,
     118,   120,     0,   249,   250,   238,   237,     0,     0,   233,
       0,   217,   219,   152,   161,   163,     0,     0,   149,     0,
     168,   210,   211,   212,   213,   209,   221,     0,     0,   137,
       0,    12,     0,     0,     0,     0,    20,     0,   260,   265,
       0,   270,   268,   262,   271,   269,   273,    26,    45,     0,
     114,     0,   177,   174,   175,     0,     0,     0,     0,     0,
     197,     0,   224,   192,   222,   223,   204,   203,   205,     0,
       0,   187,   186,     0,   195,   139,   227,    43,    64,    50,
      62,    65,     0,     0,    76,   251,     0,     0,   228,     0,
     247,     0,   232,   230,     0,     0,     0,     0,     0,   153,
     164,     0,   166,   127,     0,     0,   172,     0,   134,   136,
     135,     0,     0,     0,     0,    22,     0,     0,   272,     0,
       0,    25,     0,    44,   113,   207,     0,     0,   196,   192,
       0,     0,   200,     0,     0,   191,   202,   194,     0,     0,
      49,     0,   124,     0,   121,   123,     0,     0,    77,    78,
     252,   253,   231,     0,   229,   162,   154,   157,     0,     0,
     165,    87,    82,    83,    87,     0,     0,   151,     0,    41,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,     0,     0,   190,   189,   199,     0,   193,
       0,    63,   119,     0,     0,     0,    67,    90,    79,     0,
     158,   155,   156,    88,    89,    86,     0,    85,   169,   170,
     173,   131,     0,    38,   261,   266,     0,   263,     0,   274,
      28,     0,    32,    33,    31,    35,    46,   188,   198,   201,
      51,   122,     0,   279,     0,    91,   159,    84,     0,     0,
       0,     0,     0,    29,     0,     0,     0,    98,     0,    95,
       0,   160,   171,    39,   267,   264,    30,    34,     0,     0,
      81,   144,   147,     0,    96,    97,     0,    36,     0,     0,
      80,   128,    92,    93,     0,   148,     0,   145,     0,    94,
      40,   146,     0
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -364,  -364,  -364,   606,  -364,  -364,  -364,   -78,  -364,  -364,
    -364,  -364,   368,  -364,  -364,  -364,  -364,  -244,  -364,  -364,
     129,  -364,  -364,  -364,  -364,   533,  -364,   267,  -364,  -364,
    -364,  -364,  -364,   259,   148,  -364,   207,   251,  -364,   224,
    -364,  -364,   162,  -236,  -364,  -364,  -364,  -364,  -364,  -364,
    -364,  -364,   229,  -364,  -364,  -364,  -212,  -364,  -364,   388,
    -364,   476,   433,   -47,   159,  -363,     0,  -286,   408,  -364,
    -296,  -364,  -108,  -364,  -364,  -364,  -364,  -110,  -364,  -364,
    -364,  -364,   303,  -364,  -364,   307,  -364,  -364,  -364,  -132,
     -65,  -364,  -186,   -66,  -364,  -199,  -364,    -3,  -364,   -74,
    -364,   185,   -96,    -2,  -364,  -134,  -364,  -364,   -59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    14,    15,    16,    17,   176,   177,    18,    19,    20,
      21,   183,   184,   185,   341,   401,   186,   141,    22,   343,
      86,    23,   360,    56,    57,    58,   299,   300,    24,    61,
     152,   367,   368,   369,   238,   382,   383,   425,   416,   417,
     492,   468,   469,    25,    26,    27,    28,    29,    30,    31,
     220,   363,   364,    32,    33,    34,    67,    35,   172,   173,
      36,   136,   137,    78,   480,   481,   271,   103,   162,   163,
     319,   233,   234,    79,   326,   428,   387,   123,   124,   125,
     126,   127,   355,   128,   129,   351,   130,   290,   131,   193,
     132,   105,   352,   284,   106,   107,   108,   235,    82,   109,
     208,   267,   142,    39,    62,   139,   454,   322,   301
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,    46,   104,   133,    49,   214,   302,   285,    63,   190,
      68,   334,   194,   113,   174,    37,   361,   138,   187,   376,
     283,   496,   196,   197,    44,   281,    93,    94,    95,   118,
     112,   156,   157,   213,    98,   178,   153,   159,   305,    73,
      74,    65,    76,   133,    80,   133,   467,   293,   133,   196,
     197,   154,   100,   306,   153,   160,    90,   195,   358,   196,
     197,   218,    66,   281,    93,    94,    95,    45,   483,   154,
     359,   280,    98,   135,    47,   219,   291,    48,   285,   296,
     285,   420,   421,   422,   231,   143,   273,   274,   390,   391,
     100,   349,   218,   230,    38,   138,   275,   135,    40,   251,
     241,   242,   243,   244,   285,   246,   294,   298,   218,   281,
      93,    94,    95,   237,   467,   101,   240,   365,    98,   479,
     297,   282,   133,   133,   212,   249,   497,   276,   362,   272,
     218,    41,    64,   501,   278,   489,   100,    60,    42,   135,
     277,   135,   331,   292,   348,   221,   138,    43,   285,   155,
     462,   307,   174,   101,   311,   285,   389,   479,   356,   282,
     471,   187,   309,   304,   160,   133,   477,   373,   409,   310,
     463,   381,   164,   133,   140,   161,   489,   135,   133,   165,
     166,   167,   168,   164,    87,   330,   423,   169,   268,   270,
     165,   166,   167,   168,   495,   179,   397,    51,   169,   101,
     444,    59,   424,   115,   247,   282,   375,    44,   377,   285,
     346,   398,   502,   164,   285,   320,   180,   248,    52,   145,
     399,   478,   449,   135,   159,    69,   164,   365,   169,   224,
     321,    42,   198,   165,   166,   167,   168,   104,   225,    71,
      43,   169,   494,    77,   199,    53,   175,   493,   181,    54,
     384,    92,    93,    94,    95,    81,   499,     5,    96,    97,
     226,    55,   200,   227,    99,    72,     7,   344,   182,   400,
      75,   201,   202,   196,   197,   203,   430,    83,   100,   498,
      84,    85,    91,   232,   228,   406,   204,   205,   206,   164,
     207,   215,   216,    88,   312,   110,   165,   166,   167,   168,
     315,    89,   256,   257,   169,   316,   392,   216,   317,   456,
     111,   429,   133,   407,   408,    92,    93,    94,    95,   112,
     470,   119,    96,    97,    98,   412,   413,   114,    99,   318,
     116,   464,   432,   216,   470,   196,   197,   232,   447,   117,
     120,   101,   100,   315,   134,   133,   433,   216,   316,   435,
     436,   317,   384,   121,   437,   438,   281,    93,    94,    95,
     419,   102,   229,   140,   414,    98,   135,   133,    92,    93,
      94,    95,   318,   158,   119,    96,    97,    98,   170,   164,
     188,    99,   315,   100,   472,   171,   431,   316,   167,   168,
     317,   448,   408,   189,   169,   100,   191,   445,   487,   216,
     372,    92,    93,    94,    95,   101,   121,   192,    96,    97,
      98,   318,   209,   286,    99,   287,   500,   216,   210,   211,
     212,   442,   222,   217,   223,   122,   237,   239,   100,   245,
     250,   252,   253,   104,    92,    93,    94,    95,   254,   269,
     119,    96,    97,    98,   255,   218,   101,    99,   279,   303,
     310,   308,   443,   313,   324,   314,   473,   325,   101,   327,
     332,   100,   333,   336,   337,   338,   482,    92,    93,    94,
      95,   339,   121,   119,    96,    97,    98,   340,   122,   482,
      99,   345,   342,   197,   347,   354,   353,   288,   357,   482,
     366,   101,   370,   371,   100,   380,   482,   374,   378,    92,
      93,    94,    95,   379,   385,   121,    96,    97,    98,   388,
     386,   289,    99,   393,    92,    93,    94,    95,   394,   395,
     258,    96,    97,    98,   101,   402,   100,    99,   259,    92,
      93,    94,    95,   396,   260,    50,    96,    97,    98,   225,
     261,   100,    99,   224,   122,   146,   147,   148,   149,   150,
     151,   410,   164,   262,    51,   160,   100,   101,   415,   165,
     166,   167,   168,   426,   329,   434,   263,   169,   439,   441,
       1,     2,     3,     1,     2,    52,   446,   122,   264,     4,
     440,   452,     4,     5,   453,   265,   164,     6,   450,   101,
       6,   350,     7,   165,   166,   167,   168,   218,   458,   459,
       8,   169,    53,     8,   101,   460,    54,   461,   266,   102,
     466,     9,   465,   476,   474,   161,   475,    10,    55,   101,
      10,    70,   144,   486,   102,   335,   411,   418,   490,    11,
     484,    12,    11,   457,   491,   427,   328,   236,   488,   102,
     455,   164,   451,    13,   323,   295,    13,   198,   165,   166,
     167,   168,   405,   164,   404,   485,   169,     0,   403,   199,
     165,   166,   167,   168,     0,     0,     0,     0,   169,     0,
       0,     0,     0,     0,     0,     0,     0,   200,     0,     0,
       0,     0,     0,     0,     0,     0,   201,   202,     0,     0,
     203,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   204,   205,   206,     0,   207
};

static const yytype_int16 yycheck[] =
{
       0,     4,    67,    77,     6,   139,   218,   206,    10,   119,
      13,   255,   122,    72,   110,    15,   302,    83,   114,   315,
     206,    15,     7,     8,     3,     3,     4,     5,     6,    76,
       3,    96,    97,    53,    12,   113,     3,   102,     3,    42,
      43,    15,    45,   117,    47,   119,    90,     9,   122,     7,
       8,    18,    30,    18,     3,    46,    59,   122,   103,     7,
       8,    86,    36,     3,     4,     5,     6,    46,   112,    18,
     115,   203,    12,   117,    92,   100,   208,    95,   277,   213,
     279,   377,   378,   379,   158,    88,   196,   197,   332,   333,
      30,   277,    86,   158,     3,   161,    21,   117,   104,   177,
     165,   166,   167,   168,   303,   170,    68,    80,    86,     3,
       4,     5,     6,    74,    90,    93,   163,   303,    12,   113,
     216,    99,   196,   197,   115,   172,   489,    52,    68,   114,
      86,    85,   104,   496,   199,    96,    30,     3,    92,   117,
      65,   117,   252,   208,   276,   145,   212,   101,   347,   116,
      77,   116,   248,    93,   228,   354,   114,   113,   290,    99,
     456,   257,   227,   222,    46,   239,   114,   116,   354,     3,
      97,     5,     3,   247,     3,    57,    96,   117,   252,    10,
      11,    12,    13,     3,    55,   250,    19,    18,   188,   191,
      10,    11,    12,    13,   114,    24,     9,    34,    18,    93,
     399,    57,    35,    74,   102,    99,   314,     3,   316,   408,
     275,    24,   498,     3,   413,     3,    45,   115,    55,    90,
      33,   465,   408,   117,   289,     0,     3,   413,    18,     3,
      18,    92,     9,    10,    11,    12,    13,   302,    12,   112,
     101,    18,   486,   102,    21,    82,    27,   483,    77,    86,
     324,     3,     4,     5,     6,     3,   492,    38,    10,    11,
      12,    98,    39,    15,    16,    20,    47,   269,    97,    82,
     116,    48,    49,     7,     8,    52,   386,    57,    30,   491,
      78,   113,    61,   114,    36,   350,    63,    64,    65,     3,
      67,   114,   115,    71,   114,    87,    10,    11,    12,    13,
      54,   115,   114,   115,    18,    59,   114,   115,    62,   419,
     112,   385,   386,   114,   115,     3,     4,     5,     6,     3,
     454,     9,    10,    11,    12,   114,   115,   113,    16,    83,
       3,   441,   114,   115,   468,     7,     8,   114,   403,   102,
      28,    93,    30,    54,   116,   419,   114,   115,    59,   114,
     115,    62,   426,    41,   114,   115,     3,     4,     5,     6,
      71,   113,   114,     3,   366,    12,   117,   441,     3,     4,
       5,     6,    83,   113,     9,    10,    11,    12,   115,     3,
      18,    16,    54,    30,   458,     4,   388,    59,    12,    13,
      62,   114,   115,    28,    18,    30,    70,   400,   114,   115,
     114,     3,     4,     5,     6,    93,    41,   113,    10,    11,
      12,    83,    58,    15,    16,    17,   114,   115,     3,     3,
     115,    68,    20,    94,     3,   113,    74,   102,    30,     3,
      39,   113,    60,   498,     3,     4,     5,     6,    60,    70,
       9,    10,    11,    12,   113,    86,    93,    16,   113,   113,
       3,   114,    99,   114,    22,   115,   459,    50,    93,    28,
     113,    30,   113,   113,   113,    76,   466,     3,     4,     5,
       6,   113,    41,     9,    10,    11,    12,   113,   113,   479,
      16,   114,   103,     8,   113,    40,   116,    89,    68,   489,
      32,    93,     3,     3,    30,     3,   496,   114,    75,     3,
       4,     5,     6,    75,    22,    41,    10,    11,    12,    70,
      51,   113,    16,     5,     3,     4,     5,     6,     5,     5,
      23,    10,    11,    12,    93,    24,    30,    16,    31,     3,
       4,     5,     6,     5,    37,    15,    10,    11,    12,    12,
      43,    30,    16,     3,   113,   105,   106,   107,   108,   109,
     110,    47,     3,    56,    34,    46,    30,    93,    79,    10,
      11,    12,    13,   115,    68,   114,    69,    18,   114,   113,
      25,    26,    27,    25,    26,    55,    73,   113,    81,    34,
      68,    29,    34,    38,     3,    88,     3,    42,    73,    93,
      42,     8,    47,    10,    11,    12,    13,    86,   115,    82,
      55,    18,    82,    55,    93,     5,    86,     5,   111,   113,
      44,    66,   113,    60,   114,    57,   114,    72,    98,    93,
      72,    15,    89,   113,   113,   257,   359,   368,   480,    84,
     468,    86,    84,   426,    86,   384,   248,   161,   479,   113,
     416,     3,   413,    98,   236,   212,    98,     9,    10,    11,
      12,    13,   349,     3,   347,   470,    18,    -1,     8,    21,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    -1,    67
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    26,    27,    34,    38,    42,    47,    55,    66,
      72,    84,    86,    98,   119,   120,   121,   122,   125,   126,
     127,   128,   136,   139,   146,   161,   162,   163,   164,   165,
     166,   167,   171,   172,   173,   175,   178,   184,     3,   221,
     104,    85,    92,   101,     3,    46,   215,    92,    95,   221,
      15,    34,    55,    82,    86,    98,   141,   142,   143,    57,
       3,   147,   222,   221,   104,    15,    36,   174,   215,     0,
     121,   112,    20,   215,   215,   116,   215,   102,   181,   191,
     215,     3,   216,    57,    78,   113,   138,   138,    71,   115,
     215,    61,     3,     4,     5,     6,    10,    11,    12,    16,
      30,    93,   113,   185,   208,   209,   212,   213,   214,   217,
      87,   112,     3,   226,   113,   138,     3,   102,   181,     9,
      28,    41,   113,   195,   196,   197,   198,   199,   201,   202,
     204,   206,   208,   217,   116,   117,   179,   180,   211,   223,
       3,   135,   220,   215,   143,   138,   105,   106,   107,   108,
     109,   110,   148,     3,    18,   116,   208,   208,   113,   208,
      46,    57,   186,   187,     3,    10,    11,    12,    13,    18,
     115,     4,   176,   177,   220,    27,   123,   124,   125,    24,
      45,    77,    97,   129,   130,   131,   134,   220,    18,    28,
     195,    70,   113,   207,   195,   208,     7,     8,     9,    21,
      39,    48,    49,    52,    63,    64,    65,    67,   218,    58,
       3,     3,   115,    53,   223,   114,   115,    94,    86,   100,
     168,   184,    20,     3,     3,    12,    12,    15,    36,   114,
     208,   217,   114,   189,   190,   215,   179,    74,   152,   102,
     181,   208,   208,   208,   208,     3,   208,   102,   115,   181,
      39,   125,   113,    60,    60,   113,   114,   115,    23,    31,
      37,    43,    56,    69,    81,    88,   111,   219,   184,    70,
     221,   184,   114,   195,   195,    21,    52,    65,   208,   113,
     207,     3,    99,   210,   211,   213,    15,    17,    89,   113,
     205,   207,   208,     9,    68,   180,   223,   220,    80,   144,
     145,   226,   174,   113,   226,     3,    18,   116,   114,   208,
       3,   217,   114,   114,   115,    54,    59,    62,    83,   188,
       3,    18,   225,   186,    22,    50,   192,    28,   177,    68,
     208,   195,   113,   113,   135,   130,   113,   113,    76,   113,
     113,   132,   103,   137,   221,   114,   208,   113,   207,   210,
       8,   203,   210,   116,    40,   200,   207,    68,   103,   115,
     140,   185,    68,   169,   170,   210,    32,   149,   150,   151,
       3,     3,   114,   116,   114,   190,   188,   190,    75,    75,
       3,     5,   153,   154,   217,    22,    51,   194,    70,   114,
     135,   135,   114,     5,     5,     5,     5,     9,    24,    33,
      82,   133,    24,     8,   203,   200,   208,   114,   115,   210,
      47,   145,   114,   115,   221,    79,   156,   157,   151,    71,
     188,   188,   188,    19,    35,   155,   115,   155,   193,   217,
     195,   221,   114,   114,   114,   114,   115,   114,   115,   114,
      68,   113,    68,    99,   213,   215,    73,   208,   114,   210,
      73,   170,    29,     3,   224,   157,   195,   154,   115,    82,
       5,     5,    77,    97,   195,   113,    44,    90,   159,   160,
     223,   188,   217,   215,   114,   114,    60,   114,   135,   113,
     182,   183,   184,   112,   160,   219,   113,   114,   182,    96,
     152,    86,   158,   161,   135,   114,    15,   183,   174,   161,
     114,   183,   185
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   118,   119,   120,   120,   120,   121,   121,   122,   123,
     123,   124,   124,   125,   125,   125,   125,   125,   126,   127,
     128,   129,   129,   130,   130,   131,   132,   132,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   134,   134,   134,
     134,   134,   135,   135,   136,   137,   137,   138,   138,   139,
     140,   140,   141,   141,   141,   142,   142,   143,   143,   143,
     143,   143,   144,   144,   145,   145,   121,   146,   147,   147,
     148,   148,   148,   148,   148,   148,   149,   149,   150,   150,
     151,   152,   152,   153,   153,   154,   154,   155,   155,   155,
     156,   156,   157,   158,   158,   159,   159,   160,   160,   121,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   162,   163,   164,   164,   165,   165,   166,   167,   168,
     168,   169,   169,   170,   170,   171,   172,   173,   174,   174,
     174,   175,   176,   176,   176,   177,   177,   178,   179,   179,
     180,   181,   181,   121,   182,   182,   182,   183,   183,   184,
     185,   186,   187,   187,   188,   188,   188,   188,   188,   188,
     188,   189,   189,   190,   190,   190,   190,   191,   192,   192,
     193,   193,   194,   194,   195,   195,   195,   195,   195,   196,
     196,   196,   196,   196,   196,   196,   197,   197,   198,   198,
     199,   199,   200,   200,   201,   201,   202,   202,   202,   202,
     203,   203,   204,   205,   205,   205,   206,   207,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     209,   209,   210,   210,   210,   211,   211,   211,   212,   212,
     212,   212,   212,   212,   213,   213,   213,   213,   213,   213,
     213,   214,   214,   215,   215,   216,   216,   217,   217,   217,
     217,   217,   217,   217,   218,   218,   218,   218,   218,   218,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   220,   221,   222,   223,   224,
     225,   226
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     3,     1,     1,     1,     5,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     3,     3,
       6,     1,     3,     1,     1,     3,     0,     2,     2,     3,
       4,     2,     2,     2,     4,     2,     5,     4,     5,     7,
      10,     4,     1,     3,     7,     0,     3,     0,     3,     7,
       0,     3,     2,     1,     1,     1,     3,     1,     1,     1,
       2,     2,     1,     3,     1,     1,     1,     8,     0,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     2,
       6,     0,     3,     1,     3,     2,     2,     0,     1,     1,
       1,     2,     5,     1,     2,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     7,     6,     4,     3,     4,     5,     4,
       1,     1,     3,     1,     1,     2,     2,     6,     0,     1,
       1,     8,     0,     1,     3,     3,     3,     5,     1,     3,
       1,     0,     1,     1,     1,     3,     4,     1,     3,     5,
       1,     4,     2,     3,     2,     3,     3,     2,     3,     4,
       5,     1,     3,     1,     2,     3,     2,     2,     0,     3,
       1,     3,     0,     2,     3,     3,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     6,     5,
       5,     4,     0,     2,     4,     3,     4,     3,     6,     5,
       1,     3,     4,     1,     1,     1,     2,     3,     2,     3,
       3,     3,     3,     3,     2,     2,     1,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     2,     3,     4,     5,
       4,     5,     4,     3,     1,     1,     1,     1,     3,     1,
       1,     1,     2,     1,     3,     1,     3,     1,     2,     3,
       3,     4,     5,     5,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     4,     6,     1,     4,     6,     1,     1,
       1,     1,     2,     1,     4,     1,     1,     1,     2,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (root, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

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
                  Kind, Value, root); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, void *root)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (root);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, void *root)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, root);
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
                 int yyrule, void *root)
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
                       &yyvsp[(yyi + 1) - (yynrhs)], root);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, root); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, void *root)
{
  YY_USE (yyvaluep);
  YY_USE (root);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void *root)
{
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

  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
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
  yychar = YYEMPTY;
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
  case 2: /* root: sql_list  */
#line 102 "sqlgrammar.y"
                {
			*((sql_list_t**)root) = (sql_list_t*)yyvsp[0];
		}
#line 1782 "sqlgrammar.tab.c"
    break;

  case 3: /* sql_list: sql ';'  */
#line 109 "sqlgrammar.y"
                {
			yyval = _sql_create_list();
			_sql_add_tail(yyval, yyvsp[-1]);
		}
#line 1791 "sqlgrammar.tab.c"
    break;

  case 4: /* sql_list: sql_list sql ';'  */
#line 114 "sqlgrammar.y"
                {
			_sql_add_tail(yyvsp[-2], yyvsp[-1]); 
			yyval = yyvsp[-2];
		}
#line 1800 "sqlgrammar.tab.c"
    break;

  case 5: /* sql_list: sql  */
#line 119 "sqlgrammar.y"
                {
			yyval = _sql_create_list();
			_sql_add_tail(yyval, yyvsp[0]);
		}
#line 1809 "sqlgrammar.tab.c"
    break;

  case 6: /* sql: schema  */
#line 128 "sqlgrammar.y"
                        {
				sql_declare(sql_t, psql);
				psql->which = 0;
				psql->pschema = (schema_t*)yyvsp[0];
				yyval = (LITEM)psql;
			}
#line 1820 "sqlgrammar.tab.c"
    break;

  case 7: /* sql: schema_element  */
#line 136 "sqlgrammar.y"
                        {
				sql_declare(sql_t, psql);
				psql->which = 4;
				psql->pschema_element = (schema_element_t*)yyvsp[0];
				yyval = (LITEM)psql;
			}
#line 1831 "sqlgrammar.tab.c"
    break;

  case 8: /* schema: CREATE SCHEMA AUTHORIZATION user opt_schema_element_list  */
#line 146 "sqlgrammar.y"
                {
			schema_t *pschema = sql_alloc(schema_t);
			pschema->puser = (user_t*)yyvsp[-1];
			pschema->plist = yyvsp[0];
			yyval = (LITEM)pschema;
		}
#line 1842 "sqlgrammar.tab.c"
    break;

  case 10: /* opt_schema_element_list: schema_element_list  */
#line 157 "sqlgrammar.y"
                {
			yyval = yyvsp[0];
		}
#line 1850 "sqlgrammar.tab.c"
    break;

  case 11: /* schema_element_list: schema_element  */
#line 164 "sqlgrammar.y"
                {
			yyval = _sql_create_list();
			_sql_add_tail(yyval, yyvsp[0]);
		}
#line 1859 "sqlgrammar.tab.c"
    break;

  case 12: /* schema_element_list: schema_element_list schema_element  */
#line 169 "sqlgrammar.y"
                {
			_sql_add_tail(yyvsp[-1], yyvsp[0]); 
			yyval = yyvsp[-1];
		}
#line 1868 "sqlgrammar.tab.c"
    break;

  case 13: /* schema_element: base_table_def  */
#line 177 "sqlgrammar.y"
                {
			schema_element_t *pelement = sql_alloc(schema_element_t);
			pelement->which = 0;
			pelement->ptabledef = (base_table_def_t *)yyvsp[0];
			yyval = (LITEM)pelement;
		}
#line 1879 "sqlgrammar.tab.c"
    break;

  case 14: /* schema_element: view_def  */
#line 184 "sqlgrammar.y"
                {
			schema_element_t *pelement = sql_alloc(schema_element_t);
			pelement->which = 1;
			pelement->pviewdef = (view_def_t *)yyvsp[0];
			yyval = (LITEM)pelement;
		}
#line 1890 "sqlgrammar.tab.c"
    break;

  case 15: /* schema_element: privilege_def  */
#line 191 "sqlgrammar.y"
                {
			schema_element_t *pelement = sql_alloc(schema_element_t);
			pelement->which = 2;
			pelement->pprivilegedef = (privilege_def_t *)yyvsp[0];
			yyval = (LITEM)pelement;
		}
#line 1901 "sqlgrammar.tab.c"
    break;

  case 16: /* schema_element: drop_trigger  */
#line 198 "sqlgrammar.y"
                {
			schema_element_t *pelement = sql_alloc(schema_element_t);
			pelement->which = 3;
			pelement->pdroptrigger = (drop_trigger_t*)yyvsp[0];
			yyval = (LITEM)pelement;
		}
#line 1912 "sqlgrammar.tab.c"
    break;

  case 17: /* schema_element: drop_table  */
#line 206 "sqlgrammar.y"
                {
			schema_element_t *pelement = sql_alloc(schema_element_t);
			pelement->which = 4;
			pelement->pdroptable = (drop_table_t*)yyvsp[0];
			yyval = (LITEM)pelement;
		}
#line 1923 "sqlgrammar.tab.c"
    break;

  case 18: /* drop_trigger: DROP TRIGGER trigger_name  */
#line 216 "sqlgrammar.y"
                {
			yyval = yyvsp[0];
		}
#line 1931 "sqlgrammar.tab.c"
    break;

  case 19: /* drop_table: DROP TABLE table  */
#line 223 "sqlgrammar.y"
                {
			yyval = yyvsp[0];
		}
#line 1939 "sqlgrammar.tab.c"
    break;

  case 20: /* base_table_def: CREATE TABLE table '(' base_table_element_commalist ')'  */
#line 230 "sqlgrammar.y"
                {
			base_table_def_t *pdef = sql_alloc(base_table_def_t);
			pdef->ptable = (table_t*)yyvsp[-3];
			pdef->plist = yyvsp[-1];
			yyval = (LITEM)pdef;
		}
#line 1950 "sqlgrammar.tab.c"
    break;

  case 21: /* base_table_element_commalist: base_table_element  */
#line 240 "sqlgrammar.y"
                {
			yyval = _sql_create_list();
			_sql_add_tail(yyval, yyvsp[0]);
		}
#line 1959 "sqlgrammar.tab.c"
    break;

  case 22: /* base_table_element_commalist: base_table_element_commalist ',' base_table_element  */
#line 245 "sqlgrammar.y"
                {
			_sql_add_tail(yyvsp[-2], yyvsp[0]); 
			yyval = yyvsp[-2];
		}
#line 1968 "sqlgrammar.tab.c"
    break;

  case 23: /* base_table_element: column_def  */
#line 253 "sqlgrammar.y"
                {
			sql_declare(base_table_element_t, pelement);
			pelement->which = 0;
			pelement->pcolumn = (column_def_t*)yyvsp[0];
			yyval = (LITEM)pelement;
		}
#line 1979 "sqlgrammar.tab.c"
    break;

  case 24: /* base_table_element: table_constraint_def  */
#line 260 "sqlgrammar.y"
                {
			sql_declare(base_table_element_t, pelement);
			pelement->which = 1;
			pelement->pconstraint = (table_constraint_def_t*)yyvsp[0];
			yyval = (LITEM)pelement;
		}
#line 1990 "sqlgrammar.tab.c"
    break;

  case 25: /* column_def: column data_type column_def_opt_list  */
#line 270 "sqlgrammar.y"
                {
			sql_declare(column_def_t, pcolumn);
			pcolumn->pcolumn = (column_t)yyvsp[-2];
			pcolumn->ptype = (data_type_t*)yyvsp[-1];
			pcolumn->popt = yyvsp[0];
			yyval = (LITEM)pcolumn;
		}
#line 2002 "sqlgrammar.tab.c"
    break;

  case 26: /* column_def_opt_list: %empty  */
#line 281 "sqlgrammar.y"
        {
		yyval = (LITEM)NULL;
	}
#line 2010 "sqlgrammar.tab.c"
    break;

  case 27: /* column_def_opt_list: column_def_opt_list column_def_opt  */
#line 285 "sqlgrammar.y"
        {
			_sql_add_tail(yyvsp[-1], yyvsp[0]); 
			yyval = yyvsp[-1];
	}
#line 2019 "sqlgrammar.tab.c"
    break;

  case 28: /* column_def_opt: NOT NULLX  */
#line 293 "sqlgrammar.y"
                {
			sql_declare(column_def_opt_t, pdef);
			pdef->which = 0;
			pdef->notnull = NOT_NULLX;
			yyval = (LITEM)pdef;
		}
#line 2030 "sqlgrammar.tab.c"
    break;

  case 29: /* column_def_opt: NOT NULLX UNIQUE  */
#line 300 "sqlgrammar.y"
                {
			sql_declare(column_def_opt_t, pdef);
			pdef->which = 0;
			pdef->notnull = NOT_NULLX_UNIQUE;
			yyval = (LITEM)pdef;
		}
#line 2041 "sqlgrammar.tab.c"
    break;

  case 30: /* column_def_opt: NOT NULLX PRIMARY KEY  */
#line 307 "sqlgrammar.y"
                {
			sql_declare(column_def_opt_t, pdef);
			pdef->which = 0;
			pdef->notnull = NOT_NULLX_PKEY;
			yyval = (LITEM)pdef;
		}
#line 2052 "sqlgrammar.tab.c"
    break;

  case 31: /* column_def_opt: DEFAULT literal  */
#line 314 "sqlgrammar.y"
                {
			sql_declare(column_def_opt_t, pdef);
			pdef->which = 1;
			pdef->pdefault = sql_alloc(default_t);
			pdef->pdefault->which = 0;
			pdef->pdefault->pliteral = (literal_t*)yyvsp[0];
			yyval = (LITEM)pdef;
		}
#line 2065 "sqlgrammar.tab.c"
    break;

  case 32: /* column_def_opt: DEFAULT NULLX  */
#line 323 "sqlgrammar.y"
                {
			sql_declare(column_def_opt_t, pdef);
			pdef->which = 1;
			pdef->pdefault = sql_alloc(default_t);
			pdef->pdefault->which = 1;
			pdef->pdefault->nullx = IS_NULLX;
			yyval = (LITEM)pdef;
		}
#line 2078 "sqlgrammar.tab.c"
    break;

  case 33: /* column_def_opt: DEFAULT USER  */
#line 332 "sqlgrammar.y"
                {
			sql_declare(column_def_opt_t, pdef);
			pdef->which = 1;
			pdef->pdefault = sql_alloc(default_t);
			pdef->pdefault->which = 2;
			pdef->pdefault->puser = (char*)yyvsp[0];
			yyval = (LITEM)pdef;
		}
#line 2091 "sqlgrammar.tab.c"
    break;

  case 34: /* column_def_opt: CHECK '(' search_condition ')'  */
#line 341 "sqlgrammar.y"
                {
			sql_declare(column_def_opt_t, pdef);
			pdef->which = 2;
			pdef->psearch = (search_condition_t*)yyvsp[-1];
			yyval = (LITEM)pdef;
		}
#line 2102 "sqlgrammar.tab.c"
    break;

  case 35: /* column_def_opt: REFERENCES table  */
#line 348 "sqlgrammar.y"
                {
			sql_declare(column_def_opt_t, pdef);
			pdef->which = 3;
			pdef->preferences = sql_alloc(references_t);
			pdef->preferences->ptable = (table_t*)yyvsp[0];
			yyval = (LITEM)pdef;
		}
#line 2114 "sqlgrammar.tab.c"
    break;

  case 36: /* column_def_opt: REFERENCES table '(' column_commalist ')'  */
#line 356 "sqlgrammar.y"
                {
			sql_declare(column_def_opt_t, pdef);
			pdef->which = 3;
			pdef->preferences = sql_alloc(references_t);
			pdef->preferences->ptable = (table_t*)yyvsp[-3];
			pdef->preferences->pcolumns = yyvsp[-1];
			yyval = (LITEM)pdef;
		}
#line 2127 "sqlgrammar.tab.c"
    break;

  case 37: /* table_constraint_def: UNIQUE '(' column_commalist ')'  */
#line 368 "sqlgrammar.y"
                {
			sql_declare(table_constraint_def_t, pdef);
			pdef->which = 0;
			pdef->punique = yyvsp[-1];
			yyval = (LITEM)pdef;
		}
#line 2138 "sqlgrammar.tab.c"
    break;

  case 38: /* table_constraint_def: PRIMARY KEY '(' column_commalist ')'  */
#line 375 "sqlgrammar.y"
                {
			sql_declare(table_constraint_def_t, pdef);
			pdef->which = 1;
			pdef->pprimarykeys = yyvsp[-1];
			yyval = (LITEM)pdef;
		}
#line 2149 "sqlgrammar.tab.c"
    break;

  case 39: /* table_constraint_def: FOREIGN KEY '(' column_commalist ')' REFERENCES table  */
#line 383 "sqlgrammar.y"
                {
			sql_declare(table_constraint_def_t, pdef);
			pdef->which = 2;
			pdef->pforeignkey = sql_alloc(foreign_key_t);
			pdef->pforeignkey->pcolumns = yyvsp[-3];
			pdef->pforeignkey->preferences = sql_alloc(references_t);
			pdef->pforeignkey->preferences->ptable = (table_t*)yyvsp[0];
			yyval = (LITEM)pdef;
		}
#line 2163 "sqlgrammar.tab.c"
    break;

  case 40: /* table_constraint_def: FOREIGN KEY '(' column_commalist ')' REFERENCES table '(' column_commalist ')'  */
#line 394 "sqlgrammar.y"
                {
			sql_declare(table_constraint_def_t, pdef);
			pdef->which = 2;
			pdef->pforeignkey = sql_alloc(foreign_key_t);
			pdef->pforeignkey->pcolumns = yyvsp[-6];
			pdef->pforeignkey->preferences = sql_alloc(references_t);
			pdef->pforeignkey->preferences->ptable = (table_t*)yyvsp[-3];
			pdef->pforeignkey->preferences->pcolumns = yyvsp[-1];
			yyval = (LITEM)pdef;
		}
#line 2178 "sqlgrammar.tab.c"
    break;

  case 41: /* table_constraint_def: CHECK '(' search_condition ')'  */
#line 405 "sqlgrammar.y"
                {
			sql_declare(table_constraint_def_t, pdef);
			pdef->which = 3;
			pdef->pcheck = (search_condition_t*)yyvsp[-1];
			yyval = (LITEM)pdef;
		}
#line 2189 "sqlgrammar.tab.c"
    break;

  case 42: /* column_commalist: column  */
#line 415 "sqlgrammar.y"
                {
			yyval = _sql_create_list();
			_sql_add_tail(yyval, yyvsp[0]);
		}
#line 2198 "sqlgrammar.tab.c"
    break;

  case 43: /* column_commalist: column_commalist ',' column  */
#line 420 "sqlgrammar.y"
                {
			_sql_add_tail(yyvsp[-2], yyvsp[0]); 
			yyval = yyvsp[-2];
		}
#line 2207 "sqlgrammar.tab.c"
    break;

  case 44: /* view_def: CREATE VIEW table opt_column_commalist AS query_spec opt_with_check_option  */
#line 429 "sqlgrammar.y"
                {
			sql_declare(view_def_t, pdef);
			pdef->ptable = (table_t*)yyvsp[-4];
			pdef->pcolumns = yyvsp[-3];
			pdef->pquery = (query_spec_t*)yyvsp[-1];
			pdef->withcheck = yyvsp[0];
		}
#line 2219 "sqlgrammar.tab.c"
    break;

  case 45: /* opt_with_check_option: %empty  */
#line 440 "sqlgrammar.y"
                {
			yyval = 0;
		}
#line 2227 "sqlgrammar.tab.c"
    break;

  case 46: /* opt_with_check_option: WITH CHECK OPTION  */
#line 444 "sqlgrammar.y"
                {
			yyval = 1;
		}
#line 2235 "sqlgrammar.tab.c"
    break;

  case 47: /* opt_column_commalist: %empty  */
#line 451 "sqlgrammar.y"
                {
			yyval = (LITEM)NULL;
		}
#line 2243 "sqlgrammar.tab.c"
    break;

  case 48: /* opt_column_commalist: '(' column_commalist ')'  */
#line 455 "sqlgrammar.y"
                {
			yyval = yyvsp[-1];
		}
#line 2251 "sqlgrammar.tab.c"
    break;

  case 49: /* privilege_def: GRANT privileges ON table TO grantee_commalist opt_with_grant_option  */
#line 463 "sqlgrammar.y"
                {
			sql_declare(privilege_def_t, pdef);
			pdef->pprivs = (privileges_t*)yyvsp[-5];
			pdef->ptable = (table_t*)yyvsp[-3];
			pdef->pgrantees = yyvsp[-1];
			pdef->withgrant = yyvsp[0];
		}
#line 2263 "sqlgrammar.tab.c"
    break;

  case 50: /* opt_with_grant_option: %empty  */
#line 474 "sqlgrammar.y"
                {
			yyval = 0;
		}
#line 2271 "sqlgrammar.tab.c"
    break;

  case 51: /* opt_with_grant_option: WITH GRANT OPTION  */
#line 478 "sqlgrammar.y"
                {
			yyval = 1;
		}
#line 2279 "sqlgrammar.tab.c"
    break;

  case 52: /* privileges: ALL PRIVILEGES  */
#line 485 "sqlgrammar.y"
                {
			sql_declare(privileges_t, pprivs);
			pprivs->which = 0;
			pprivs->all = 1;
			yyval = (LITEM)pprivs;
		}
#line 2290 "sqlgrammar.tab.c"
    break;

  case 53: /* privileges: ALL  */
#line 492 "sqlgrammar.y"
                {
			sql_declare(privileges_t, pprivs);
			pprivs->which = 0;
			pprivs->all = 1;
			yyval = (LITEM)pprivs;
		}
#line 2301 "sqlgrammar.tab.c"
    break;

  case 54: /* privileges: operation_commalist  */
#line 499 "sqlgrammar.y"
                {
			sql_declare(privileges_t, pprivs);
			pprivs->which = 1;
			pprivs->pops = yyvsp[0];
			yyval = (LITEM)pprivs;
		}
#line 2312 "sqlgrammar.tab.c"
    break;

  case 55: /* operation_commalist: operation  */
#line 509 "sqlgrammar.y"
                {
			yyval = _sql_create_list();
			_sql_add_tail(yyval, yyvsp[0]);
		}
#line 2321 "sqlgrammar.tab.c"
    break;

  case 56: /* operation_commalist: operation_commalist ',' operation  */
#line 514 "sqlgrammar.y"
                {
			_sql_add_tail(yyvsp[-2], yyvsp[0]); 
			yyval = yyvsp[-2];
		}
#line 2330 "sqlgrammar.tab.c"
    break;

  case 57: /* operation: SELECT  */
#line 522 "sqlgrammar.y"
                {
			sql_declare(operation_t, op);
			op->type = OP_SELECT;	
		}
#line 2339 "sqlgrammar.tab.c"
    break;

  case 58: /* operation: INSERT  */
#line 527 "sqlgrammar.y"
                {
			sql_declare(operation_t, op);
			op->type = OP_INSERT;	
		}
#line 2348 "sqlgrammar.tab.c"
    break;

  case 59: /* operation: DELETE2  */
#line 532 "sqlgrammar.y"
                {
			sql_declare(operation_t, op);
			op->type = OP_DELETE;	
		}
#line 2357 "sqlgrammar.tab.c"
    break;

  case 60: /* operation: UPDATE opt_column_commalist  */
#line 537 "sqlgrammar.y"
                {
			sql_declare(operation_t, op);
			op->type = OP_UPDATE;	
		}
#line 2366 "sqlgrammar.tab.c"
    break;

  case 61: /* operation: REFERENCES opt_column_commalist  */
#line 542 "sqlgrammar.y"
                {
			sql_declare(operation_t, op);
			op->type = OP_REFERENCES;	
			op->pcolumns = yyvsp[0];
		}
#line 2376 "sqlgrammar.tab.c"
    break;

  case 62: /* grantee_commalist: grantee  */
#line 552 "sqlgrammar.y"
                {
			yyval = _sql_create_list();
			_sql_add_tail(yyval, yyvsp[0]);
		}
#line 2385 "sqlgrammar.tab.c"
    break;

  case 63: /* grantee_commalist: grantee_commalist ',' grantee  */
#line 557 "sqlgrammar.y"
                {
			_sql_add_tail(yyvsp[-2], yyvsp[0]); 
			yyval = yyvsp[-2];
		}
#line 2394 "sqlgrammar.tab.c"
    break;

  case 64: /* grantee: PUBLIC  */
#line 565 "sqlgrammar.y"
                {
			yyval = (LITEM)NULL;
		}
#line 2402 "sqlgrammar.tab.c"
    break;

  case 65: /* grantee: user  */
#line 569 "sqlgrammar.y"
                {
			yyval = yyvsp[0];
		}
#line 2410 "sqlgrammar.tab.c"
    break;

  case 66: /* sql: module_def  */
#line 576 "sqlgrammar.y"
                {
			yyerror(root, "Module definition not supported");
		}
#line 2418 "sqlgrammar.tab.c"
    break;

  case 81: /* opt_order_by_clause: %empty  */
#line 619 "sqlgrammar.y"
                {
			yyval = (LITEM)NULL;
		}
#line 2426 "sqlgrammar.tab.c"
    break;

  case 82: /* opt_order_by_clause: ORDER BY ordering_spec_commalist  */
#line 623 "sqlgrammar.y"
                {
			yyval = yyvsp[0];
		}
#line 2434 "sqlgrammar.tab.c"
    break;

  case 83: /* ordering_spec_commalist: ordering_spec  */
#line 631 "sqlgrammar.y"
                {
			yyval = _sql_create_list();
			_sql_add_tail(yyval, yyvsp[0]);
		}
#line 2443 "sqlgrammar.tab.c"
    break;

  case 84: /* ordering_spec_commalist: ordering_spec_commalist ',' ordering_spec  */
#line 636 "sqlgrammar.y"
                {
			_sql_add_tail(yyvsp[-2], yyvsp[0]);
			yyval = yyvsp[-2];
		}
#line 2452 "sqlgrammar.tab.c"
    break;

  case 85: /* ordering_spec: column_ref opt_asc_desc  */
#line 645 "sqlgrammar.y"
                {
			sql_declare(ordering_spec_t, spec);
			spec->colnum = NULL;
			spec->pcolumn = (column_ref_t*)yyvsp[-1];
			spec->ascdesc = (asc_desc_t)yyvsp[0];
			yyval = (LITEM)spec;
		}
#line 2464 "sqlgrammar.tab.c"
    break;

  case 86: /* ordering_spec: INTNUM opt_asc_desc  */
#line 653 "sqlgrammar.y"
                {
			sql_declare(ordering_spec_t, spec);
			spec->colnum = (char*)yyvsp[-1];
			spec->pcolumn = NULL;
			spec->ascdesc = (asc_desc_t)yyvsp[0];
			yyval = (LITEM)spec;
		}
#line 2476 "sqlgrammar.tab.c"
    break;

  case 87: /* opt_asc_desc: %empty  */
#line 664 "sqlgrammar.y"
                {
			yyval = ORDER_NOT_SPECIFIED;
		}
#line 2484 "sqlgrammar.tab.c"
    break;

  case 88: /* opt_asc_desc: ASC  */
#line 668 "sqlgrammar.y"
                {
			yyval = ORDER_ASC;
		}
#line 2492 "sqlgrammar.tab.c"
    break;

  case 89: /* opt_asc_desc: DESC  */
#line 672 "sqlgrammar.y"
                {
			yyval = ORDER_DESC;
		}
#line 2500 "sqlgrammar.tab.c"
    break;

  case 93: /* manipulative_statement_list: manipulative_statement  */
#line 689 "sqlgrammar.y"
                {
			yyval = _sql_create_list();
			_sql_add_tail(yyval, yyvsp[0]);
		}
#line 2509 "sqlgrammar.tab.c"
    break;

  case 94: /* manipulative_statement_list: manipulative_statement_list manipulative_statement  */
#line 694 "sqlgrammar.y"
                {
			_sql_add_tail(yyvsp[-1], yyvsp[0]);
			yyval = yyvsp[-1];
		}
#line 2518 "sqlgrammar.tab.c"
    break;

  case 99: /* sql: manipulative_statement  */
#line 713 "sqlgrammar.y"
                {
			sql_declare(sql_t, psql);
			psql->which = 2;
			psql->pstmt = (manipulative_statement_t*)yyvsp[0];
			yyval = (LITEM)psql;
		}
#line 2529 "sqlgrammar.tab.c"
    break;

  case 100: /* manipulative_statement: delete_statement_searched  */
#line 723 "sqlgrammar.y"
                {
			sql_declare(manipulative_statement_t, pstmt);
			pstmt->which = 0;
			pstmt->pdelsearched = (delete_statement_searched_t*)yyvsp[0];
			yyval = (LITEM)pstmt;
		}
#line 2540 "sqlgrammar.tab.c"
    break;

  case 101: /* manipulative_statement: insert_statement  */
#line 730 "sqlgrammar.y"
                {
			sql_declare(manipulative_statement_t, pstmt);
			pstmt->which = 1;
			pstmt->pinsert = (insert_statement_t*)yyvsp[0];
			yyval = (LITEM)pstmt;
		}
#line 2551 "sqlgrammar.tab.c"
    break;

  case 102: /* manipulative_statement: select_statement  */
#line 737 "sqlgrammar.y"
                {
			sql_declare(manipulative_statement_t, pstmt);
			pstmt->which = 2;
			pstmt->pselect = (select_statement_t*)yyvsp[0];
			yyval = (LITEM)pstmt;
		}
#line 2562 "sqlgrammar.tab.c"
    break;

  case 103: /* manipulative_statement: update_statement_searched  */
#line 744 "sqlgrammar.y"
                {
			sql_declare(manipulative_statement_t, pstmt);
			pstmt->which = 3;
			pstmt->pupdatesearched = (update_statement_searched_t*)yyvsp[0];
			yyval = (LITEM)pstmt;
		}
#line 2573 "sqlgrammar.tab.c"
    break;

  case 115: /* delete_statement_searched: DELETE2 FROM table opt_where_clause  */
#line 775 "sqlgrammar.y"
                {
			sql_declare(delete_statement_searched_t, pstmt);
			pstmt->ptable = (table_t*)yyvsp[-1];
			pstmt->pwhere = (where_clause_t*)yyvsp[0];
			yyval = (LITEM)pstmt;
		}
#line 2584 "sqlgrammar.tab.c"
    break;

  case 116: /* delete_statement_searched: DELETE2 table opt_where_clause  */
#line 783 "sqlgrammar.y"
                {
			sql_declare(delete_statement_searched_t, pstmt);
			pstmt->ptable = (table_t*)yyvsp[-1];
			pstmt->pwhere = (where_clause_t*)yyvsp[0];
			yyval = (LITEM)pstmt;
		}
#line 2595 "sqlgrammar.tab.c"
    break;

  case 118: /* insert_statement: INSERT INTO table opt_column_commalist values_or_query_spec  */
#line 797 "sqlgrammar.y"
                {
			sql_declare(insert_statement_t, pstmt);
			pstmt->ptable = (table_t*)yyvsp[-2];
			pstmt->pcommalist = yyvsp[-1];
			pstmt->pvalues = (values_or_query_spec_t*)yyvsp[0];
			yyval = (LITEM)pstmt;
		}
#line 2607 "sqlgrammar.tab.c"
    break;

  case 119: /* values_or_query_spec: VALUES '(' insert_atom_commalist ')'  */
#line 808 "sqlgrammar.y"
                {
			sql_declare(values_or_query_spec_t, pvalues);
			pvalues->which = 0;
			pvalues->patoms = yyvsp[-1];
			yyval = (LITEM)pvalues;
		}
#line 2618 "sqlgrammar.tab.c"
    break;

  case 120: /* values_or_query_spec: query_spec  */
#line 815 "sqlgrammar.y"
                {
			sql_declare(values_or_query_spec_t, pvalues);
			pvalues->which = 1;
			pvalues->pquery = (query_spec_t*)yyvsp[0];
			yyval = (LITEM)pvalues;
		}
#line 2629 "sqlgrammar.tab.c"
    break;

  case 121: /* insert_atom_commalist: insert_atom  */
#line 825 "sqlgrammar.y"
                {
			yyval = _sql_create_list();
			_sql_add_tail(yyval, yyvsp[0]);
		}
#line 2638 "sqlgrammar.tab.c"
    break;

  case 122: /* insert_atom_commalist: insert_atom_commalist ',' insert_atom  */
#line 830 "sqlgrammar.y"
                {
			_sql_add_tail(yyvsp[-2], yyvsp[0]);
			yyval = yyvsp[-2];
		}
#line 2647 "sqlgrammar.tab.c"
    break;

  case 123: /* insert_atom: atom  */
#line 838 "sqlgrammar.y"
                {
			yyval = yyvsp[0];
		}
#line 2655 "sqlgrammar.tab.c"
    break;

  case 124: /* insert_atom: NULLX  */
#line 842 "sqlgrammar.y"
                {
			yyval = (LITEM)NULL;
		}
#line 2663 "sqlgrammar.tab.c"
    break;

  case 127: /* select_statement: SELECT opt_all_distinct selection INTO target_commalist table_exp  */
#line 859 "sqlgrammar.y"
                {
			sql_declare(select_statement_t, pstmt);
			pstmt->alldistinct = yyvsp[-4];
			pstmt->pselection = (selection_t*)yyvsp[-3];
			pstmt->pcommalist = yyvsp[-1];
			pstmt->ptable = (table_exp_t*)yyvsp[0];
			yyval = (LITEM)pstmt;
		}
#line 2676 "sqlgrammar.tab.c"
    break;

  case 128: /* opt_all_distinct: %empty  */
#line 871 "sqlgrammar.y"
                {
			yyval = SEL_NOT_SPECIFIED;
		}
#line 2684 "sqlgrammar.tab.c"
    break;

  case 129: /* opt_all_distinct: ALL  */
#line 875 "sqlgrammar.y"
                {
			yyval = SEL_ALL;
		}
#line 2692 "sqlgrammar.tab.c"
    break;

  case 130: /* opt_all_distinct: DISTINCT  */
#line 879 "sqlgrammar.y"
                {
			yyval = SEL_DISTINCT;
		}
#line 2700 "sqlgrammar.tab.c"
    break;

  case 133: /* assignment_commalist: assignment  */
#line 891 "sqlgrammar.y"
                {
			yyval = _sql_create_list();
			_sql_add_tail(yyval, yyvsp[0]);
		}
#line 2709 "sqlgrammar.tab.c"
    break;

  case 134: /* assignment_commalist: assignment_commalist ',' assignment  */
#line 896 "sqlgrammar.y"
                {
			_sql_add_tail(yyvsp[-2], yyvsp[0]);
			yyval = yyvsp[-2];
		}
#line 2718 "sqlgrammar.tab.c"
    break;

  case 135: /* assignment: column EQUALS scalar_exp  */
#line 904 "sqlgrammar.y"
                {
			sql_declare(assignment_t, pass);
			pass->pcolumn = (column_t)yyvsp[-2];
			pass->pscalar = (scalar_exp_t*)yyvsp[0];
			yyval = (LITEM)pass;
		}
#line 2729 "sqlgrammar.tab.c"
    break;

  case 136: /* assignment: column EQUALS NULLX  */
#line 911 "sqlgrammar.y"
                {
			sql_declare(assignment_t, pass);
			pass->pcolumn = (column_t)yyvsp[-2];
			pass->pscalar = (scalar_exp_t*)NULL;
			yyval = (LITEM)pass;
		}
#line 2740 "sqlgrammar.tab.c"
    break;

  case 137: /* update_statement_searched: UPDATE table SET assignment_commalist opt_where_clause  */
#line 921 "sqlgrammar.y"
                {
			sql_declare(update_statement_searched_t, pupdate);
			pupdate->ptable = (table_t*)yyvsp[-3];
			pupdate->plist = yyvsp[-1];
			pupdate->pwhereclause = (where_clause_t*)yyvsp[0];
			yyval = (LITEM)pupdate;
		}
#line 2752 "sqlgrammar.tab.c"
    break;

  case 138: /* target_commalist: target  */
#line 932 "sqlgrammar.y"
                {
			yyval = _sql_create_list();
			_sql_add_tail(yyval, yyvsp[0]);
		}
#line 2761 "sqlgrammar.tab.c"
    break;

  case 139: /* target_commalist: target_commalist ',' target  */
#line 937 "sqlgrammar.y"
                {
			_sql_add_tail(yyvsp[-2], yyvsp[0]);
			yyval = yyvsp[-2];
		}
#line 2770 "sqlgrammar.tab.c"
    break;

  case 140: /* target: parameter_ref  */
#line 945 "sqlgrammar.y"
                {
			yyval = yyvsp[0];
		}
#line 2778 "sqlgrammar.tab.c"
    break;

  case 141: /* opt_where_clause: %empty  */
#line 952 "sqlgrammar.y"
                {
			yyval = (LITEM)NULL;
		}
#line 2786 "sqlgrammar.tab.c"
    break;

  case 142: /* opt_where_clause: where_clause  */
#line 956 "sqlgrammar.y"
                {
			yyval = yyvsp[0];
		}
#line 2794 "sqlgrammar.tab.c"
    break;

  case 143: /* sql: query_spec  */
#line 964 "sqlgrammar.y"
                {
			sql_declare(sql_t, psql);
			psql->which = 3;
			psql->pquery = (query_spec_t*)yyvsp[0];
			yyval = (LITEM)psql;
		}
#line 2805 "sqlgrammar.tab.c"
    break;

  case 144: /* query_exp: query_term  */
#line 974 "sqlgrammar.y"
                {
			sql_declare(query_exp_t, pquery);
			pquery->pterm = (query_term_t*)yyvsp[0];
			yyval = (LITEM)pquery;
		}
#line 2815 "sqlgrammar.tab.c"
    break;

  case 145: /* query_exp: query_exp UNION query_term  */
#line 980 "sqlgrammar.y"
                {
			sql_declare(query_exp_t, pquery);
			pquery->pterm = (query_term_t*)yyvsp[0];
			pquery->pexp = (query_exp_t*)yyvsp[-2];
			yyval = (LITEM)pquery;
		}
#line 2826 "sqlgrammar.tab.c"
    break;

  case 146: /* query_exp: query_exp UNION ALL query_term  */
#line 987 "sqlgrammar.y"
                {
			sql_declare(query_exp_t, pquery);
			pquery->pterm = (query_term_t*)yyvsp[0];
			pquery->pexp = (query_exp_t*)yyvsp[-3];
			yyval = (LITEM)pquery;
		}
#line 2837 "sqlgrammar.tab.c"
    break;

  case 147: /* query_term: query_spec  */
#line 997 "sqlgrammar.y"
                {
			sql_declare(query_term_t, pterm);
			pterm->which = 0;
			pterm->pspec = (query_spec_t*)yyvsp[0];
			yyval = (LITEM)pterm;
		}
#line 2848 "sqlgrammar.tab.c"
    break;

  case 148: /* query_term: '(' query_exp ')'  */
#line 1004 "sqlgrammar.y"
                {
			sql_declare(query_term_t, pterm);
			pterm->which = 1;
			pterm->pexp = (void*)yyvsp[-1];
			yyval = (LITEM)pterm;
		}
#line 2859 "sqlgrammar.tab.c"
    break;

  case 149: /* query_spec: SELECT opt_all_distinct selection table_exp opt_order_by_clause  */
#line 1015 "sqlgrammar.y"
                {
			sql_declare(query_spec_t, pspec);
			pspec->alldistinct = yyvsp[-3];
			pspec->pselection = yyvsp[-2];
			pspec->pexp = (table_exp_t*)yyvsp[-1];
			pspec->porderby = yyvsp[0];
			yyval = (LITEM)pspec;
		}
#line 2872 "sqlgrammar.tab.c"
    break;

  case 150: /* selection: scalar_exp_commalist  */
#line 1027 "sqlgrammar.y"
                {
			yyval = yyvsp[0];
		}
#line 2880 "sqlgrammar.tab.c"
    break;

  case 151: /* table_exp: from_clause opt_where_clause opt_group_by_clause opt_having_clause  */
#line 1037 "sqlgrammar.y"
                {
			sql_declare(table_exp_t, ptable);
			ptable->pfrom = (from_clause_t*)yyvsp[-3];
			ptable->pwhere = (void*)yyvsp[-2];
			ptable->pgroup = yyvsp[-1];
			ptable->phaving = (having_clause_t*)yyvsp[0];
			yyval = (LITEM)ptable;
		}
#line 2893 "sqlgrammar.tab.c"
    break;

  case 152: /* from_clause: FROM table_ref_commalist  */
#line 1049 "sqlgrammar.y"
                {
			sql_declare(from_clause_t, pfrom);
			pfrom->which = 0;
			pfrom->plist = yyvsp[0];
			yyval = (LITEM)pfrom;
		}
#line 2904 "sqlgrammar.tab.c"
    break;

  case 153: /* from_clause: FROM table_ref join_ref  */
#line 1056 "sqlgrammar.y"
                {
			sql_declare(from_clause_t, pfrom);
			pfrom->which = 1;
			pfrom->pjoin = sql_alloc(table_join_t);
			pfrom->pjoin->ptable = (table_ref_t*)yyvsp[-1];
			pfrom->pjoin->pjoin = (join_ref_t*)yyvsp[0];
			yyval = (LITEM)pfrom;
		}
#line 2917 "sqlgrammar.tab.c"
    break;

  case 154: /* join_ref: INNER join_ref  */
#line 1069 "sqlgrammar.y"
                {
			join_ref_t *pref = (join_ref_t*)yyvsp[0];
			pref->type = JOIN_INNER;
			yyval = (LITEM)pref;
		}
#line 2927 "sqlgrammar.tab.c"
    break;

  case 155: /* join_ref: LEFT OUTER join_ref  */
#line 1075 "sqlgrammar.y"
                {
			join_ref_t *pref = (join_ref_t*)yyvsp[0];
			pref->type = JOIN_LEFT_OUTER;
			yyval = (LITEM)pref;
		}
#line 2937 "sqlgrammar.tab.c"
    break;

  case 156: /* join_ref: RIGHT OUTER join_ref  */
#line 1081 "sqlgrammar.y"
                {
			join_ref_t *pref = (join_ref_t*)yyvsp[0];
			pref->type = JOIN_RIGHT_OUTER;
			yyval = (LITEM)pref;
		}
#line 2947 "sqlgrammar.tab.c"
    break;

  case 157: /* join_ref: JOIN table_ref  */
#line 1087 "sqlgrammar.y"
                {
			sql_declare(join_ref_t, pref);
			pref->type = JOIN_INNER;
			pref->ptable = (table_ref_t*)yyvsp[0];
			yyval = (LITEM)pref;
		}
#line 2958 "sqlgrammar.tab.c"
    break;

  case 158: /* join_ref: JOIN table_ref join_ref  */
#line 1094 "sqlgrammar.y"
                {
			sql_declare(join_ref_t, pref);
			pref->type = JOIN_INNER;
			pref->ptable = (table_ref_t*)yyvsp[-1];
			pref->pjoin = (join_ref_t*)yyvsp[0];
			yyval = (LITEM)pref;
		}
#line 2970 "sqlgrammar.tab.c"
    break;

  case 159: /* join_ref: JOIN table_ref ON search_condition  */
#line 1102 "sqlgrammar.y"
                {
			sql_declare(join_ref_t, pref);
			pref->type = JOIN_INNER;
			pref->ptable = (table_ref_t*)yyvsp[-2];
			pref->psearch = (void*)yyvsp[0];
			yyval = (LITEM)pref;
		}
#line 2982 "sqlgrammar.tab.c"
    break;

  case 160: /* join_ref: JOIN table_ref ON search_condition join_ref  */
#line 1110 "sqlgrammar.y"
                {
			sql_declare(join_ref_t, pref);
			pref->type = JOIN_INNER;
			pref->ptable = (table_ref_t*)yyvsp[-3];
			pref->psearch = (void*)yyvsp[-1];
			pref->pjoin = (join_ref_t*)yyvsp[0];
			yyval = (LITEM)pref;
		}
#line 2995 "sqlgrammar.tab.c"
    break;

  case 161: /* table_ref_commalist: table_ref  */
#line 1122 "sqlgrammar.y"
                {
			yyval = _sql_create_list();
			_sql_add_tail(yyval, yyvsp[0]);
		}
#line 3004 "sqlgrammar.tab.c"
    break;

  case 162: /* table_ref_commalist: table_ref_commalist ',' table_ref  */
#line 1127 "sqlgrammar.y"
                {
			_sql_add_tail(yyvsp[-2], yyvsp[0]);
			yyval = yyvsp[-2];
		}
#line 3013 "sqlgrammar.tab.c"
    break;

  case 163: /* table_ref: table  */
#line 1135 "sqlgrammar.y"
                {
			sql_declare(table_ref_t, pref);
			pref->ptable = (table_t*)yyvsp[0];
			pref->which = -1;
			yyval = (LITEM)pref;
		}
#line 3024 "sqlgrammar.tab.c"
    break;

  case 164: /* table_ref: table NAME  */
#line 1142 "sqlgrammar.y"
                {
			sql_declare(table_ref_t, pref);
			pref->ptable = (table_t*)yyvsp[-1];
			pref->which = 0;
			pref->alias = (char*)yyvsp[0];
			yyval = (LITEM)pref;
		}
#line 3036 "sqlgrammar.tab.c"
    break;

  case 165: /* table_ref: table AS NAME  */
#line 1150 "sqlgrammar.y"
                {
			sql_declare(table_ref_t, pref);
			pref->ptable = (table_t*)yyvsp[-2];
			pref->which = 0;
			pref->alias = (char*)yyvsp[0];
			yyval = (LITEM)pref;
		}
#line 3048 "sqlgrammar.tab.c"
    break;

  case 166: /* table_ref: table range_variable  */
#line 1158 "sqlgrammar.y"
                {
			sql_declare(table_ref_t, pref);
			pref->ptable = (table_t*)yyvsp[-1];
			pref->which = 1;
			pref->prange = (range_variable_t)yyvsp[0];
			yyval = (LITEM)pref;
		}
#line 3060 "sqlgrammar.tab.c"
    break;

  case 167: /* where_clause: WHERE search_condition  */
#line 1169 "sqlgrammar.y"
                {
			yyval = yyvsp[0];
		}
#line 3068 "sqlgrammar.tab.c"
    break;

  case 168: /* opt_group_by_clause: %empty  */
#line 1176 "sqlgrammar.y"
                {
			yyval = (LITEM)NULL;
		}
#line 3076 "sqlgrammar.tab.c"
    break;

  case 169: /* opt_group_by_clause: GROUP BY column_ref_commalist  */
#line 1180 "sqlgrammar.y"
                {
			yyval = yyvsp[0];
		}
#line 3084 "sqlgrammar.tab.c"
    break;

  case 170: /* column_ref_commalist: column_ref  */
#line 1187 "sqlgrammar.y"
                {
			yyval = _sql_create_list();
			_sql_add_tail(yyval, yyvsp[0]);
		}
#line 3093 "sqlgrammar.tab.c"
    break;

  case 171: /* column_ref_commalist: column_ref_commalist ',' column_ref  */
#line 1192 "sqlgrammar.y"
                {
			_sql_add_tail(yyvsp[-2], yyvsp[0]);
			yyval = yyvsp[-2];
		}
#line 3102 "sqlgrammar.tab.c"
    break;

  case 172: /* opt_having_clause: %empty  */
#line 1200 "sqlgrammar.y"
                {
			yyval = (LITEM)NULL;
		}
#line 3110 "sqlgrammar.tab.c"
    break;

  case 173: /* opt_having_clause: HAVING search_condition  */
#line 1204 "sqlgrammar.y"
                {
			yyval = yyvsp[0];
		}
#line 3118 "sqlgrammar.tab.c"
    break;

  case 174: /* search_condition: search_condition OR search_condition  */
#line 1213 "sqlgrammar.y"
                {
			sql_declare(search_condition_t, psearch);
			psearch->psearch1 = (search_condition_t*)yyvsp[-2];
			psearch->psearch2 = (search_condition_t*)yyvsp[0];
			psearch->searchop = SEARCHOP_OR;
			yyval = (LITEM)psearch;
		}
#line 3130 "sqlgrammar.tab.c"
    break;

  case 175: /* search_condition: search_condition AND search_condition  */
#line 1221 "sqlgrammar.y"
                {
			sql_declare(search_condition_t, psearch);
			psearch->psearch1 = (search_condition_t*)yyvsp[-2];
			psearch->psearch2 = (search_condition_t*)yyvsp[0];
			psearch->searchop = SEARCHOP_AND;
			yyval = (LITEM)psearch;
		}
#line 3142 "sqlgrammar.tab.c"
    break;

  case 176: /* search_condition: NOT search_condition  */
#line 1229 "sqlgrammar.y"
                {
			sql_declare(search_condition_t, psearch);
			psearch->psearch2 = (search_condition_t*)yyvsp[0];
			psearch->searchop = SEARCHOP_NOT;
			yyval = (LITEM)psearch;
		}
#line 3153 "sqlgrammar.tab.c"
    break;

  case 177: /* search_condition: '(' search_condition ')'  */
#line 1236 "sqlgrammar.y"
                {
			sql_declare(search_condition_t, psearch);
			psearch->psearch1 = (search_condition_t*)yyvsp[-1];
			psearch->useparens = 1;
			yyval = (LITEM)psearch;
		}
#line 3164 "sqlgrammar.tab.c"
    break;

  case 178: /* search_condition: predicate  */
#line 1243 "sqlgrammar.y"
                {
			sql_declare(search_condition_t, psearch);
			psearch->ppredicate = (predicate_t*)yyvsp[0];
			yyval = (LITEM)psearch;
		}
#line 3174 "sqlgrammar.tab.c"
    break;

  case 179: /* predicate: comparison_predicate  */
#line 1252 "sqlgrammar.y"
                {
			sql_declare(predicate_t, ppred);
			ppred->which = 0;
			ppred->pcomparison = (comparison_predicate_t*)yyvsp[0];
			yyval = (LITEM)ppred;
		}
#line 3185 "sqlgrammar.tab.c"
    break;

  case 180: /* predicate: in_predicate  */
#line 1259 "sqlgrammar.y"
                {
			sql_declare(predicate_t, ppred);
			ppred->which = 1;
			ppred->pin = (in_predicate_t*)yyvsp[0];
			yyval = (LITEM)ppred;
		}
#line 3196 "sqlgrammar.tab.c"
    break;

  case 181: /* predicate: test_for_null  */
#line 1266 "sqlgrammar.y"
                {
			sql_declare(predicate_t, ppred);
			ppred->which = 2;
			ppred->ptestnull = (test_for_null_t*)yyvsp[0];
			yyval = (LITEM)ppred;
		}
#line 3207 "sqlgrammar.tab.c"
    break;

  case 182: /* predicate: existence_test  */
#line 1273 "sqlgrammar.y"
                {
			sql_declare(predicate_t, ppred);
			ppred->which = 3;
			ppred->pexisttest = (existence_test_t*)yyvsp[0];
			yyval = (LITEM)ppred;
		}
#line 3218 "sqlgrammar.tab.c"
    break;

  case 183: /* predicate: between_predicate  */
#line 1280 "sqlgrammar.y"
                {
			sql_declare(predicate_t, ppred);
			ppred->which = 4;
			ppred->pbetween = (between_predicate_t*)yyvsp[0];
			yyval = (LITEM)ppred;
		}
#line 3229 "sqlgrammar.tab.c"
    break;

  case 184: /* predicate: like_predicate  */
#line 1287 "sqlgrammar.y"
                {
			sql_declare(predicate_t, ppred);
			ppred->which = 5;
			ppred->plike = (like_predicate_t*)yyvsp[0];
			yyval = (LITEM)ppred;
		}
#line 3240 "sqlgrammar.tab.c"
    break;

  case 185: /* predicate: all_or_any_predicate  */
#line 1294 "sqlgrammar.y"
                {
			sql_declare(predicate_t, ppred);
			ppred->which = 6;
			ppred->panyorall = (any_or_all_predicate_t*)yyvsp[0];
			yyval = (LITEM)ppred;
		}
#line 3251 "sqlgrammar.tab.c"
    break;

  case 186: /* comparison_predicate: scalar_exp comparison scalar_exp  */
#line 1304 "sqlgrammar.y"
                {
			sql_declare(comparison_predicate_t, ppred);
			ppred->pscalar1 = (scalar_exp_t*)yyvsp[-2];
			ppred->pcomparison = (char*)yyvsp[-1];
			ppred->pscalar2 = (scalar_exp_t*)yyvsp[0];
			ppred->join_type = JOIN_INNER;
			yyval = (LITEM)ppred;
		}
#line 3264 "sqlgrammar.tab.c"
    break;

  case 187: /* comparison_predicate: scalar_exp comparison subquery  */
#line 1313 "sqlgrammar.y"
                {
			sql_declare(comparison_predicate_t, ppred);
			ppred->pscalar1 = (scalar_exp_t*)yyvsp[-2];
			ppred->pcomparison = (char*)yyvsp[-1];
			ppred->psubquery = (subquery_t*)yyvsp[0];
			ppred->join_type = JOIN_INNER;
			yyval = (LITEM)ppred;
		}
#line 3277 "sqlgrammar.tab.c"
    break;

  case 188: /* between_predicate: scalar_exp NOT BETWEEN scalar_exp AND scalar_exp  */
#line 1325 "sqlgrammar.y"
                {
			sql_declare(between_predicate_t, ppred);
			ppred->pscalar1 = (scalar_exp_t*)yyvsp[-5];
			ppred->not = 1;
			ppred->pscalar2 = (scalar_exp_t*)yyvsp[-2];
			ppred->pscalar3 = (scalar_exp_t*)yyvsp[0];
			yyval = (LITEM)ppred;
		}
#line 3290 "sqlgrammar.tab.c"
    break;

  case 189: /* between_predicate: scalar_exp BETWEEN scalar_exp AND scalar_exp  */
#line 1334 "sqlgrammar.y"
                {
			sql_declare(between_predicate_t, ppred);
			ppred->pscalar1 = (scalar_exp_t*)yyvsp[-4];
			ppred->not = 0;
			ppred->pscalar2 = (scalar_exp_t*)yyvsp[-2];
			ppred->pscalar3 = (scalar_exp_t*)yyvsp[0];
			yyval = (LITEM)ppred;
		}
#line 3303 "sqlgrammar.tab.c"
    break;

  case 190: /* like_predicate: scalar_exp NOT LIKE atom opt_escape  */
#line 1346 "sqlgrammar.y"
                {
			sql_declare(like_predicate_t, ppred);
			ppred->pscalar = (scalar_exp_t*)yyvsp[-4];
			ppred->not = 1;
			ppred->patom = (atom_t*)yyvsp[-1];
			ppred->pescape = (atom_t*)yyvsp[0];
			yyval = (LITEM)ppred;
		}
#line 3316 "sqlgrammar.tab.c"
    break;

  case 191: /* like_predicate: scalar_exp LIKE atom opt_escape  */
#line 1355 "sqlgrammar.y"
                {
			sql_declare(like_predicate_t, ppred);
			ppred->pscalar = (scalar_exp_t*)yyvsp[-3];
			ppred->not = 0;
			ppred->patom = (atom_t*)yyvsp[-1];
			ppred->pescape = (atom_t*)yyvsp[0];
			yyval = (LITEM)ppred;
		}
#line 3329 "sqlgrammar.tab.c"
    break;

  case 192: /* opt_escape: %empty  */
#line 1367 "sqlgrammar.y"
                {
			yyval = (LITEM)NULL;
		}
#line 3337 "sqlgrammar.tab.c"
    break;

  case 193: /* opt_escape: ESCAPE atom  */
#line 1371 "sqlgrammar.y"
                {
			yyval = yyvsp[0];
		}
#line 3345 "sqlgrammar.tab.c"
    break;

  case 194: /* test_for_null: column_ref IS NOT NULLX  */
#line 1378 "sqlgrammar.y"
                {
			sql_declare(test_for_null_t, ptest);
			ptest->pcolumn = (column_ref_t*)yyvsp[-3];
			ptest->isnull = 0;
			yyval = (LITEM)ptest;
		}
#line 3356 "sqlgrammar.tab.c"
    break;

  case 195: /* test_for_null: column_ref IS NULLX  */
#line 1385 "sqlgrammar.y"
                {
			sql_declare(test_for_null_t, ptest);
			ptest->pcolumn = (column_ref_t*)yyvsp[-2];
			ptest->isnull = 1;
			yyval = (LITEM)ptest;
		}
#line 3367 "sqlgrammar.tab.c"
    break;

  case 196: /* in_predicate: scalar_exp NOT IN2 subquery  */
#line 1395 "sqlgrammar.y"
                {
			sql_declare(in_predicate_t, pin);
			pin->pscalar = (scalar_exp_t*)yyvsp[-3];
			pin->not = 1; 
			pin->which = 0;
			pin->psubquery = (subquery_t*)yyvsp[0];
			yyval = (LITEM)pin;
		}
#line 3380 "sqlgrammar.tab.c"
    break;

  case 197: /* in_predicate: scalar_exp IN2 subquery  */
#line 1404 "sqlgrammar.y"
                {
			sql_declare(in_predicate_t, pin);
			pin->pscalar = (scalar_exp_t*)yyvsp[-2];
			pin->not = 0; 
			pin->which = 0;
			pin->psubquery = (subquery_t*)yyvsp[0];
			yyval = (LITEM)pin;
		}
#line 3393 "sqlgrammar.tab.c"
    break;

  case 198: /* in_predicate: scalar_exp NOT IN2 '(' atom_commalist ')'  */
#line 1413 "sqlgrammar.y"
                {
			sql_declare(in_predicate_t, pin);
			pin->pscalar = (scalar_exp_t*)yyvsp[-5];
			pin->not = 1; 
			pin->which = 1;
			pin->patomlist = yyvsp[-1];
			yyval = (LITEM)pin;
		}
#line 3406 "sqlgrammar.tab.c"
    break;

  case 199: /* in_predicate: scalar_exp IN2 '(' atom_commalist ')'  */
#line 1422 "sqlgrammar.y"
                {
			sql_declare(in_predicate_t, pin);
			pin->pscalar = (scalar_exp_t*)yyvsp[-4];
			pin->not = 1; 
			pin->which = 1;
			pin->patomlist = yyvsp[-1];
			yyval = (LITEM)pin;
		}
#line 3419 "sqlgrammar.tab.c"
    break;

  case 200: /* atom_commalist: atom  */
#line 1434 "sqlgrammar.y"
                {
			yyval = _sql_create_list();
			_sql_add_tail(yyval, yyvsp[0]);
		}
#line 3428 "sqlgrammar.tab.c"
    break;

  case 201: /* atom_commalist: atom_commalist ',' atom  */
#line 1439 "sqlgrammar.y"
                {
			_sql_add_tail(yyvsp[-2], yyvsp[0]);
			yyval = yyvsp[-2];
		}
#line 3437 "sqlgrammar.tab.c"
    break;

  case 202: /* all_or_any_predicate: scalar_exp comparison any_all_some subquery  */
#line 1447 "sqlgrammar.y"
                {
			sql_declare(any_or_all_predicate_t, pall);
			pall->pscalar = (scalar_exp_t*)yyvsp[-3];
			pall->comparison = (char*)yyvsp[-2];
			pall->anyallsome = yyvsp[-1];
			pall->psubquery = (subquery_t*)yyvsp[0];
			yyval = (LITEM)pall;
		}
#line 3450 "sqlgrammar.tab.c"
    break;

  case 203: /* any_all_some: ANY  */
#line 1459 "sqlgrammar.y"
                {
			yyval = PRED_ANY;
		}
#line 3458 "sqlgrammar.tab.c"
    break;

  case 204: /* any_all_some: ALL  */
#line 1463 "sqlgrammar.y"
                {
			yyval = PRED_ALL;
		}
#line 3466 "sqlgrammar.tab.c"
    break;

  case 205: /* any_all_some: SOME  */
#line 1467 "sqlgrammar.y"
                {
			yyval = PRED_SOME;
		}
#line 3474 "sqlgrammar.tab.c"
    break;

  case 206: /* existence_test: EXISTS subquery  */
#line 1474 "sqlgrammar.y"
                {
			yyval = yyvsp[0];
		}
#line 3482 "sqlgrammar.tab.c"
    break;

  case 207: /* subquery: '(' query_spec ')'  */
#line 1481 "sqlgrammar.y"
                {
			yyval = yyvsp[-1];
		}
#line 3490 "sqlgrammar.tab.c"
    break;

  case 208: /* scalar_exp: scalar_exp NAME  */
#line 1490 "sqlgrammar.y"
                {
			char *tmp;
			sql_declare(scalar_exp_t, pscalar);
			pscalar->pscalar1 = (scalar_exp_t*)yyvsp[-1];
			tmp = __sql_alloc(strlen((char*)yyvsp[0]) + 3);
			sprintf(tmp, "%s", (char*)yyvsp[0]);
			pscalar->name = tmp;
			yyval = (LITEM)pscalar;
		}
#line 3504 "sqlgrammar.tab.c"
    break;

  case 209: /* scalar_exp: scalar_exp AS NAME  */
#line 1500 "sqlgrammar.y"
                {
			char *tmp;
			sql_declare(scalar_exp_t, pscalar);
			pscalar->pscalar1 = (scalar_exp_t*)yyvsp[-2];
			tmp = __sql_alloc(strlen((char*)yyvsp[0]) + 3);
			sprintf(tmp, "%s", (char*)yyvsp[0]);
			pscalar->name = tmp;
			yyval = (LITEM)pscalar;
		}
#line 3518 "sqlgrammar.tab.c"
    break;

  case 210: /* scalar_exp: scalar_exp '+' scalar_exp  */
#line 1510 "sqlgrammar.y"
                {
			sql_declare(scalar_exp_t, pscalar);
			pscalar->pscalar1 = (scalar_exp_t*)yyvsp[-2];
			pscalar->mathop = MATHOP_PLUS;
			pscalar->pscalar2 = (scalar_exp_t*)yyvsp[0];
			yyval = (LITEM)pscalar;
		}
#line 3530 "sqlgrammar.tab.c"
    break;

  case 211: /* scalar_exp: scalar_exp '-' scalar_exp  */
#line 1518 "sqlgrammar.y"
                {
			sql_declare(scalar_exp_t, pscalar);
			pscalar->pscalar1 = (scalar_exp_t*)yyvsp[-2];
			pscalar->mathop = MATHOP_MINUS;
			pscalar->pscalar2 = (scalar_exp_t*)yyvsp[0];
			yyval = (LITEM)pscalar;
		}
#line 3542 "sqlgrammar.tab.c"
    break;

  case 212: /* scalar_exp: scalar_exp '*' scalar_exp  */
#line 1526 "sqlgrammar.y"
                {
			sql_declare(scalar_exp_t, pscalar);
			pscalar->pscalar1 = (scalar_exp_t*)yyvsp[-2];
			pscalar->mathop = MATHOP_MULT;
			pscalar->pscalar2 = (scalar_exp_t*)yyvsp[0];
			yyval = (LITEM)pscalar;
		}
#line 3554 "sqlgrammar.tab.c"
    break;

  case 213: /* scalar_exp: scalar_exp '/' scalar_exp  */
#line 1534 "sqlgrammar.y"
                {
			sql_declare(scalar_exp_t, pscalar);
			pscalar->pscalar1 = (scalar_exp_t*)yyvsp[-2];
			pscalar->mathop = MATHOP_DIVIDE;
			pscalar->pscalar2 = (scalar_exp_t*)yyvsp[0];
			yyval = (LITEM)pscalar;
		}
#line 3566 "sqlgrammar.tab.c"
    break;

  case 214: /* scalar_exp: '+' scalar_exp  */
#line 1542 "sqlgrammar.y"
                {
			sql_declare(scalar_exp_t, pscalar);
			pscalar->pscalar1 = (scalar_exp_t*)yyvsp[0];
			pscalar->mathop = MATHOP_PLUS;
			pscalar->unary = 1;
			yyval = (LITEM)pscalar;
		}
#line 3578 "sqlgrammar.tab.c"
    break;

  case 215: /* scalar_exp: '-' scalar_exp  */
#line 1550 "sqlgrammar.y"
                {
			sql_declare(scalar_exp_t, pscalar);
			pscalar->pscalar1 = (scalar_exp_t*)yyvsp[0];
			pscalar->mathop = MATHOP_MINUS;
			pscalar->unary = 1;
			yyval = (LITEM)pscalar;
		}
#line 3590 "sqlgrammar.tab.c"
    break;

  case 216: /* scalar_exp: literal  */
#line 1558 "sqlgrammar.y"
                {
			sql_declare(scalar_exp_t, pscalar);
			pscalar->pliteral = (literal_t*)yyvsp[0];
			yyval = (LITEM)pscalar;
		}
#line 3600 "sqlgrammar.tab.c"
    break;

  case 217: /* scalar_exp: column_ref  */
#line 1564 "sqlgrammar.y"
                {
			sql_declare(scalar_exp_t, pscalar);
			pscalar->pcolumnref = (column_ref_t*)yyvsp[0];
			yyval = (LITEM)pscalar;
		}
#line 3610 "sqlgrammar.tab.c"
    break;

  case 218: /* scalar_exp: function_ref  */
#line 1570 "sqlgrammar.y"
                {
			sql_declare(scalar_exp_t, pscalar);
			pscalar->pfunction_ref = (function_ref_t*)yyvsp[0];
			yyval = (LITEM)pscalar;
		}
#line 3620 "sqlgrammar.tab.c"
    break;

  case 219: /* scalar_exp: '(' scalar_exp ')'  */
#line 1576 "sqlgrammar.y"
                {
			sql_declare(scalar_exp_t, pscalar);
			pscalar->pscalar1 = (scalar_exp_t*)yyvsp[-1];
			yyval = (LITEM)pscalar;
		}
#line 3630 "sqlgrammar.tab.c"
    break;

  case 220: /* scalar_exp_commalist: scalar_exp  */
#line 1585 "sqlgrammar.y"
                {
			yyval = _sql_create_list();
			_sql_add_tail(yyval, yyvsp[0]);
		}
#line 3639 "sqlgrammar.tab.c"
    break;

  case 221: /* scalar_exp_commalist: scalar_exp_commalist ',' scalar_exp  */
#line 1590 "sqlgrammar.y"
                {
			_sql_add_tail(yyvsp[-2], yyvsp[0]);
			yyval = yyvsp[-2];
		}
#line 3648 "sqlgrammar.tab.c"
    break;

  case 222: /* atom: parameter_ref  */
#line 1598 "sqlgrammar.y"
                {
			sql_declare(atom_t, patom);
			patom->which = 0;
			patom->pparam = (parameter_ref_t*)yyvsp[0];
			yyval = (LITEM)patom;
		}
#line 3659 "sqlgrammar.tab.c"
    break;

  case 223: /* atom: literal  */
#line 1605 "sqlgrammar.y"
                {
			sql_declare(atom_t, patom);
			patom->which = 1;
			patom->pliteral = (literal_t*)yyvsp[0];
			yyval = (LITEM)patom;
		}
#line 3670 "sqlgrammar.tab.c"
    break;

  case 224: /* atom: USER  */
#line 1612 "sqlgrammar.y"
                {
			sql_declare(atom_t, patom);
			patom->which = 2;
			patom->user = 1;
			yyval = (LITEM)patom;
		}
#line 3681 "sqlgrammar.tab.c"
    break;

  case 228: /* function_ref: AMMSC '(' '*' ')'  */
#line 1628 "sqlgrammar.y"
                {
			sql_declare(function_ref_t, pfunc);
			pfunc->name = (char*)yyvsp[-3];
			pfunc->asterisk = 1;
			yyval = (LITEM)pfunc;
		}
#line 3692 "sqlgrammar.tab.c"
    break;

  case 229: /* function_ref: AMMSC '(' DISTINCT column_ref ')'  */
#line 1635 "sqlgrammar.y"
                {
			sql_declare(function_ref_t, pfunc);
			pfunc->name = (char*)yyvsp[-4];
			pfunc->distinct = 1;
			pfunc->pcolumn = (column_ref_t*)yyvsp[-1];
			yyval = (LITEM)pfunc;
		}
#line 3704 "sqlgrammar.tab.c"
    break;

  case 230: /* function_ref: AMMSC '(' column_ref ')'  */
#line 1643 "sqlgrammar.y"
                {
			sql_declare(function_ref_t, pfunc);
			pfunc->name = (char*)yyvsp[-3];
			pfunc->pcolumn = (column_ref_t*)yyvsp[-1];
			yyval = (LITEM)pfunc;
		}
#line 3715 "sqlgrammar.tab.c"
    break;

  case 231: /* function_ref: AMMSC '(' ALL scalar_exp ')'  */
#line 1650 "sqlgrammar.y"
                {
			sql_declare(function_ref_t, pfunc);
			pfunc->name = (char*)yyvsp[-4];
			pfunc->all = 1;
			pfunc->pscalar = (column_ref_t*)yyvsp[-1];
			yyval = (LITEM)pfunc;
		}
#line 3727 "sqlgrammar.tab.c"
    break;

  case 232: /* function_ref: AMMSC '(' scalar_exp ')'  */
#line 1658 "sqlgrammar.y"
                {
			sql_declare(function_ref_t, pfunc);
			pfunc->name = (char*)yyvsp[-3];
			pfunc->pscalar = (column_ref_t*)yyvsp[-1];
			yyval = (LITEM)pfunc;
		}
#line 3738 "sqlgrammar.tab.c"
    break;

  case 233: /* function_ref: AMMSC '(' ')'  */
#line 1665 "sqlgrammar.y"
                {
			sql_declare(function_ref_t, pfunc);
			pfunc->name = (char*)yyvsp[-2];
			yyval = (LITEM)pfunc;
		}
#line 3748 "sqlgrammar.tab.c"
    break;

  case 234: /* literal: string_literal  */
#line 1674 "sqlgrammar.y"
                {
			yyval = yyvsp[0];
		}
#line 3756 "sqlgrammar.tab.c"
    break;

  case 235: /* literal: INTNUM  */
#line 1678 "sqlgrammar.y"
                {
			sql_declare(literal_t, plit);
			plit->l = atoi((const char*)yyvsp[0]);
			plit->which = 1;
			yyval = (LITEM)plit;
		}
#line 3767 "sqlgrammar.tab.c"
    break;

  case 236: /* literal: APPROXNUM  */
#line 1685 "sqlgrammar.y"
                {
			sql_declare(literal_t, plit);
			plit->d = atof((const char *)yyvsp[0]);
			plit->which = 2;
			yyval = (LITEM)plit;
		}
#line 3778 "sqlgrammar.tab.c"
    break;

  case 237: /* literal: '*'  */
#line 1692 "sqlgrammar.y"
                {
			sql_declare(literal_t, plit);
			plit->string = (char*)yyvsp[0];
			plit->which = 3;
			yyval = (LITEM)plit;
		}
#line 3789 "sqlgrammar.tab.c"
    break;

  case 238: /* literal: NAME '.' '*'  */
#line 1699 "sqlgrammar.y"
                {
			sql_declare(literal_t, plit);
			plit->string = (char*)yyvsp[-2];
			plit->which = 4;
			yyval = (LITEM)plit;
		}
#line 3800 "sqlgrammar.tab.c"
    break;

  case 239: /* literal: DATE_LITERAL  */
#line 1706 "sqlgrammar.y"
                {
			sql_declare(literal_t, plit);
			plit->string = (char*)yyvsp[0];
			plit->which = 5;
			yyval = (LITEM)plit;
		}
#line 3811 "sqlgrammar.tab.c"
    break;

  case 240: /* literal: TIME_LITERAL  */
#line 1713 "sqlgrammar.y"
                {
			sql_declare(literal_t, plit);
			plit->string = (char*)yyvsp[0];
			plit->which = 6;
			yyval = (LITEM)plit;
		}
#line 3822 "sqlgrammar.tab.c"
    break;

  case 241: /* string_literal: STRING  */
#line 1724 "sqlgrammar.y"
                {
			sql_declare(literal_t, plit);
			plit->string = (char*)yyvsp[0];
			plit->which = 0;
			yyval = (LITEM)plit;
		}
#line 3833 "sqlgrammar.tab.c"
    break;

  case 242: /* string_literal: string_literal STRING  */
#line 1732 "sqlgrammar.y"
                {
			literal_t *plit = (literal_t*)yyvsp[-1];
			char *tmp = __sql_alloc(strlen((char*)plit->string) + strlen((char*)yyvsp[0]) + 1);
			sprintf(tmp, "%s%s", plit->string, (char*)yyvsp[0]);
			plit->string = tmp;
			yyval = (LITEM)plit;
		}
#line 3845 "sqlgrammar.tab.c"
    break;

  case 243: /* table: NAME  */
#line 1744 "sqlgrammar.y"
                {
			sql_declare(table_t, ptable);
			ptable->table = (char*)yyvsp[0];
			yyval = (LITEM)ptable;
		}
#line 3855 "sqlgrammar.tab.c"
    break;

  case 244: /* table: NAME '.' NAME  */
#line 1750 "sqlgrammar.y"
                {
			sql_declare(table_t, ptable);
			ptable->owner = (char*)yyvsp[-2];
			ptable->table = (char*)yyvsp[0];
			yyval = (LITEM)ptable;
		}
#line 3866 "sqlgrammar.tab.c"
    break;

  case 245: /* trigger_name: NAME  */
#line 1760 "sqlgrammar.y"
                {
			trigger_name_t *pname = sql_alloc(trigger_name_t);
			pname->trigger = (char*)yyvsp[0];
			yyval = (LITEM)pname;
		}
#line 3876 "sqlgrammar.tab.c"
    break;

  case 246: /* trigger_name: NAME '.' NAME  */
#line 1766 "sqlgrammar.y"
                {
			trigger_name_t *pname = sql_alloc(trigger_name_t);
			pname->trigger = (char*)yyvsp[-2];
			pname->owner = (char*)yyvsp[0];
			yyval = (LITEM)pname;
		}
#line 3887 "sqlgrammar.tab.c"
    break;

  case 247: /* column_ref: NAME  */
#line 1776 "sqlgrammar.y"
                {
			sql_declare(column_ref_t, pcol);
			pcol->column = (char*)yyvsp[0];
			yyval = (LITEM)pcol;
		}
#line 3897 "sqlgrammar.tab.c"
    break;

  case 248: /* column_ref: NAME NAME  */
#line 1782 "sqlgrammar.y"
                {
			char *tmp;
			sql_declare(column_ref_t, pcol);
			pcol->column = (char*)yyvsp[-1];
			tmp = __sql_alloc(strlen((char*)yyvsp[0]) + 3);
			sprintf(tmp, "%s", (char*)yyvsp[0]);
			pcol->alias = tmp;
			yyval = (LITEM)pcol;
		}
#line 3911 "sqlgrammar.tab.c"
    break;

  case 249: /* column_ref: NAME AS NAME  */
#line 1792 "sqlgrammar.y"
                {
			char *tmp;
			sql_declare(column_ref_t, pcol);
			pcol->column = (char*)yyvsp[-2];
			tmp = __sql_alloc(strlen((char*)yyvsp[0]) + 3);
			sprintf(tmp, "%s", (char*)yyvsp[0]);
			pcol->alias = tmp;
			yyval = (LITEM)pcol;
		}
#line 3925 "sqlgrammar.tab.c"
    break;

  case 250: /* column_ref: NAME '.' NAME  */
#line 1802 "sqlgrammar.y"
                {
			sql_declare(column_ref_t, pcol);
			pcol->tablename = (char*)yyvsp[-2];
			pcol->column = (char*)yyvsp[0];
			yyval = (LITEM)pcol;
		}
#line 3936 "sqlgrammar.tab.c"
    break;

  case 251: /* column_ref: NAME '.' NAME NAME  */
#line 1809 "sqlgrammar.y"
                {
			char *tmp;
			sql_declare(column_ref_t, pcol);
			pcol->tablename = (char*)yyvsp[-3];
			pcol->column = (char*)yyvsp[-1];
			tmp = __sql_alloc(strlen((char*)yyvsp[0]) + 3);
			sprintf(tmp, "%s", (char*)yyvsp[0]);
			pcol->alias = tmp;
			yyval = (LITEM)pcol;
		}
#line 3951 "sqlgrammar.tab.c"
    break;

  case 252: /* column_ref: NAME '.' NAME AS NAME  */
#line 1820 "sqlgrammar.y"
                {
			char *tmp;
			sql_declare(column_ref_t, pcol);
			pcol->tablename = (char*)yyvsp[-4];
			pcol->column = (char*)yyvsp[-2];
			tmp = __sql_alloc(strlen((char*)yyvsp[0]) + 3);
			sprintf(tmp, "%s", (char*)yyvsp[0]);
			pcol->alias = tmp;
			yyval = (LITEM)pcol;
		}
#line 3966 "sqlgrammar.tab.c"
    break;

  case 253: /* column_ref: NAME '.' NAME '.' NAME  */
#line 1831 "sqlgrammar.y"
                {
			sql_declare(column_ref_t, pcol);
			pcol->tablename = (char*)yyvsp[-4];
			pcol->column = (char*)yyvsp[-2];
			pcol->alias = (char*)yyvsp[0];
			yyval = (LITEM)pcol;
		}
#line 3978 "sqlgrammar.tab.c"
    break;

  case 260: /* data_type: CHARACTER  */
#line 1851 "sqlgrammar.y"
                {
			sql_declare(data_type_t, ptype);
			ptype->type = DT_CHAR;
			ptype->scale = 1;
			yyval = (LITEM)ptype;
		}
#line 3989 "sqlgrammar.tab.c"
    break;

  case 261: /* data_type: CHARACTER '(' INTNUM ')'  */
#line 1858 "sqlgrammar.y"
                {
			sql_declare(data_type_t, ptype);
			ptype->type = DT_CHAR;
			ptype->scale = atoi((char*)yyvsp[-1]);
			yyval = (LITEM)ptype;
		}
#line 4000 "sqlgrammar.tab.c"
    break;

  case 262: /* data_type: NUMERIC  */
#line 1865 "sqlgrammar.y"
                {
			sql_declare(data_type_t, ptype);
			ptype->type = DT_NUMERIC;
			yyval = (LITEM)ptype;
		}
#line 4010 "sqlgrammar.tab.c"
    break;

  case 263: /* data_type: NUMERIC '(' INTNUM ')'  */
#line 1871 "sqlgrammar.y"
                {
			sql_declare(data_type_t, ptype);
			ptype->type = DT_NUMERIC;
			ptype->scale = atoi((char*)yyvsp[-1]);
			yyval = (LITEM)ptype;
		}
#line 4021 "sqlgrammar.tab.c"
    break;

  case 264: /* data_type: NUMERIC '(' INTNUM ',' INTNUM ')'  */
#line 1878 "sqlgrammar.y"
                {
			sql_declare(data_type_t, ptype);
			ptype->type = DT_NUMERIC;
			ptype->scale = atoi((char*)yyvsp[-3]);
			ptype->precision = atoi((char*)yyvsp[-1]);
			yyval = (LITEM)ptype;
		}
#line 4033 "sqlgrammar.tab.c"
    break;

  case 265: /* data_type: DECIMAL2  */
#line 1886 "sqlgrammar.y"
                {
			sql_declare(data_type_t, ptype);
			ptype->type = DT_DECIMAL;
			yyval = (LITEM)ptype;
		}
#line 4043 "sqlgrammar.tab.c"
    break;

  case 266: /* data_type: DECIMAL2 '(' INTNUM ')'  */
#line 1892 "sqlgrammar.y"
                {
			sql_declare(data_type_t, ptype);
			ptype->type = DT_DECIMAL;
			ptype->scale = atoi((char*)yyvsp[-1]);
			yyval = (LITEM)ptype;
		}
#line 4054 "sqlgrammar.tab.c"
    break;

  case 267: /* data_type: DECIMAL2 '(' INTNUM ',' INTNUM ')'  */
#line 1899 "sqlgrammar.y"
                {
			sql_declare(data_type_t, ptype);
			ptype->type = DT_DECIMAL;
			ptype->scale = atoi((char*)yyvsp[-3]);
			ptype->precision = atoi((char*)yyvsp[-1]);
			yyval = (LITEM)ptype;
		}
#line 4066 "sqlgrammar.tab.c"
    break;

  case 268: /* data_type: INTEGER  */
#line 1907 "sqlgrammar.y"
                {
			sql_declare(data_type_t, ptype);
			ptype->type = DT_INTEGER;
			yyval = (LITEM)ptype;
		}
#line 4076 "sqlgrammar.tab.c"
    break;

  case 269: /* data_type: SMALLINT  */
#line 1913 "sqlgrammar.y"
                {
			sql_declare(data_type_t, ptype);
			ptype->type = DT_SMALLINT;
			yyval = (LITEM)ptype;
		}
#line 4086 "sqlgrammar.tab.c"
    break;

  case 270: /* data_type: FLOAT2  */
#line 1919 "sqlgrammar.y"
                {
			sql_declare(data_type_t, ptype);
			ptype->type = DT_FLOAT;
			yyval = (LITEM)ptype;
		}
#line 4096 "sqlgrammar.tab.c"
    break;

  case 271: /* data_type: REAL  */
#line 1925 "sqlgrammar.y"
                {
			sql_declare(data_type_t, ptype);
			ptype->type = DT_REAL;
			yyval = (LITEM)ptype;
		}
#line 4106 "sqlgrammar.tab.c"
    break;

  case 272: /* data_type: DOUBLE2 PRECISION  */
#line 1931 "sqlgrammar.y"
                {
			sql_declare(data_type_t, ptype);
			ptype->type = DT_DOUBLE;
			yyval = (LITEM)ptype;
		}
#line 4116 "sqlgrammar.tab.c"
    break;

  case 273: /* data_type: VARCHAR  */
#line 1937 "sqlgrammar.y"
                {
			sql_declare(data_type_t, ptype);
			ptype->type = DT_VARCHAR;
			ptype->scale = 1;
			yyval = (LITEM)ptype;
		}
#line 4127 "sqlgrammar.tab.c"
    break;

  case 274: /* data_type: VARCHAR '(' INTNUM ')'  */
#line 1944 "sqlgrammar.y"
                {
			sql_declare(data_type_t, ptype);
			ptype->type = DT_VARCHAR;
			ptype->scale = atoi((char*)yyvsp[-1]);
			yyval = (LITEM)ptype;
		}
#line 4138 "sqlgrammar.tab.c"
    break;

  case 275: /* column: NAME  */
#line 1955 "sqlgrammar.y"
                        {
				yyval = yyvsp[0];
			}
#line 4146 "sqlgrammar.tab.c"
    break;

  case 276: /* cursor: NAME  */
#line 1961 "sqlgrammar.y"
                        {
				yyval = yyvsp[0];
			}
#line 4154 "sqlgrammar.tab.c"
    break;

  case 277: /* module: NAME  */
#line 1967 "sqlgrammar.y"
                        {
				yyval = yyvsp[0];
			}
#line 4162 "sqlgrammar.tab.c"
    break;

  case 278: /* parameter: ':' NAME  */
#line 1974 "sqlgrammar.y"
                        {
				yyval = yyvsp[0];
			}
#line 4170 "sqlgrammar.tab.c"
    break;

  case 279: /* procedure: NAME  */
#line 1980 "sqlgrammar.y"
                        {
				yyval = yyvsp[0];
			}
#line 4178 "sqlgrammar.tab.c"
    break;

  case 280: /* range_variable: NAME  */
#line 1986 "sqlgrammar.y"
                        {
				yyval = yyvsp[0];
			}
#line 4186 "sqlgrammar.tab.c"
    break;

  case 281: /* user: NAME  */
#line 1992 "sqlgrammar.y"
                        {
				yyval = yyvsp[0];
			}
#line 4194 "sqlgrammar.tab.c"
    break;


#line 4198 "sqlgrammar.tab.c"

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (root, YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, root);
          yychar = YYEMPTY;
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, root);
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
  yyerror (root, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, root);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, root);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1997 "sqlgrammar.y"

