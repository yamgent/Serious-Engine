/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     c_float = 258,
     c_int = 259,
     c_string = 260,
     c_char = 261,
     identifier = 262,
     k_INDEX = 263,
     k_FLOAT = 264,
     k_CTString = 265,
     k_void = 266,
     k_const = 267,
     k_user = 268,
     k_persistent = 269,
     k_extern = 270,
     k_pre = 271,
     k_post = 272,
     k_help = 273,
     k_if = 274,
     k_else = 275,
     k_else_if = 276,
     SHL = 277,
     SHR = 278,
     EQ = 279,
     NEQ = 280,
     GEQ = 281,
     LEQ = 282,
     LOGAND = 283,
     LOGOR = 284,
     block_beg = 285,
     block_end = 286,
     TYPECAST = 287,
     SIGN = 288
   };
#endif
/* Tokens.  */
#define c_float 258
#define c_int 259
#define c_string 260
#define c_char 261
#define identifier 262
#define k_INDEX 263
#define k_FLOAT 264
#define k_CTString 265
#define k_void 266
#define k_const 267
#define k_user 268
#define k_persistent 269
#define k_extern 270
#define k_pre 271
#define k_post 272
#define k_help 273
#define k_if 274
#define k_else 275
#define k_else_if 276
#define SHL 277
#define SHR 278
#define EQ 279
#define NEQ 280
#define GEQ 281
#define LEQ 282
#define LOGAND 283
#define LOGOR 284
#define block_beg 285
#define block_end 286
#define TYPECAST 287
#define SIGN 288




/* Copy the first part of user declarations.  */
#line 1 "./Engine/Base/Parser.y"

#include <Engine/StdH.h>

#include <Engine/Base/Console.h>
#include <Engine/Base/Shell.h>
#include "ParsingSymbols.h"

#include <Engine/Templates/DynamicStackArray.cpp>
#include <Engine/Templates/AllocationArray.cpp>

#line 13 "./Engine/Base/Parser.y"

// turn off over-helpful bit of bison... --ryan.
#ifdef __GNUC__
#define __attribute__(x)
#endif

#define YYERROR_VERBOSE 1
// if error occurs in parsing
void yyerror(char *str)
{
  // just report the string
  _pShell->ErrorF("%s", str);
};

static BOOL _bExecNextElse = FALSE;
FLOAT fDummy = -666.0f;

static INDEX _iStack = 0;
static UBYTE _ubStack[1024];

INDEX PushExpression(value &v)
{
  if (v.sttType==STT_FLOAT) {
    FLOAT f = v.fFloat;
    memcpy(_ubStack+_iStack, &f, sizeof(f));
    _iStack+=sizeof(f);
    return sizeof(f);
  } else if (v.sttType==STT_INDEX) {
    INDEX i = v.iIndex;
    memcpy(_ubStack+_iStack, &i, sizeof(i));
    _iStack+=sizeof(i);
    return sizeof(i);
  } else if (v.sttType==STT_STRING) {
    CTString &str = _shell_astrTempStrings.Push();
    str = v.strString;
    CTString *pstr = &str;
    memcpy(_ubStack+_iStack, &pstr, sizeof(pstr));
    _iStack+=sizeof(pstr);
    return sizeof(pstr);
  } else {
    return 0;
  }
}

BOOL MatchTypes(value &v1, value &v2)
{
  if (v1.sttType==STT_FLOAT && v2.sttType==STT_FLOAT) {
    return TRUE;
  } else if (v1.sttType==STT_STRING && v2.sttType==STT_STRING) {
    return TRUE;
  } else if (v1.sttType==STT_INDEX && v2.sttType==STT_INDEX) {
    return TRUE;
  } else {
    v1.sttType = STT_ILLEGAL;
    v2.sttType = STT_ILLEGAL;
    _pShell->ErrorF("Type mismatch");
    return FALSE;
  }
}

void Declaration(
  ULONG ulQualifiers, INDEX istType, CShellSymbol &ssNew,
  INDEX (*pPreFunc)(INDEX), void (*pPostFunc)(INDEX))
{
  // if external
  if (ulQualifiers&SSF_EXTERNAL) {
    // get it a new value
    if (_shell_ast[istType].st_sttType==STT_INDEX
      ||_shell_ast[istType].st_sttType==STT_FLOAT) {
      _pvNextToDeclare = &_shell_afExtFloats.Push();
    } else if (_shell_ast[istType].st_sttType==STT_STRING) {
      _pvNextToDeclare = &_shell_astrExtStrings.Push();
    } else {
      NOTHING;
    }
  }

  // if not parsing an external declaration
  if (_pvNextToDeclare==NULL) {
    // error
    _pShell->ErrorF("Only external declarations are supported");
    return;
  }

  // if the symbol is declared already
  if (ssNew.IsDeclared()) {
    // if the declaration is not identical
    if (!ShellTypeIsSame(ssNew.ss_istType, istType) || 
      ((ssNew.ss_ulFlags&SSF_CONSTANT)!=(ulQualifiers&SSF_CONSTANT))) {
      // error
      _pShell->ErrorF("Symbol '%s' is already declared diferrently", (const char *) ssNew.ss_strName);
      return;
    }

    // copy its value
    if (_shell_ast[ssNew.ss_istType].st_sttType==STT_INDEX) {
      *(INDEX*)_pvNextToDeclare = *(INDEX*)ssNew.ss_pvValue;
    } else if (_shell_ast[ssNew.ss_istType].st_sttType==STT_FLOAT) {
      *(FLOAT*)_pvNextToDeclare = *(FLOAT*)ssNew.ss_pvValue;
    } else if (_shell_ast[ssNew.ss_istType].st_sttType==STT_STRING) {
      *(CTString*)_pvNextToDeclare = *(CTString*)ssNew.ss_pvValue;
    } else if (_shell_ast[ssNew.ss_istType].st_sttType==STT_ARRAY) {
      NOTHING;  // array values are not retained
    } else if (_shell_ast[ssNew.ss_istType].st_sttType==STT_FUNCTION) {
      NOTHING;  // function values are not retained
    } else {
      // error
      _pShell->ErrorF("'%s': old value couldn't be retained", (const char *) ssNew.ss_strName);
      return;
    }
  }

  // set the type to given type
  if (!ssNew.IsDeclared()) {
    ssNew.ss_istType = ShellTypeMakeDuplicate(istType);
  }
  // set the value for the external symbol if not already set
  if (ssNew.ss_pvValue==NULL || !(ulQualifiers&SSF_EXTERNAL)) {
    ssNew.ss_pvValue = _pvNextToDeclare;
  }
  // remember qualifiers (if already predeclared - keep old flags)
  ssNew.ss_ulFlags |= ulQualifiers;
  // remember pre and post functions
  if (ssNew.ss_pPreFunc==NULL) {
    ssNew.ss_pPreFunc = (BOOL (*)(void *))pPreFunc;
  }
  if (ssNew.ss_pPostFunc==NULL) {
    ssNew.ss_pPostFunc = (void (*)(void *))pPostFunc;
  }
}

void DoComparison(value &vRes, value &v0, value &v1, int token)
{
  MatchTypes(v0, v1);

  vRes.sttType = STT_INDEX;
  if (v0.sttType == STT_FLOAT) {
    switch (token) {
    case '<': vRes.iIndex = v0.fFloat <v1.fFloat; break;
    case '>': vRes.iIndex = v0.fFloat >v1.fFloat; break;
    case '=': vRes.iIndex = v0.fFloat==v1.fFloat; break;
    case '!': vRes.iIndex = v0.fFloat!=v1.fFloat; break;
    case '}': vRes.iIndex = v0.fFloat>=v1.fFloat; break;
    case '{': vRes.iIndex = v0.fFloat<=v1.fFloat; break;
    default: ASSERT(FALSE);
      vRes.sttType = STT_INDEX;
      vRes.iIndex = 0;
    }
  } else if (v0.sttType == STT_INDEX) {
    switch (token) {
    case '<': vRes.iIndex = v0.iIndex <v1.iIndex; break;
    case '>': vRes.iIndex = v0.iIndex >v1.iIndex; break;
    case '=': vRes.iIndex = v0.iIndex==v1.iIndex; break;
    case '!': vRes.iIndex = v0.iIndex!=v1.iIndex; break;
    case '}': vRes.iIndex = v0.iIndex>=v1.iIndex; break;
    case '{': vRes.iIndex = v0.iIndex<=v1.iIndex; break;
    default: ASSERT(FALSE);
      vRes.sttType = STT_INDEX;
      vRes.iIndex = 0;
    }
  } else if (v0.sttType == STT_STRING) {
    switch (token) {
    case '<': vRes.iIndex = stricmp(v0.strString, v1.strString)  < 0; break;
    case '>': vRes.iIndex = stricmp(v0.strString, v1.strString)  > 0; break;
    case '=': vRes.iIndex = stricmp(v0.strString, v1.strString) == 0; break;
    case '!': vRes.iIndex = stricmp(v0.strString, v1.strString) != 0; break;
    case '}': vRes.iIndex = stricmp(v0.strString, v1.strString) >= 0; break;
    case '{': vRes.iIndex = stricmp(v0.strString, v1.strString) <= 0; break;
    default: ASSERT(FALSE);
      vRes.sttType = STT_INDEX;
      vRes.iIndex = 0;
    }
  } else {
    vRes.sttType = STT_INDEX;
    vRes.iIndex = 0;
  }
}


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 197 "./Engine/Base/Parser.y"
{
  value val;                  // for constants and expressions
  arguments arg;               // for function input arguments
  ULONG ulFlags;              // for declaration qualifiers
  INDEX istType;              // for types
  CShellSymbol *pssSymbol;    // for symbols
  struct LValue lvLValue;
  INDEX (*pPreFunc)(INDEX);  // pre-set function for a variable
  void (*pPostFunc)(INDEX); // post-set function for a variable
}
/* Line 193 of yacc.c.  */
#line 363 "./Engine/Base/Parser.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 208 "./Engine/Base/Parser.y"

  extern int yylex(YYSTYPE *lvalp);


/* Line 216 of yacc.c.  */
#line 379 "./Engine/Base/Parser.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   457

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNRULES -- Number of states.  */
#define YYNSTATES  156

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,     2,     2,    42,    33,     2,
      49,    50,    40,    39,    47,    38,     2,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,    48,
      36,    32,    37,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,    34,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    35,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    43,    45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    11,    15,    16,    19,    20,
      23,    26,    29,    32,    33,    35,    37,    39,    41,    43,
      44,    48,    49,    53,    54,    56,    58,    62,    70,    79,
      90,    92,    94,    97,   102,   109,   112,   117,   122,   123,
     124,   133,   134,   135,   136,   145,   146,   150,   152,   157,
     158,   160,   162,   166,   168,   170,   172,   174,   178,   182,
     186,   190,   194,   198,   202,   206,   210,   214,   218,   222,
     226,   230,   234,   238,   242,   246,   249,   252,   255,   260,
     265,   270,   275
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    64,    -1,    56,    -1,    30,    56,    31,
      -1,    30,    56,    31,    -1,    -1,    65,    56,    -1,    -1,
      57,    12,    -1,    57,    13,    -1,    57,    14,    -1,    57,
      15,    -1,    -1,     5,    -1,     9,    -1,     8,    -1,    10,
      -1,    11,    -1,    -1,    16,    46,     7,    -1,    -1,    17,
      46,     7,    -1,    -1,    63,    -1,    59,    -1,    63,    47,
      59,    -1,    57,    59,     7,    60,    61,    58,    48,    -1,
      57,    59,     7,    49,    62,    50,    58,    48,    -1,    57,
      59,     7,    51,    75,    52,    60,    61,    58,    48,    -1,
      48,    -1,    55,    -1,    75,    48,    -1,    72,    32,    75,
      48,    -1,    57,    59,     7,    32,    75,    48,    -1,    18,
       7,    -1,    18,     7,    49,    50,    -1,    18,     7,    51,
      52,    -1,    -1,    -1,    19,    49,    75,    50,    66,    55,
      67,    68,    -1,    -1,    -1,    -1,    21,    49,    75,    50,
      69,    55,    70,    68,    -1,    -1,    20,    71,    55,    -1,
       7,    -1,     7,    51,    75,    52,    -1,    -1,    74,    -1,
      75,    -1,    74,    47,    75,    -1,     3,    -1,     4,    -1,
       5,    -1,    72,    -1,    75,    22,    75,    -1,    75,    23,
      75,    -1,    75,    33,    75,    -1,    75,    35,    75,    -1,
      75,    34,    75,    -1,    75,    28,    75,    -1,    75,    29,
      75,    -1,    75,    39,    75,    -1,    75,    38,    75,    -1,
      75,    40,    75,    -1,    75,    41,    75,    -1,    75,    42,
      75,    -1,    75,    36,    75,    -1,    75,    37,    75,    -1,
      75,    24,    75,    -1,    75,    25,    75,    -1,    75,    26,
      75,    -1,    75,    27,    75,    -1,    38,    75,    -1,    39,
      75,    -1,    44,    75,    -1,    49,     9,    50,    75,    -1,
      49,     8,    50,    75,    -1,    49,    10,    50,    75,    -1,
       7,    49,    73,    50,    -1,    49,    75,    50,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   275,   275,   276,   280,   281,   284,   286,   290,   293,
     296,   299,   302,   307,   310,   317,   320,   323,   326,   331,
     334,   347,   350,   363,   367,   373,   381,   392,   396,   405,
     415,   418,   421,   435,   473,   507,   511,   515,   519,   529,
     519,   535,   538,   554,   538,   559,   559,   567,   592,   632,
     637,   643,   648,   655,   659,   663,   667,   685,   698,   712,
     726,   740,   756,   770,   785,   804,   820,   836,   858,   874,
     877,   880,   883,   886,   889,   895,   909,   921,   934,   948,
     962,   979,  1075
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "c_float", "c_int", "c_string", "c_char",
  "identifier", "k_INDEX", "k_FLOAT", "k_CTString", "k_void", "k_const",
  "k_user", "k_persistent", "k_extern", "k_pre", "k_post", "k_help",
  "k_if", "k_else", "k_else_if", "SHL", "SHR", "EQ", "NEQ", "GEQ", "LEQ",
  "LOGAND", "LOGOR", "block_beg", "block_end", "'='", "'&'", "'^'", "'|'",
  "'<'", "'>'", "'-'", "'+'", "'*'", "'/'", "'%'", "TYPECAST", "'!'",
  "SIGN", "':'", "','", "';'", "'('", "')'", "'['", "']'", "$accept",
  "program", "block", "statements", "declaration_qualifiers", "opt_string",
  "type_specifier", "pre_func_opt", "post_func_opt", "parameter_list_opt",
  "parameter_list", "declaration", "statement", "@1", "@2", "opt_else",
  "@3", "@4", "@5", "lvalue", "argument_expression_list_opt",
  "argument_expression_list", "expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,    61,    38,    94,   124,    60,    62,    45,    43,
      42,    47,    37,   287,    33,   288,    58,    44,    59,    40,
      41,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    55,    55,    56,    56,    57,    57,
      57,    57,    57,    58,    58,    59,    59,    59,    59,    60,
      60,    61,    61,    62,    62,    63,    63,    64,    64,    64,
      65,    65,    65,    65,    65,    65,    65,    65,    66,    67,
      65,    68,    69,    70,    68,    71,    68,    72,    72,    73,
      73,    74,    74,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     3,     0,     2,     0,     2,
       2,     2,     2,     0,     1,     1,     1,     1,     1,     0,
       3,     0,     3,     0,     1,     1,     3,     7,     8,    10,
       1,     1,     2,     4,     6,     2,     4,     4,     0,     0,
       8,     0,     0,     0,     8,     0,     3,     1,     4,     0,
       1,     1,     3,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     4,     4,
       4,     4,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,    53,    54,    55,    47,     0,     0,     8,     0,     0,
       0,    30,     0,     0,    31,     3,     0,     2,     8,    56,
       0,    49,     0,    35,     0,     0,     0,    56,    75,    76,
      77,     0,     0,     0,     0,     1,    16,    15,    17,    18,
       9,    10,    11,    12,     0,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,    50,    51,     0,
       0,     0,     0,     4,     0,     0,     0,     0,    82,    19,
       0,    57,    58,    71,    72,    73,    74,    62,    63,    59,
      61,    60,    69,    70,    65,    64,    66,    67,    68,    81,
       0,    48,    36,    37,    38,     0,    79,    78,    80,     0,
       0,    23,     0,    21,    33,    52,     0,     0,     0,    25,
       0,    24,     0,     0,    13,    39,    20,    34,    13,     0,
      19,     0,    14,     0,    41,     0,    26,    21,    22,    27,
      45,     0,    40,    28,    13,     0,     0,     0,    46,     0,
      29,    42,     0,    43,    41,    44
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    26,   133,    44,   113,   124,   120,
     121,    17,    18,   116,   134,   142,   152,   154,   145,    27,
      66,    67,    20
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -117
static const yytype_int16 yypact[] =
{
     109,  -117,  -117,  -117,    30,    -2,   -34,   137,    80,    80,
      80,  -117,   156,    27,  -117,  -117,    22,  -117,    59,    25,
     313,    80,    80,    45,    80,    43,    22,  -117,  -117,  -117,
    -117,    32,    36,    49,   226,  -117,  -117,  -117,  -117,  -117,
    -117,  -117,  -117,  -117,    68,  -117,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,  -117,    51,    53,   394,   184,
      55,    58,   255,  -117,   104,    80,    80,    80,  -117,    44,
     340,    92,   231,   149,   149,   149,   149,   -16,   -16,   415,
     415,   415,   149,   149,    95,    95,  -117,  -117,  -117,  -117,
      80,  -117,  -117,  -117,  -117,    85,  -117,  -117,  -117,    79,
      80,   112,    80,   126,  -117,   394,    96,   138,   367,  -117,
      99,   103,   205,   100,   146,  -117,  -117,  -117,   146,   112,
     136,   147,  -117,   114,    50,   121,  -117,   126,  -117,  -117,
    -117,   124,  -117,  -117,   146,    96,    80,   122,  -117,   284,
    -117,  -117,    96,  -117,    50,  -117
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -117,  -117,   -87,    54,   174,  -116,   -23,    47,    41,  -117,
    -117,  -117,  -117,  -117,  -117,    26,  -117,  -117,  -117,    73,
    -117,  -117,    -8
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -7
static const yytype_int16 yytable[] =
{
      28,    29,    30,    74,    34,    23,    47,    48,    49,    50,
      51,    52,   135,    68,    69,    24,    72,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    35,   147,   125,
      36,    37,    38,    39,    40,    41,    42,    43,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    46,   148,    -6,
     109,    25,     1,     2,     3,   153,     4,   106,   107,   108,
     140,   141,    45,    19,    73,    79,   110,     5,     6,    21,
      19,    22,    75,     1,     2,     3,    76,     4,   119,     7,
      -6,    19,   115,   111,    70,   112,    71,     8,     9,    77,
     100,    99,   118,    10,   122,   102,   136,    11,    12,    -6,
     103,   105,     1,     2,     3,    48,     4,   110,     8,     9,
      36,    37,    38,    39,    10,   117,     7,     5,     6,    12,
      60,    61,    62,    63,    64,    62,    63,    64,   149,     7,
       1,     2,     3,   123,     4,   126,   131,     8,     9,   128,
     129,   132,   109,    10,   138,     5,     6,    11,    12,     1,
       2,     3,   139,     4,    31,    32,    33,     7,    -6,   143,
     150,    47,    48,   146,    16,     8,     9,   137,   144,     0,
     155,    10,     0,     0,     0,    11,    12,    60,    61,    62,
      63,    64,     0,     0,     8,     9,     0,     0,     0,     0,
      10,     0,     0,     0,     0,    12,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,     0,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    47,    48,    49,
      50,    51,    52,    53,    54,     0,   101,     0,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    47,    48,
      49,    50,    51,    52,    53,    54,     0,   130,     0,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    60,
      61,    62,    63,    64,     0,     0,    78,    47,    48,    49,
      50,    51,    52,    53,    54,     0,     0,     0,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,   104,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,     0,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,     0,   151,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,     0,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     0,     0,     0,     0,
       0,    65,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,     0,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,   114,    47,
      48,    49,    50,    51,    52,    53,    54,     0,     0,     0,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       0,     0,     0,     0,     0,   127,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,     0,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    47,    48,    49,
      50,    51,    52,     0,     0,     0,     0,     0,     0,     0,
       0,    58,    59,    60,    61,    62,    63,    64
};

static const yytype_int16 yycheck[] =
{
       8,     9,    10,    26,    12,     7,    22,    23,    24,    25,
      26,    27,   128,    21,    22,    49,    24,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     0,   144,   116,
       8,     9,    10,    11,    12,    13,    14,    15,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    32,   145,     0,
      16,     7,     3,     4,     5,   152,     7,    75,    76,    77,
      20,    21,    18,     0,    31,     7,    32,    18,    19,    49,
       7,    51,    50,     3,     4,     5,    50,     7,   111,    30,
      31,    18,   100,    49,    49,    51,    51,    38,    39,    50,
      47,    50,   110,    44,   112,    50,   129,    48,    49,     0,
      52,     7,     3,     4,     5,    23,     7,    32,    38,    39,
       8,     9,    10,    11,    44,    46,    30,    18,    19,    49,
      38,    39,    40,    41,    42,    40,    41,    42,   146,    30,
       3,     4,     5,    17,     7,     7,    46,    38,    39,    50,
      47,     5,    16,    44,     7,    18,    19,    48,    49,     3,
       4,     5,    48,     7,     8,     9,    10,    30,    31,    48,
      48,    22,    23,    49,     0,    38,    39,   130,   137,    -1,
     154,    44,    -1,    -1,    -1,    48,    49,    38,    39,    40,
      41,    42,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    49,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    52,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    52,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    38,
      39,    40,    41,    42,    -1,    -1,    50,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    48,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    48,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    48,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    41,    42
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,    18,    19,    30,    38,    39,
      44,    48,    49,    54,    55,    56,    57,    64,    65,    72,
      75,    49,    51,     7,    49,    56,    57,    72,    75,    75,
      75,     8,     9,    10,    75,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    59,    56,    32,    22,    23,    24,
      25,    26,    27,    28,    29,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    48,    73,    74,    75,    75,
      49,    51,    75,    31,    59,    50,    50,    50,    50,     7,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    50,
      47,    52,    50,    52,    50,     7,    75,    75,    75,    16,
      32,    49,    51,    60,    48,    75,    66,    46,    75,    59,
      62,    63,    75,    17,    61,    55,     7,    48,    50,    47,
      52,    46,     5,    58,    67,    58,    59,    60,     7,    48,
      20,    21,    68,    48,    61,    71,    49,    58,    55,    75,
      48,    50,    69,    55,    70,    68
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 8:
#line 290 "./Engine/Base/Parser.y"
    {
  (yyval.ulFlags) = 0;
;}
    break;

  case 9:
#line 293 "./Engine/Base/Parser.y"
    {
  (yyval.ulFlags) = (yyvsp[(1) - (2)].ulFlags) | SSF_CONSTANT;
;}
    break;

  case 10:
#line 296 "./Engine/Base/Parser.y"
    {
  (yyval.ulFlags) = (yyvsp[(1) - (2)].ulFlags) | SSF_USER;
;}
    break;

  case 11:
#line 299 "./Engine/Base/Parser.y"
    {
  (yyval.ulFlags) = (yyvsp[(1) - (2)].ulFlags) | SSF_PERSISTENT;
;}
    break;

  case 12:
#line 302 "./Engine/Base/Parser.y"
    {
  (yyval.ulFlags) = (yyvsp[(1) - (2)].ulFlags) | SSF_EXTERNAL;
;}
    break;

  case 13:
#line 307 "./Engine/Base/Parser.y"
    {
  (yyval.val).strString = "";
;}
    break;

  case 14:
#line 310 "./Engine/Base/Parser.y"
    {
  // !!!! remove this option
  //_pShell->ErrorF("Warning: symbol comments are not supported");
  (yyval.val).strString = (yyvsp[(1) - (1)].val).strString;
;}
    break;

  case 15:
#line 317 "./Engine/Base/Parser.y"
    {
  (yyval.istType) = ShellTypeNewFloat();
;}
    break;

  case 16:
#line 320 "./Engine/Base/Parser.y"
    {
  (yyval.istType) = ShellTypeNewIndex();
;}
    break;

  case 17:
#line 323 "./Engine/Base/Parser.y"
    {
  (yyval.istType) = ShellTypeNewString();
;}
    break;

  case 18:
#line 326 "./Engine/Base/Parser.y"
    {
  (yyval.istType) = ShellTypeNewVoid();
;}
    break;

  case 19:
#line 331 "./Engine/Base/Parser.y"
    {
  (yyval.pPreFunc) = NULL;
;}
    break;

  case 20:
#line 334 "./Engine/Base/Parser.y"
    {
  if (_shell_ast[(yyvsp[(3) - (3)].pssSymbol)->ss_istType].st_sttType!=STT_FUNCTION
    ||_shell_ast[_shell_ast[(yyvsp[(3) - (3)].pssSymbol)->ss_istType].st_istBaseType].st_sttType!=STT_INDEX
    ||_shell_ast[(yyvsp[(3) - (3)].pssSymbol)->ss_istType].st_istFirstArgument!=_shell_ast[(yyvsp[(3) - (3)].pssSymbol)->ss_istType].st_istLastArgument
    ||_shell_ast[_shell_ast[(yyvsp[(3) - (3)].pssSymbol)->ss_istType].st_istFirstArgument].st_sttType!=STT_INDEX) {
    _pShell->ErrorF("'%s' must return 'INDEX' and take 'INDEX' as input", (const char *) (yyvsp[(3) - (3)].pssSymbol)->ss_strName);
  } else {
    void *pv = (yyvsp[(3) - (3)].pssSymbol)->ss_pvValue;
    (yyval.pPreFunc) = (INDEX(*)(INDEX))(yyvsp[(3) - (3)].pssSymbol)->ss_pvValue;
  }
;}
    break;

  case 21:
#line 347 "./Engine/Base/Parser.y"
    {
  (yyval.pPostFunc) = NULL;
;}
    break;

  case 22:
#line 350 "./Engine/Base/Parser.y"
    {
  if (_shell_ast[(yyvsp[(3) - (3)].pssSymbol)->ss_istType].st_sttType!=STT_FUNCTION
    ||_shell_ast[_shell_ast[(yyvsp[(3) - (3)].pssSymbol)->ss_istType].st_istBaseType].st_sttType!=STT_VOID
    ||_shell_ast[(yyvsp[(3) - (3)].pssSymbol)->ss_istType].st_istFirstArgument!=_shell_ast[(yyvsp[(3) - (3)].pssSymbol)->ss_istType].st_istLastArgument
    ||_shell_ast[_shell_ast[(yyvsp[(3) - (3)].pssSymbol)->ss_istType].st_istFirstArgument].st_sttType!=STT_INDEX) {
    _pShell->ErrorF("'%s' must return 'void' and take 'INDEX' as input", (const char *) (yyvsp[(3) - (3)].pssSymbol)->ss_strName);
  } else {
    (yyval.pPostFunc) = (void(*)(INDEX))(yyvsp[(3) - (3)].pssSymbol)->ss_pvValue;
  }
;}
    break;

  case 23:
#line 363 "./Engine/Base/Parser.y"
    {
  (yyval.istType) = ShellTypeNewFunction(0);
  ShellTypeAddFunctionArgument((yyval.istType), ShellTypeNewVoid());
;}
    break;

  case 24:
#line 367 "./Engine/Base/Parser.y"
    {
  (yyval.istType) = (yyvsp[(1) - (1)].istType);
;}
    break;

  case 25:
#line 373 "./Engine/Base/Parser.y"
    {
  (yyval.istType) = ShellTypeNewFunction(0);
  ShellTypeAddFunctionArgument((yyval.istType), (yyvsp[(1) - (1)].istType));
;}
    break;

  case 26:
#line 381 "./Engine/Base/Parser.y"
    {
  (yyval.istType) = (yyvsp[(1) - (3)].istType);
  ShellTypeAddFunctionArgument((yyval.istType), (yyvsp[(3) - (3)].istType));
;}
    break;

  case 27:
#line 392 "./Engine/Base/Parser.y"
    {
  Declaration((yyvsp[(1) - (7)].ulFlags), (yyvsp[(2) - (7)].istType), *(yyvsp[(3) - (7)].pssSymbol), (yyvsp[(4) - (7)].pPreFunc), (yyvsp[(5) - (7)].pPostFunc));
  ShellTypeDelete((yyvsp[(2) - (7)].istType));
;}
    break;

  case 28:
#line 396 "./Engine/Base/Parser.y"
    {
  // take function from the parameter list and set its return type
  _shell_ast[(yyvsp[(5) - (8)].istType)].st_istBaseType = (yyvsp[(2) - (8)].istType);
  (yyvsp[(2) - (8)].istType) = (yyvsp[(5) - (8)].istType);
  // declare it
  Declaration((yyvsp[(1) - (8)].ulFlags), (yyvsp[(2) - (8)].istType), *(yyvsp[(3) - (8)].pssSymbol), NULL, NULL);
  // free the type (declaration will make a copy)
  ShellTypeDelete((yyvsp[(2) - (8)].istType));
;}
    break;

  case 29:
#line 405 "./Engine/Base/Parser.y"
    {
  if ((yyvsp[(5) - (10)].val).sttType!=STT_INDEX) {
    _pShell->ErrorF("Array size is not integral");
  }
  (yyvsp[(2) - (10)].istType) = ShellTypeNewArray((yyvsp[(2) - (10)].istType), (yyvsp[(5) - (10)].val).iIndex);
  Declaration((yyvsp[(1) - (10)].ulFlags), (yyvsp[(2) - (10)].istType), *(yyvsp[(3) - (10)].pssSymbol), NULL, NULL);
  ShellTypeDelete((yyvsp[(2) - (10)].istType));
;}
    break;

  case 30:
#line 415 "./Engine/Base/Parser.y"
    {
  // dummy
;}
    break;

  case 31:
#line 418 "./Engine/Base/Parser.y"
    {
  // dummy
;}
    break;

  case 32:
#line 421 "./Engine/Base/Parser.y"
    {
  // print its value
  if ((yyvsp[(1) - (2)].val).sttType == STT_VOID) {
    NOTHING;
  } else if ((yyvsp[(1) - (2)].val).sttType == STT_FLOAT) {
    CPrintF("%g\n", (yyvsp[(1) - (2)].val).fFloat);
  } else if ((yyvsp[(1) - (2)].val).sttType == STT_STRING) {
    CPrintF("\"%s\"\n", (yyvsp[(1) - (2)].val).strString);
  } else if ((yyvsp[(1) - (2)].val).sttType == STT_INDEX) {
    CPrintF("%d(0x%08X)\n", (yyvsp[(1) - (2)].val).iIndex, (yyvsp[(1) - (2)].val).iIndex);
  } else {
    _pShell->ErrorF("Expression cannot be printed");
  }
;}
    break;

  case 33:
#line 435 "./Engine/Base/Parser.y"
    {
  // if it is constant
  if ((yyvsp[(1) - (4)].lvLValue).lv_pssSymbol->ss_ulFlags&SSF_CONSTANT) {
    _pShell->ErrorF("Symbol '%s' is a constant", (const char *) (yyvsp[(1) - (4)].lvLValue).lv_pssSymbol->ss_strName);
  // if it is not constant
  } else {
    // if it can be changed
    if ((yyvsp[(1) - (4)].lvLValue).lv_pssSymbol->ss_pPreFunc==NULL || (yyvsp[(1) - (4)].lvLValue).lv_pssSymbol->ss_pPreFunc((yyvsp[(1) - (4)].lvLValue).lv_pvAddress)) {
      // if floats
      if ((yyvsp[(1) - (4)].lvLValue).lv_sttType == STT_FLOAT && (yyvsp[(3) - (4)].val).sttType==STT_FLOAT) {
        // assign value
        *(FLOAT*)(yyvsp[(1) - (4)].lvLValue).lv_pvAddress = (yyvsp[(3) - (4)].val).fFloat;
      // if indices
      } else if ((yyvsp[(1) - (4)].lvLValue).lv_sttType == STT_INDEX && (yyvsp[(3) - (4)].val).sttType==STT_INDEX) {
        // assign value
        *(INDEX*)(yyvsp[(1) - (4)].lvLValue).lv_pvAddress = (yyvsp[(3) - (4)].val).iIndex;

      // if strings
      } else if ((yyvsp[(1) - (4)].lvLValue).lv_sttType == STT_STRING && (yyvsp[(3) - (4)].val).sttType==STT_STRING) {
        // assign value
        *(CTString*)(yyvsp[(1) - (4)].lvLValue).lv_pvAddress = (yyvsp[(3) - (4)].val).strString;

      // if assigning index to float
      } else if ((yyvsp[(1) - (4)].lvLValue).lv_sttType == STT_FLOAT && (yyvsp[(3) - (4)].val).sttType==STT_INDEX) {
        *(FLOAT*)(yyvsp[(1) - (4)].lvLValue).lv_pvAddress = (yyvsp[(3) - (4)].val).iIndex;
      // otherwise
      } else {
        // error
        _pShell->ErrorF("Cannot assign: different types");
      }

      // call post-change function
      if ((yyvsp[(1) - (4)].lvLValue).lv_pssSymbol->ss_pPostFunc!=NULL) {
        (yyvsp[(1) - (4)].lvLValue).lv_pssSymbol->ss_pPostFunc((yyvsp[(1) - (4)].lvLValue).lv_pvAddress);
      }
    }
  }
;}
    break;

  case 34:
#line 473 "./Engine/Base/Parser.y"
    {
  Declaration((yyvsp[(1) - (6)].ulFlags), (yyvsp[(2) - (6)].istType), *(yyvsp[(3) - (6)].pssSymbol), NULL, NULL);
  ShellTypeDelete((yyvsp[(2) - (6)].istType));

  CShellSymbol &ssSymbol = *(yyvsp[(3) - (6)].pssSymbol);
  // if it is constant
  if (ssSymbol.ss_ulFlags&SSF_CONSTANT) {
    // error
    _pShell->ErrorF("Symbol '%s' is a constant", (const char *) ssSymbol.ss_strName);
  }

  // get symbol type
  ShellTypeType stt = _shell_ast[(yyvsp[(2) - (6)].istType)].st_sttType;

  // if floats
  if (stt == STT_FLOAT && (yyvsp[(5) - (6)].val).sttType==STT_FLOAT) {
    // assign value
    *(FLOAT*)ssSymbol.ss_pvValue = (yyvsp[(5) - (6)].val).fFloat;
  // if indices
  } else if (stt == STT_INDEX && (yyvsp[(5) - (6)].val).sttType==STT_INDEX) {
    // assign value
    *(INDEX*)ssSymbol.ss_pvValue = (yyvsp[(5) - (6)].val).iIndex;
  // if strings
  } else if (stt == STT_STRING && (yyvsp[(5) - (6)].val).sttType==STT_STRING) {
    // assign value
    *(CTString*)ssSymbol.ss_pvValue = (yyvsp[(5) - (6)].val).strString;
  // !!!! remove this conversion
  } else if (stt == STT_FLOAT && (yyvsp[(5) - (6)].val).sttType==STT_INDEX) {
    _pShell->ErrorF("Warning: assigning INDEX to FLOAT!");  
    *(FLOAT*)ssSymbol.ss_pvValue = (yyvsp[(5) - (6)].val).iIndex;
  } else {
    _pShell->ErrorF("Symbol '%s' and its initializer have different types", (const char *) ssSymbol.ss_strName);
  }
;}
    break;

  case 35:
#line 507 "./Engine/Base/Parser.y"
    { 
extern void PrintShellSymbolHelp(const CTString &strSymbol);
  PrintShellSymbolHelp((yyvsp[(2) - (2)].pssSymbol)->ss_strName);
;}
    break;

  case 36:
#line 511 "./Engine/Base/Parser.y"
    { 
extern void PrintShellSymbolHelp(const CTString &strSymbol);
  PrintShellSymbolHelp((yyvsp[(2) - (4)].pssSymbol)->ss_strName);
;}
    break;

  case 37:
#line 515 "./Engine/Base/Parser.y"
    { 
extern void PrintShellSymbolHelp(const CTString &strSymbol);
  PrintShellSymbolHelp((yyvsp[(2) - (4)].pssSymbol)->ss_strName);
;}
    break;

  case 38:
#line 519 "./Engine/Base/Parser.y"
    { 
  _bExecNextBlock = FALSE;
  if ((yyvsp[(3) - (4)].val).sttType == STT_INDEX) {
    _bExecNextBlock = (yyvsp[(3) - (4)].val).iIndex!=0;
  } else if ((yyvsp[(3) - (4)].val).sttType == STT_FLOAT) {
    _bExecNextBlock = (yyvsp[(3) - (4)].val).fFloat!=0;
  } else {
    _pShell->ErrorF("If expression is not integral");
  }
  (yyvsp[(1) - (4)].ulFlags) = _bExecNextBlock;
;}
    break;

  case 39:
#line 529 "./Engine/Base/Parser.y"
    {
  _bExecNextElse = !(yyvsp[(1) - (6)].ulFlags);
  _bExecNextBlock = TRUE;
;}
    break;

  case 42:
#line 538 "./Engine/Base/Parser.y"
    {
  if (_bExecNextElse) {  
    _bExecNextBlock = FALSE;
    if ((yyvsp[(3) - (4)].val).sttType == STT_INDEX) {
      _bExecNextBlock = (yyvsp[(3) - (4)].val).iIndex!=0;
    } else if ((yyvsp[(3) - (4)].val).sttType == STT_FLOAT) {
      _bExecNextBlock = (yyvsp[(3) - (4)].val).fFloat!=0;
    } else {
      _pShell->ErrorF("If expression is not integral");
    }
    (yyvsp[(1) - (4)].ulFlags) = _bExecNextBlock;
  } else {
    _bExecNextBlock = FALSE;
    _bExecNextElse = FALSE;
    (yyvsp[(1) - (4)].ulFlags) = TRUE;
  }
;}
    break;

  case 43:
#line 554 "./Engine/Base/Parser.y"
    {
  _bExecNextElse = !(yyvsp[(1) - (6)].ulFlags);
  _bExecNextBlock = TRUE;
;}
    break;

  case 45:
#line 559 "./Engine/Base/Parser.y"
    {
  _bExecNextBlock = _bExecNextElse;  
;}
    break;

  case 46:
#line 561 "./Engine/Base/Parser.y"
    {
  _bExecNextBlock = TRUE;
;}
    break;

  case 47:
#line 567 "./Engine/Base/Parser.y"
    {
  CShellSymbol &ssSymbol = *(yyvsp[(1) - (1)].pssSymbol);
  const ShellType &stType = _shell_ast[ssSymbol.ss_istType];

  (yyval.lvLValue).lv_pssSymbol = &ssSymbol;
  if (!ssSymbol.IsDeclared()) {
    // error
    _pShell->ErrorF("Identifier '%s' is not declared", (const char *) (yyvsp[(1) - (1)].pssSymbol)->ss_strName);
    fDummy = -666;
    (yyval.lvLValue).lv_sttType = STT_VOID;
    (yyval.lvLValue).lv_pvAddress = &fDummy;
  // if the identifier is a float, int or string
  } else if (stType.st_sttType==STT_FLOAT || stType.st_sttType==STT_INDEX || stType.st_sttType==STT_STRING) {
    // get its value and type
    (yyval.lvLValue).lv_sttType = stType.st_sttType;
    (yyval.lvLValue).lv_pvAddress = ssSymbol.ss_pvValue;
  // if the identifier is something else
  } else {
    // error
    _pShell->ErrorF("'%s' doesn't have a value", (const char *) (yyvsp[(1) - (1)].pssSymbol)->ss_strName);
    fDummy = -666.0f;
    (yyval.lvLValue).lv_sttType = STT_VOID;
    (yyval.lvLValue).lv_pvAddress = &fDummy;
  }
;}
    break;

  case 48:
#line 592 "./Engine/Base/Parser.y"
    {
  CShellSymbol &ssSymbol = *(yyvsp[(1) - (4)].pssSymbol);
  const ShellType &stType = _shell_ast[ssSymbol.ss_istType];
  (yyval.lvLValue).lv_pssSymbol = &ssSymbol;

  int iIndex = 0;
  // if subscript is index
  if ((yyvsp[(3) - (4)].val).sttType==STT_INDEX) {
    // get the index
    iIndex = (yyvsp[(3) - (4)].val).iIndex;
  // if subscript is not index
  } else {
    // error
    _pShell->ErrorF("Array subscript is not integral");
  }
  // if the symbol is array 
  if (stType.st_sttType==STT_ARRAY) {
    const ShellType &stBase = _shell_ast[stType.st_istBaseType];
    // if it is float or int array
    if (stBase.st_sttType==STT_FLOAT || stBase.st_sttType==STT_INDEX) {
      // if the index is out of range
      if (iIndex<0 || iIndex>=stType.st_ctArraySize) {
        _pShell->ErrorF("Array member out of range");
        fDummy = -666.0f;
        (yyval.lvLValue).lv_pvAddress = &fDummy;
      } else {
        // get its value and type
        (yyval.lvLValue).lv_sttType = stBase.st_sttType;
        (yyval.lvLValue).lv_pvAddress = (FLOAT*)ssSymbol.ss_pvValue+iIndex;
      }
    }
  } else {
    _pShell->ErrorF("'%s[]' doesn't have a value", (const char *) (yyvsp[(1) - (4)].pssSymbol)->ss_strName);
    fDummy = -666.0f;
    (yyval.lvLValue).lv_pvAddress = &fDummy;
  }
;}
    break;

  case 49:
#line 632 "./Engine/Base/Parser.y"
    {
  (yyval.arg).istType = ShellTypeNewFunction(ShellTypeNewVoid());
  ShellTypeAddFunctionArgument((yyval.arg).istType, ShellTypeNewVoid());
  (yyval.arg).ctBytes = 0;
;}
    break;

  case 50:
#line 637 "./Engine/Base/Parser.y"
    {
  (yyval.arg) = (yyvsp[(1) - (1)].arg);
;}
    break;

  case 51:
#line 643 "./Engine/Base/Parser.y"
    {
  (yyval.arg).istType = ShellTypeNewFunction(ShellTypeNewVoid());
  ShellTypeAddFunctionArgument((yyval.arg).istType, ShellTypeNewByType((yyvsp[(1) - (1)].val).sttType));
  (yyval.arg).ctBytes = PushExpression((yyvsp[(1) - (1)].val));
;}
    break;

  case 52:
#line 648 "./Engine/Base/Parser.y"
    {
  (yyval.arg) = (yyvsp[(1) - (3)].arg);
  ShellTypeAddFunctionArgument((yyval.arg).istType, ShellTypeNewByType((yyvsp[(3) - (3)].val).sttType));
  (yyval.arg).ctBytes += PushExpression((yyvsp[(3) - (3)].val));
;}
    break;

  case 53:
#line 655 "./Engine/Base/Parser.y"
    {
  (yyval.val).sttType = STT_FLOAT;  
  (yyval.val).fFloat = (yyvsp[(1) - (1)].val).fFloat;
;}
    break;

  case 54:
#line 659 "./Engine/Base/Parser.y"
    {
  (yyval.val).sttType = STT_INDEX;  
  (yyval.val).iIndex = (yyvsp[(1) - (1)].val).iIndex;
;}
    break;

  case 55:
#line 663 "./Engine/Base/Parser.y"
    {
  (yyval.val).sttType = STT_STRING;  
  (yyval.val).strString = (yyvsp[(1) - (1)].val).strString;
;}
    break;

  case 56:
#line 667 "./Engine/Base/Parser.y"
    {
  // get its value
  (yyval.val).sttType = (yyvsp[(1) - (1)].lvLValue).lv_sttType;
  if ((yyvsp[(1) - (1)].lvLValue).lv_sttType==STT_VOID) {
    NOTHING;
  } else if ((yyvsp[(1) - (1)].lvLValue).lv_sttType==STT_FLOAT) {
    (yyval.val).fFloat = *(FLOAT*)(yyvsp[(1) - (1)].lvLValue).lv_pvAddress;
  } else if ((yyvsp[(1) - (1)].lvLValue).lv_sttType==STT_INDEX) {
    (yyval.val).iIndex = *(INDEX*)(yyvsp[(1) - (1)].lvLValue).lv_pvAddress;
  } else if ((yyvsp[(1) - (1)].lvLValue).lv_sttType==STT_STRING) {
    (yyval.val).strString = (const char*)*(CTString*)(yyvsp[(1) - (1)].lvLValue).lv_pvAddress;
  } else {
    (yyval.val).sttType = STT_FLOAT;
    (yyval.val).fFloat = -666.0f;
    _pShell->ErrorF("'%s' is of wrong type", (const char *) (yyvsp[(1) - (1)].lvLValue).lv_pssSymbol->ss_strName);
  }
;}
    break;

  case 57:
#line 685 "./Engine/Base/Parser.y"
    {

  MatchTypes((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

  (yyval.val).sttType = (yyvsp[(1) - (3)].val).sttType;
  if ((yyvsp[(1) - (3)].val).sttType == STT_INDEX) {
    (yyval.val).iIndex = (yyvsp[(1) - (3)].val).iIndex<<(yyvsp[(3) - (3)].val).iIndex;
  } else {
    _pShell->ErrorF("Wrong arguments for '<<'");
    (yyval.val).sttType = STT_INDEX;
    (yyval.val).iIndex = -666;
  }
;}
    break;

  case 58:
#line 698 "./Engine/Base/Parser.y"
    {

  MatchTypes((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

  (yyval.val).sttType = (yyvsp[(1) - (3)].val).sttType;
  if ((yyvsp[(1) - (3)].val).sttType == STT_INDEX) {
    (yyval.val).iIndex = (yyvsp[(1) - (3)].val).iIndex>>(yyvsp[(3) - (3)].val).iIndex;
  } else {
    _pShell->ErrorF("Wrong arguments for '>>'");
    (yyval.val).sttType = STT_INDEX;
    (yyval.val).iIndex = -666;
  }
;}
    break;

  case 59:
#line 712 "./Engine/Base/Parser.y"
    {

  MatchTypes((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

  (yyval.val).sttType = (yyvsp[(1) - (3)].val).sttType;
  if ((yyvsp[(1) - (3)].val).sttType == STT_FLOAT) {
    _pShell->ErrorF("'&' is illegal for FLOAT values");
  } else if ((yyvsp[(1) - (3)].val).sttType == STT_INDEX) {
    (yyval.val).iIndex = (yyvsp[(1) - (3)].val).iIndex&(yyvsp[(3) - (3)].val).iIndex;
  } else {
    (yyval.val).sttType = STT_FLOAT;
    (yyval.val).fFloat = -666.0f;
  }
;}
    break;

  case 60:
#line 726 "./Engine/Base/Parser.y"
    {

  MatchTypes((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

  (yyval.val).sttType = (yyvsp[(1) - (3)].val).sttType;
  if ((yyvsp[(1) - (3)].val).sttType == STT_FLOAT) {
    _pShell->ErrorF("'|' is illegal for FLOAT values");
  } else if ((yyvsp[(1) - (3)].val).sttType == STT_INDEX) {
    (yyval.val).iIndex = (yyvsp[(1) - (3)].val).iIndex|(yyvsp[(3) - (3)].val).iIndex;
  } else {
    (yyval.val).sttType = STT_FLOAT;
    (yyval.val).fFloat = -666.0f;
  }
;}
    break;

  case 61:
#line 740 "./Engine/Base/Parser.y"
    {

  MatchTypes((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

  (yyval.val).sttType = (yyvsp[(1) - (3)].val).sttType;
  if ((yyvsp[(1) - (3)].val).sttType == STT_FLOAT) {
    _pShell->ErrorF("'^' is illegal for FLOAT values");
  } else if ((yyvsp[(1) - (3)].val).sttType == STT_INDEX) {
    (yyval.val).iIndex = (yyvsp[(1) - (3)].val).iIndex^(yyvsp[(3) - (3)].val).iIndex;
  } else {
    (yyval.val).sttType = STT_FLOAT;
    (yyval.val).fFloat = -666.0f;
  }
;}
    break;

  case 62:
#line 756 "./Engine/Base/Parser.y"
    {

  MatchTypes((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

  (yyval.val).sttType = (yyvsp[(1) - (3)].val).sttType;
  if ((yyvsp[(1) - (3)].val).sttType == STT_FLOAT) {
    _pShell->ErrorF("'&&' is illegal for FLOAT values");
  } else if ((yyvsp[(1) - (3)].val).sttType == STT_INDEX) {
    (yyval.val).iIndex = (yyvsp[(1) - (3)].val).iIndex&&(yyvsp[(3) - (3)].val).iIndex;
  } else {
    (yyval.val).sttType = STT_FLOAT;
    (yyval.val).fFloat = -666.0f;
  }
;}
    break;

  case 63:
#line 770 "./Engine/Base/Parser.y"
    {

  MatchTypes((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

  (yyval.val).sttType = (yyvsp[(1) - (3)].val).sttType;
  if ((yyvsp[(1) - (3)].val).sttType == STT_FLOAT) {
    _pShell->ErrorF("'||' is illegal for FLOAT values");
  } else if ((yyvsp[(1) - (3)].val).sttType == STT_INDEX) {
    (yyval.val).iIndex = (yyvsp[(1) - (3)].val).iIndex||(yyvsp[(3) - (3)].val).iIndex;
  } else {
    (yyval.val).sttType = STT_FLOAT;
    (yyval.val).fFloat = -666.0f;
  }
;}
    break;

  case 64:
#line 785 "./Engine/Base/Parser.y"
    {

  MatchTypes((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

  (yyval.val).sttType = (yyvsp[(1) - (3)].val).sttType;
  if ((yyvsp[(1) - (3)].val).sttType == STT_FLOAT) {
    (yyval.val).fFloat = (yyvsp[(1) - (3)].val).fFloat+(yyvsp[(3) - (3)].val).fFloat;
  } else if ((yyvsp[(1) - (3)].val).sttType == STT_INDEX) {
    (yyval.val).iIndex = (yyvsp[(1) - (3)].val).iIndex+(yyvsp[(3) - (3)].val).iIndex;
  } else if ((yyvsp[(1) - (3)].val).sttType == STT_STRING) {
    CTString &strNew = _shell_astrTempStrings.Push();
    strNew = CTString((yyvsp[(1) - (3)].val).strString)+(yyvsp[(3) - (3)].val).strString;
    (yyval.val).strString = (const char*)strNew;
  } else {
    (yyval.val).sttType = STT_FLOAT;
    (yyval.val).fFloat = -666.0f;
  }
;}
    break;

  case 65:
#line 804 "./Engine/Base/Parser.y"
    {

  MatchTypes((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

  (yyval.val).sttType = (yyvsp[(1) - (3)].val).sttType;
  if ((yyvsp[(1) - (3)].val).sttType == STT_FLOAT) {
    (yyval.val).fFloat = (yyvsp[(1) - (3)].val).fFloat-(yyvsp[(3) - (3)].val).fFloat;
  } else if ((yyvsp[(1) - (3)].val).sttType == STT_INDEX) {
    (yyval.val).iIndex = (yyvsp[(1) - (3)].val).iIndex-(yyvsp[(3) - (3)].val).iIndex;
  } else {
    (yyval.val).sttType = STT_FLOAT;
    (yyval.val).fFloat = -666.0f;
  }
;}
    break;

  case 66:
#line 820 "./Engine/Base/Parser.y"
    {

  MatchTypes((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

  (yyval.val).sttType = (yyvsp[(1) - (3)].val).sttType;
  if ((yyvsp[(1) - (3)].val).sttType == STT_FLOAT) {
    (yyval.val).fFloat = (yyvsp[(1) - (3)].val).fFloat*(yyvsp[(3) - (3)].val).fFloat;
  } else if ((yyvsp[(1) - (3)].val).sttType == STT_INDEX) {
    (yyval.val).iIndex = (yyvsp[(1) - (3)].val).iIndex*(yyvsp[(3) - (3)].val).iIndex;
  } else {
    (yyval.val).sttType = STT_FLOAT;
    (yyval.val).fFloat = -666.0f;
  }

;}
    break;

  case 67:
#line 836 "./Engine/Base/Parser.y"
    {

  MatchTypes((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

  (yyval.val).sttType = (yyvsp[(1) - (3)].val).sttType;
  if ((yyvsp[(1) - (3)].val).sttType == STT_FLOAT) {
    (yyval.val).fFloat = (yyvsp[(1) - (3)].val).fFloat/(yyvsp[(3) - (3)].val).fFloat;
  } else if ((yyvsp[(1) - (3)].val).sttType == STT_INDEX) {
    if ((yyvsp[(3) - (3)].val).iIndex==0) {
      _pShell->ErrorF("Division by zero!\n");
      (yyval.val).iIndex = 0;
    } else {
      (yyval.val).iIndex = (yyvsp[(1) - (3)].val).iIndex/(yyvsp[(3) - (3)].val).iIndex;
    }
  } else {
    (yyval.val).sttType = STT_FLOAT;
    (yyval.val).fFloat = -666.0f;
  }

;}
    break;

  case 68:
#line 858 "./Engine/Base/Parser.y"
    {
  MatchTypes((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));

  (yyval.val).sttType = (yyvsp[(1) - (3)].val).sttType;
  if ((yyvsp[(1) - (3)].val).sttType == STT_FLOAT) {
    _pShell->ErrorF("'%' is illegal for FLOAT values");
  } else if ((yyvsp[(1) - (3)].val).sttType == STT_INDEX) {
    (yyval.val).iIndex = (yyvsp[(1) - (3)].val).iIndex%(yyvsp[(3) - (3)].val).iIndex;
  } else {
    (yyval.val).sttType = STT_FLOAT;
    (yyval.val).fFloat = -666.0f;
  }

;}
    break;

  case 69:
#line 874 "./Engine/Base/Parser.y"
    {
  DoComparison((yyval.val), (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), '<');
;}
    break;

  case 70:
#line 877 "./Engine/Base/Parser.y"
    {
  DoComparison((yyval.val), (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), '>');
;}
    break;

  case 71:
#line 880 "./Engine/Base/Parser.y"
    {
  DoComparison((yyval.val), (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), '=');
;}
    break;

  case 72:
#line 883 "./Engine/Base/Parser.y"
    {
  DoComparison((yyval.val), (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), '!');
;}
    break;

  case 73:
#line 886 "./Engine/Base/Parser.y"
    {
  DoComparison((yyval.val), (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), '}');
;}
    break;

  case 74:
#line 889 "./Engine/Base/Parser.y"
    {
  DoComparison((yyval.val), (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), '{');
;}
    break;

  case 75:
#line 895 "./Engine/Base/Parser.y"
    {
  (yyval.val).sttType = (yyvsp[(2) - (2)].val).sttType;
  if ((yyvsp[(2) - (2)].val).sttType == STT_FLOAT) {
    (yyval.val).fFloat = -(yyvsp[(2) - (2)].val).fFloat;
  } else if ((yyvsp[(2) - (2)].val).sttType == STT_INDEX) {
    (yyval.val).iIndex = -(yyvsp[(2) - (2)].val).iIndex;
  } else {
    (yyval.val).sttType = STT_FLOAT;
    (yyval.val).fFloat = -666.0f;
  }
;}
    break;

  case 76:
#line 909 "./Engine/Base/Parser.y"
    {
  (yyval.val).sttType = (yyvsp[(2) - (2)].val).sttType;
  if ((yyvsp[(2) - (2)].val).sttType == STT_FLOAT) {
    (yyval.val).fFloat = (yyvsp[(2) - (2)].val).fFloat;
  } else if ((yyvsp[(2) - (2)].val).sttType == STT_INDEX) {
    (yyval.val).iIndex = (yyvsp[(2) - (2)].val).iIndex;
  } else {
    (yyval.val).sttType = STT_FLOAT;
    (yyval.val).fFloat = -666.0f;
  }
;}
    break;

  case 77:
#line 921 "./Engine/Base/Parser.y"
    {
  (yyval.val).sttType = (yyvsp[(2) - (2)].val).sttType;
  if ((yyvsp[(2) - (2)].val).sttType == STT_FLOAT) {
    _pShell->ErrorF("'!' is illegal for FLOAT values");
    (yyval.val).fFloat = (yyvsp[(2) - (2)].val).fFloat;
  } else if ((yyvsp[(2) - (2)].val).sttType == STT_INDEX) {
    (yyval.val).iIndex = !(yyvsp[(2) - (2)].val).iIndex;
  } else {
    (yyval.val).sttType = STT_FLOAT;
    (yyval.val).fFloat = -666.0f;
  }
;}
    break;

  case 78:
#line 934 "./Engine/Base/Parser.y"
    {
  (yyval.val).sttType = STT_FLOAT;
  if ((yyvsp[(4) - (4)].val).sttType == STT_FLOAT) {
    (yyval.val).fFloat = (yyvsp[(4) - (4)].val).fFloat;
  } else if ((yyvsp[(4) - (4)].val).sttType == STT_INDEX) {
    (yyval.val).fFloat = FLOAT((yyvsp[(4) - (4)].val).iIndex);
  } else if ((yyvsp[(4) - (4)].val).sttType == STT_STRING) {
    (yyval.val).fFloat = atof((yyvsp[(4) - (4)].val).strString);
  } else {
    _pShell->ErrorF("Cannot convert to FLOAT");
    (yyval.val).sttType = STT_VOID;
  }
;}
    break;

  case 79:
#line 948 "./Engine/Base/Parser.y"
    {
  (yyval.val).sttType = STT_INDEX;
  if ((yyvsp[(4) - (4)].val).sttType == STT_FLOAT) {
    (yyval.val).iIndex = INDEX((yyvsp[(4) - (4)].val).fFloat);
  } else if ((yyvsp[(4) - (4)].val).sttType == STT_INDEX) {
    (yyval.val).iIndex = (yyvsp[(4) - (4)].val).iIndex;
  } else if ((yyvsp[(4) - (4)].val).sttType == STT_STRING) {
    (yyval.val).iIndex = atol((yyvsp[(4) - (4)].val).strString);
  } else {
    _pShell->ErrorF("Cannot convert to INDEX");
    (yyval.val).sttType = STT_VOID;
  }
;}
    break;

  case 80:
#line 962 "./Engine/Base/Parser.y"
    {
  CTString &strNew = _shell_astrTempStrings.Push();
  (yyval.val).sttType = STT_STRING;
  if ((yyvsp[(4) - (4)].val).sttType == STT_FLOAT) {
    strNew.PrintF("%g", (yyvsp[(4) - (4)].val).fFloat);
  } else if ((yyvsp[(4) - (4)].val).sttType == STT_INDEX) {
    strNew.PrintF("%d", (yyvsp[(4) - (4)].val).iIndex);
  } else if ((yyvsp[(4) - (4)].val).sttType == STT_STRING) {
    strNew = (yyvsp[(4) - (4)].val).strString;
  } else {
    _pShell->ErrorF("Cannot convert to CTString");
    (yyval.val).sttType = STT_VOID;
  }
  (yyval.val).strString = (const char*)strNew;
;}
    break;

  case 81:
#line 979 "./Engine/Base/Parser.y"
    {
  // if the identifier is not declared
  if (!(yyvsp[(1) - (4)].pssSymbol)->IsDeclared()) {
    // error
    _pShell->ErrorF("Identifier '%s' is not declared", (const char *) (yyvsp[(1) - (4)].pssSymbol)->ss_strName);
  // if the identifier is declared
  } else {
    // get its type
    ShellType &stFunc = _shell_ast[(yyvsp[(1) - (4)].pssSymbol)->ss_istType];

    // if the identifier is a function
    if (stFunc.st_sttType==STT_FUNCTION) {
      // determine result type
      ShellType &stResult =  _shell_ast[stFunc.st_istBaseType];
      // match argument list result to that result
      _shell_ast[_shell_ast[(yyvsp[(3) - (4)].arg).istType].st_istBaseType].st_sttType = stResult.st_sttType;
      // if types are same
      if (ShellTypeIsSame((yyvsp[(3) - (4)].arg).istType, (yyvsp[(1) - (4)].pssSymbol)->ss_istType)) {
        bool callfunc = true;

// !!! FIXME: maybe just dump the win32 codepath here? This will break on Win64, and maybe break on different compilers/compiler versions, etc.
#ifdef PLATFORM_WIN32
        #define CALLPARAMS
        #define FUNCSIG void
        #define PUSHPARAMS memcpy(_alloca((yyvsp[(3) - (4)].arg).ctBytes), _ubStack+_iStack-(yyvsp[(3) - (4)].arg).ctBytes, (yyvsp[(3) - (4)].arg).ctBytes);
#else
        // This is possibly more portable, but no less scary than the alloca hack.
        #define MAXSCRIPTFUNCARGS 5
        void *ARG[MAXSCRIPTFUNCARGS];
        if (((yyvsp[(3) - (4)].arg).ctBytes > sizeof (ARG)))
        {
            _pShell->ErrorF("Function '%s' has too many arguments!", (const char *) (yyvsp[(1) - (4)].pssSymbol)->ss_strName);
            callfunc = false;
        }
        else
        {
            memcpy(ARG, _ubStack+_iStack-(yyvsp[(3) - (4)].arg).ctBytes, (yyvsp[(3) - (4)].arg).ctBytes);
            memset(((char *) ARG) + (yyvsp[(3) - (4)].arg).ctBytes, '\0', sizeof (ARG) - (yyvsp[(3) - (4)].arg).ctBytes);
        }
        #define PUSHPARAMS
        #define FUNCSIG void*, void*, void*, void*, void*
        #define CALLPARAMS ARG[0], ARG[1], ARG[2], ARG[3], ARG[4]
#endif
  
        if (callfunc) {
          // if void
          if (stResult.st_sttType==STT_VOID) {
            // just call the function
            (yyval.val).sttType = STT_VOID;
            PUSHPARAMS;
            ((void (*)(FUNCSIG))(yyvsp[(1) - (4)].pssSymbol)->ss_pvValue)(CALLPARAMS);
          // if index
          } else if (stResult.st_sttType==STT_INDEX) {
            // call the function and return result
            (yyval.val).sttType = STT_INDEX;
            PUSHPARAMS;
            (yyval.val).iIndex = ((INDEX (*)(FUNCSIG))(yyvsp[(1) - (4)].pssSymbol)->ss_pvValue)(CALLPARAMS);
          // if float
          } else if (stResult.st_sttType==STT_FLOAT) {
            // call the function and return result
            (yyval.val).sttType = STT_FLOAT;
            PUSHPARAMS;
            (yyval.val).fFloat = ((FLOAT (*)(FUNCSIG))(yyvsp[(1) - (4)].pssSymbol)->ss_pvValue)(CALLPARAMS);
          // if string
          } else if (stResult.st_sttType==STT_STRING) {
            // call the function and return result
            (yyval.val).sttType = STT_STRING;
            CTString &strNew = _shell_astrTempStrings.Push();
            PUSHPARAMS;
            strNew = ((CTString (*)(FUNCSIG))(yyvsp[(1) - (4)].pssSymbol)->ss_pvValue)(CALLPARAMS);
            (yyval.val).strString = (const char*)strNew;
          } else {
            ASSERT(FALSE);
            (yyval.val).sttType = STT_FLOAT;
            (yyval.val).fFloat = -666.0f;
          }
        }
      // if types are different
      } else {
        // error
        (yyval.val).sttType = STT_VOID;
        _pShell->ErrorF("Wrong parameters for '%s'", (const char *) (yyvsp[(1) - (4)].pssSymbol)->ss_strName);
      }
    // if the identifier is something else
    } else {
      // error
      (yyval.val).sttType = STT_VOID;
      _pShell->ErrorF("Can't call '%s'", (const char *) (yyvsp[(1) - (4)].pssSymbol)->ss_strName);
    }
  }

  // pop arguments and free type info
  _iStack-=(yyvsp[(3) - (4)].arg).ctBytes;
  ShellTypeDelete((yyvsp[(3) - (4)].arg).istType);
;}
    break;

  case 82:
#line 1075 "./Engine/Base/Parser.y"
    {
  (yyval.val) = (yyvsp[(2) - (3)].val);
;}
    break;


/* Line 1267 of yacc.c.  */
#line 2783 "./Engine/Base/Parser.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1080 "./Engine/Base/Parser.y"


