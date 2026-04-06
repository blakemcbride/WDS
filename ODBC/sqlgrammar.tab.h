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

#ifndef YY_YY_SQLGRAMMAR_TAB_H_INCLUDED
# define YY_YY_SQLGRAMMAR_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NAME = 258,                    /* NAME  */
    STRING = 259,                  /* STRING  */
    INTNUM = 260,                  /* INTNUM  */
    APPROXNUM = 261,               /* APPROXNUM  */
    OR = 262,                      /* OR  */
    AND = 263,                     /* AND  */
    NOT = 264,                     /* NOT  */
    UMINUS = 265,                  /* UMINUS  */
    ALL = 266,                     /* ALL  */
    AMMSC = 267,                   /* AMMSC  */
    ANY = 268,                     /* ANY  */
    AS = 269,                      /* AS  */
    ASC = 270,                     /* ASC  */
    AUTHORIZATION = 271,           /* AUTHORIZATION  */
    BETWEEN = 272,                 /* BETWEEN  */
    BY = 273,                      /* BY  */
    CHARACTER = 274,               /* CHARACTER  */
    CHECK = 275,                   /* CHECK  */
    CLOSE = 276,                   /* CLOSE  */
    COMMIT = 277,                  /* COMMIT  */
    CREATE = 278,                  /* CREATE  */
    CURRENT = 279,                 /* CURRENT  */
    CURSOR = 280,                  /* CURSOR  */
    DATE_LITERAL = 281,            /* DATE_LITERAL  */
    DECIMAL2 = 282,                /* DECIMAL2  */
    DECLARE = 283,                 /* DECLARE  */
    DEFAULT = 284,                 /* DEFAULT  */
    DELETE2 = 285,                 /* DELETE2  */
    DESC = 286,                    /* DESC  */
    DISTINCT = 287,                /* DISTINCT  */
    DOUBLE2 = 288,                 /* DOUBLE2  */
    DROP = 289,                    /* DROP  */
    EQUALS = 290,                  /* EQUALS  */
    ESCAPE = 291,                  /* ESCAPE  */
    EXISTS = 292,                  /* EXISTS  */
    FETCH = 293,                   /* FETCH  */
    FLOAT2 = 294,                  /* FLOAT2  */
    FOR = 295,                     /* FOR  */
    FOREIGN = 296,                 /* FOREIGN  */
    FROM = 297,                    /* FROM  */
    GRANT = 298,                   /* GRANT  */
    GREATER_THAN = 299,            /* GREATER_THAN  */
    GREATER_THAN_EQ = 300,         /* GREATER_THAN_EQ  */
    GROUP = 301,                   /* GROUP  */
    HAVING = 302,                  /* HAVING  */
    IN2 = 303,                     /* IN2  */
    INDICATOR = 304,               /* INDICATOR  */
    INNER = 305,                   /* INNER  */
    INSERT = 306,                  /* INSERT  */
    INTEGER = 307,                 /* INTEGER  */
    INTO = 308,                    /* INTO  */
    IS = 309,                      /* IS  */
    JOIN = 310,                    /* JOIN  */
    KEY = 311,                     /* KEY  */
    LANGUAGE = 312,                /* LANGUAGE  */
    LEFT = 313,                    /* LEFT  */
    LESS_THAN = 314,               /* LESS_THAN  */
    LESS_THAN_EQ = 315,            /* LESS_THAN_EQ  */
    LIKE = 316,                    /* LIKE  */
    MODULE = 317,                  /* MODULE  */
    NOT_EQUALS = 318,              /* NOT_EQUALS  */
    NULLX = 319,                   /* NULLX  */
    NUMERIC = 320,                 /* NUMERIC  */
    OF = 321,                      /* OF  */
    ON = 322,                      /* ON  */
    OPEN = 323,                    /* OPEN  */
    OPTION = 324,                  /* OPTION  */
    ORDER = 325,                   /* ORDER  */
    OUTER = 326,                   /* OUTER  */
    PRECISION = 327,               /* PRECISION  */
    PRIMARY = 328,                 /* PRIMARY  */
    PRIVILEGES = 329,              /* PRIVILEGES  */
    PROCEDURE = 330,               /* PROCEDURE  */
    PUBLIC = 331,                  /* PUBLIC  */
    REAL = 332,                    /* REAL  */
    REFERENCES = 333,              /* REFERENCES  */
    RIGHT = 334,                   /* RIGHT  */
    ROLLBACK = 335,                /* ROLLBACK  */
    SCHEMA = 336,                  /* SCHEMA  */
    SELECT = 337,                  /* SELECT  */
    SET = 338,                     /* SET  */
    SMALLINT = 339,                /* SMALLINT  */
    SOME = 340,                    /* SOME  */
    SQLCODE = 341,                 /* SQLCODE  */
    SYSDATE = 342,                 /* SYSDATE  */
    TABLE = 343,                   /* TABLE  */
    TIME_LITERAL = 344,            /* TIME_LITERAL  */
    TO = 345,                      /* TO  */
    TRIGGER = 346,                 /* TRIGGER  */
    UNION = 347,                   /* UNION  */
    UNIQUE = 348,                  /* UNIQUE  */
    UPDATE = 349,                  /* UPDATE  */
    USER = 350,                    /* USER  */
    VALUES = 351,                  /* VALUES  */
    VIEW = 352,                    /* VIEW  */
    WHERE = 353,                   /* WHERE  */
    WITH = 354,                    /* WITH  */
    WORK = 355,                    /* WORK  */
    COBOL = 356,                   /* COBOL  */
    FORTRAN = 357,                 /* FORTRAN  */
    PASCAL2 = 358,                 /* PASCAL2  */
    PLI = 359,                     /* PLI  */
    C = 360,                       /* C  */
    ADA = 361,                     /* ADA  */
    VARCHAR = 362                  /* VARCHAR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void *root);


#endif /* !YY_YY_SQLGRAMMAR_TAB_H_INCLUDED  */
