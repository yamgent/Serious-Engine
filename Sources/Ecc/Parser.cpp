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
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     c_char = 258,
     c_int = 259,
     c_float = 260,
     c_bool = 261,
     c_string = 262,
     identifier = 263,
     cppblock = 264,
     k_while = 265,
     k_for = 266,
     k_if = 267,
     k_else = 268,
     k_enum = 269,
     k_switch = 270,
     k_case = 271,
     k_class = 272,
     k_do = 273,
     k_void = 274,
     k_const = 275,
     k_inline = 276,
     k_static = 277,
     k_virtual = 278,
     k_return = 279,
     k_autowait = 280,
     k_autocall = 281,
     k_waitevent = 282,
     k_event = 283,
     k_name = 284,
     k_thumbnail = 285,
     k_features = 286,
     k_uses = 287,
     k_export = 288,
     k_texture = 289,
     k_sound = 290,
     k_model = 291,
     k_properties = 292,
     k_components = 293,
     k_functions = 294,
     k_procedures = 295,
     k_wait = 296,
     k_on = 297,
     k_otherwise = 298,
     k_call = 299,
     k_jump = 300,
     k_stop = 301,
     k_resume = 302,
     k_pass = 303,
     k_CTString = 304,
     k_CTStringTrans = 305,
     k_CTFileName = 306,
     k_CTFileNameNoDep = 307,
     k_BOOL = 308,
     k_COLOR = 309,
     k_FLOAT = 310,
     k_INDEX = 311,
     k_RANGE = 312,
     k_CEntityPointer = 313,
     k_CModelObject = 314,
     k_CModelInstance = 315,
     k_CAnimObject = 316,
     k_CSoundObject = 317,
     k_CPlacement3D = 318,
     k_FLOATaabbox3D = 319,
     k_FLOATmatrix3D = 320,
     k_FLOATquat3D = 321,
     k_ANGLE = 322,
     k_FLOAT3D = 323,
     k_ANGLE3D = 324,
     k_FLOATplane3D = 325,
     k_ANIMATION = 326,
     k_ILLUMINATIONTYPE = 327,
     k_FLAGS = 328
   };
#endif
/* Tokens.  */
#define c_char 258
#define c_int 259
#define c_float 260
#define c_bool 261
#define c_string 262
#define identifier 263
#define cppblock 264
#define k_while 265
#define k_for 266
#define k_if 267
#define k_else 268
#define k_enum 269
#define k_switch 270
#define k_case 271
#define k_class 272
#define k_do 273
#define k_void 274
#define k_const 275
#define k_inline 276
#define k_static 277
#define k_virtual 278
#define k_return 279
#define k_autowait 280
#define k_autocall 281
#define k_waitevent 282
#define k_event 283
#define k_name 284
#define k_thumbnail 285
#define k_features 286
#define k_uses 287
#define k_export 288
#define k_texture 289
#define k_sound 290
#define k_model 291
#define k_properties 292
#define k_components 293
#define k_functions 294
#define k_procedures 295
#define k_wait 296
#define k_on 297
#define k_otherwise 298
#define k_call 299
#define k_jump 300
#define k_stop 301
#define k_resume 302
#define k_pass 303
#define k_CTString 304
#define k_CTStringTrans 305
#define k_CTFileName 306
#define k_CTFileNameNoDep 307
#define k_BOOL 308
#define k_COLOR 309
#define k_FLOAT 310
#define k_INDEX 311
#define k_RANGE 312
#define k_CEntityPointer 313
#define k_CModelObject 314
#define k_CModelInstance 315
#define k_CAnimObject 316
#define k_CSoundObject 317
#define k_CPlacement3D 318
#define k_FLOATaabbox3D 319
#define k_FLOATmatrix3D 320
#define k_FLOATquat3D 321
#define k_ANGLE 322
#define k_FLOAT3D 323
#define k_ANGLE3D 324
#define k_FLOATplane3D 325
#define k_ANIMATION 326
#define k_ILLUMINATIONTYPE 327
#define k_FLAGS 328




/* Copy the first part of user declarations.  */
#line 1 "Ecc/Parser.y"

// rcg10042001 Changed to specify Ecc directory...
#include "Ecc/StdH.h"
#include "Ecc/Main.h"

// turn off over-helpful bit of bison... --ryan.
#ifdef __GNUC__
#define __attribute__(x)
#endif

#define YYINITDEPTH 1000

static const char *_strCurrentClass;
static int _iCurrentClassID;
static const char *_strCurrentBase;
static const char *_strCurrentDescription;
static const char *_strCurrentThumbnail;
static const char *_strCurrentEnum;
static int _bClassIsExported = 0;

static const char *_strCurrentPropertyID;
static const char *_strCurrentPropertyIdentifier; 
static const char *_strCurrentPropertyPropertyType;
static const char *_strCurrentPropertyEnumType;   
static const char *_strCurrentPropertyDataType;
static const char *_strCurrentPropertyName;       
static const char *_strCurrentPropertyShortcut;
static const char *_strCurrentPropertyColor;
static const char *_strCurrentPropertyFlags;
static const char *_strCurrentPropertyDefaultCode;

static const char *_strCurrentComponentIdentifier;
static const char *_strCurrentComponentType;
static const char *_strCurrentComponentID;     
static const char *_strCurrentComponentFileName;

static int _ctInProcedureHandler = 0;
static char _strLastProcedureName[256];

static char _strInWaitName[256];
static char _strAfterWaitName[256];
static char _strInWaitID[256];
static char _strAfterWaitID[256];

static char _strInLoopName[256];
static char _strAfterLoopName[256];
static char _strInLoopID[256];
static char _strAfterLoopID[256];
static char _strCurrentStateID[256];

static int _bInProcedure;   // set if currently compiling a procedure
static int _bInHandler;
static int _bHasOtherwise;  // set if current 'wait' block has an 'otherwise' statement

static const char *_strCurrentEvent;
static int _bFeature_AbstractBaseClass;
static int _bFeature_ImplementsOnInitClass;
static int _bFeature_ImplementsOnEndClass;
static int _bFeature_ImplementsOnPrecache;
static int _bFeature_ImplementsOnWorldInit;
static int _bFeature_ImplementsOnWorldEnd;
static int _bFeature_ImplementsOnWorldTick;
static int _bFeature_ImplementsOnWorldRender;
static int _bFeature_CanBePredictable;

static int _iNextFreeID;
inline int CreateID(void) {
  return _iNextFreeID++;
}

static int _ctBraces = 0;
void OpenBrace(void) {
  _ctBraces++;
}
void CloseBrace(void) {
  _ctBraces--;
}
SType Braces(int iBraces) {
  static char strBraces[50];
  memset(strBraces, '}', sizeof(strBraces));
  strBraces[iBraces] = 0;
  return SType(strBraces);
}
char *RemoveLineDirective(char *str) 
{
  if (str[0]=='\n' && str[1]=='#') {
    return strchr(str+2, '\n')+1;
  } else {
    return str;
  }
}
const char *GetLineDirective(SType &st)
{
  char *str = st.strString;
  if (str[0]=='\n' && str[1]=='#' && str[2]=='l') {
    char *strResult = strdup(str);
    strchr(strResult+3,'\n')[1] = 0;
    return strResult;
  } else {
    return "";
  }
}
void AddHandlerFunction(char *strProcedureName, int iStateID)
{
  fprintf(_fDeclaration, "  BOOL %s(const CEntityEvent &__eeInput);\n", strProcedureName);
  fprintf(_fTables, " {0x%08x, -1, CEntity::pEventHandler(&%s::%s), "
    "DEBUGSTRING(\"%s::%s\")},\n",
    iStateID, _strCurrentClass, strProcedureName, _strCurrentClass, strProcedureName);
}


void AddHandlerFunction(char *strProcedureName, char *strStateID, char *strBaseStateID)
{
  fprintf(_fDeclaration, "  BOOL %s(const CEntityEvent &__eeInput);\n", strProcedureName);
  fprintf(_fTables, " {%s, %s, CEntity::pEventHandler(&%s::%s),"
    "DEBUGSTRING(\"%s::%s\")},\n",
    strStateID, strBaseStateID, _strCurrentClass, strProcedureName,
    _strCurrentClass, RemoveLineDirective(strProcedureName));
  strcpy(_strLastProcedureName, RemoveLineDirective(strProcedureName));
  _ctInProcedureHandler = 0;
}

void CreateInternalHandlerFunction(char *strFunctionName, char *strID)
{
  int iID = CreateID();
  _ctInProcedureHandler++;
  sprintf(strID, "0x%08x", iID);
  sprintf(strFunctionName, "H0x%08x_%s_%02d", iID, _strLastProcedureName, _ctInProcedureHandler);
  AddHandlerFunction(strFunctionName, iID);
}

void DeclareFeatureProperties(void)
{
  if (_bFeature_CanBePredictable) {
    fprintf(_fTables, " CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x%08x<<8)+%s, _offsetof(%s, %s), %s, %s, %s, %s),\n",
      _iCurrentClassID,
      "255",
      _strCurrentClass,
      "m_penPrediction",
      "\"\"",
      "0",
      "0",
      "0");
    fprintf(_fDeclaration, "  %s %s;\n",
      "CEntityPointer",
      "m_penPrediction"
      );
    fprintf(_fImplementation, "  m_penPrediction = NULL;\n");
  }
}

#define YYERROR_VERBOSE 1



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
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 407 "Ecc/Parser.cpp"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3393

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  107
/* YYNRULES -- Number of rules.  */
#define YYNRULES  301
/* YYNRULES -- Number of states.  */
#define YYNSTATES  490

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   328

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    89,     2,     2,     2,    92,    85,     2,
      79,    80,    84,    88,    77,    82,    96,    91,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    78,    74,
      86,    81,    87,    97,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    94,     2,    95,    93,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,    90,    76,    83,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,     6,     7,     8,    20,    21,
      23,    24,    27,    31,    32,    35,    38,    39,    48,    49,
      51,    53,    57,    61,    62,    71,    72,    74,    76,    80,
      83,    84,    86,    87,    88,    89,    90,    91,    92,    93,
      94,   129,   131,   134,   135,   136,   141,   143,   147,   149,
     150,   154,   155,   158,   162,   164,   167,   169,   173,   174,
     181,   183,   185,   188,   191,   193,   195,   197,   199,   201,
     203,   205,   207,   209,   211,   213,   215,   217,   219,   221,
     223,   225,   227,   229,   231,   233,   235,   237,   239,   240,
     244,   245,   247,   248,   253,   254,   259,   260,   263,   265,
     267,   269,   271,   273,   275,   280,   285,   288,   292,   294,
     297,   299,   303,   304,   309,   311,   313,   315,   317,   319,
     321,   323,   324,   327,   341,   342,   344,   345,   347,   348,
     350,   351,   353,   354,   356,   357,   359,   361,   363,   367,
     370,   372,   374,   376,   378,   381,   384,   387,   390,   393,
     396,   399,   402,   407,   408,   411,   412,   418,   419,   430,
     431,   433,   436,   438,   440,   442,   444,   446,   448,   450,
     452,   454,   456,   458,   460,   462,   464,   466,   468,   470,
     472,   474,   476,   478,   480,   482,   484,   486,   488,   491,
     494,   497,   500,   503,   506,   509,   512,   515,   518,   521,
     524,   527,   530,   533,   536,   539,   542,   545,   548,   551,
     554,   558,   562,   566,   569,   571,   573,   575,   577,   579,
     581,   583,   585,   587,   589,   591,   593,   595,   597,   599,
     601,   603,   605,   607,   609,   611,   613,   615,   617,   619,
     621,   623,   625,   627,   629,   631,   633,   634,   637,   640,
     648,   652,   656,   661,   663,   665,   667,   669,   671,   673,
     675,   677,   679,   681,   683,   685,   687,   689,   691,   693,
     701,   711,   712,   721,   722,   733,   734,   747,   748,   755,
     759,   765,   766,   768,   777,   780,   784,   791,   798,   800,
     801,   803,   808,   811,   814,   817,   821,   822,   824,   834,
     844,   845
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      99,     0,    -1,    -1,    -1,    -1,    -1,    -1,     4,   100,
     105,   101,   106,   102,   108,   103,   105,   104,   119,    -1,
      -1,     9,    -1,    -1,   106,   107,    -1,    32,     7,    74,
      -1,    -1,   108,   109,    -1,   108,   114,    -1,    -1,    14,
       8,   110,    75,   112,   111,    76,    74,    -1,    -1,    77,
      -1,   113,    -1,   112,    77,   113,    -1,     4,     8,     7,
      -1,    -1,    28,     8,   115,    75,   116,   111,    76,    74,
      -1,    -1,   117,    -1,   118,    -1,   116,    77,   118,    -1,
     168,     8,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   128,     8,    78,     8,    75,    29,
       7,    74,    30,     7,    74,   121,   129,   122,    37,    78,
     136,   123,   133,   124,    38,    78,   149,   125,    39,    78,
     157,   126,    40,    78,   169,   127,    76,    74,    -1,    17,
      -1,    17,    33,    -1,    -1,    -1,    31,   130,   131,    74,
      -1,   132,    -1,   131,    77,   132,    -1,     7,    -1,    -1,
      75,   134,    76,    -1,    -1,   134,   135,    -1,   168,     8,
      74,    -1,   138,    -1,   137,   111,    -1,   139,    -1,   137,
      77,   139,    -1,    -1,   140,   142,   141,   143,   147,   146,
      -1,     4,    -1,     8,    -1,    14,     8,    -1,    73,     8,
      -1,    49,    -1,    50,    -1,    51,    -1,    52,    -1,    53,
      -1,    54,    -1,    55,    -1,    56,    -1,    57,    -1,    58,
      -1,    59,    -1,    60,    -1,    61,    -1,    62,    -1,    63,
      -1,    64,    -1,    65,    -1,    66,    -1,    67,    -1,    69,
      -1,    68,    -1,    70,    -1,    72,    -1,    71,    -1,    -1,
       7,   144,   145,    -1,    -1,     3,    -1,    -1,    54,    79,
     174,    80,    -1,    -1,    31,    79,   174,    80,    -1,    -1,
      81,   148,    -1,     4,    -1,     5,    -1,     6,    -1,     3,
      -1,     7,    -1,     8,    -1,     8,    79,   174,    80,    -1,
     175,    79,   174,    80,    -1,    82,   148,    -1,    79,   174,
      80,    -1,   151,    -1,   150,   111,    -1,   152,    -1,   150,
      77,   152,    -1,    -1,   153,   156,   154,   155,    -1,     4,
      -1,     8,    -1,     7,    -1,    36,    -1,    34,    -1,    35,
      -1,    17,    -1,    -1,   157,   158,    -1,   160,   162,   167,
     159,     8,    79,   164,    80,   161,    75,   177,    76,   163,
      -1,    -1,    83,    -1,    -1,    33,    -1,    -1,    20,    -1,
      -1,    23,    -1,    -1,    74,    -1,    -1,    19,    -1,   165,
      -1,   166,    -1,   165,    77,   166,    -1,   168,     8,    -1,
     168,    -1,    19,    -1,   175,    -1,     8,    -1,    14,     8,
      -1,   168,    84,    -1,   168,    85,    -1,    19,    84,    -1,
      20,   168,    -1,    21,   168,    -1,    22,   168,    -1,    17,
     168,    -1,     8,    86,   168,    87,    -1,    -1,   169,   171,
      -1,    -1,    78,     8,    78,    78,     8,    -1,    -1,     8,
      79,   173,    80,   170,   172,    75,   177,    76,   163,    -1,
      -1,     8,    -1,     8,     8,    -1,     4,    -1,     5,    -1,
       6,    -1,     3,    -1,     7,    -1,     8,    -1,   175,    -1,
      81,    -1,    88,    -1,    82,    -1,    86,    -1,    87,    -1,
      89,    -1,    90,    -1,    85,    -1,    84,    -1,    91,    -1,
      92,    -1,    93,    -1,    94,    -1,    95,    -1,    78,    -1,
      77,    -1,    96,    -1,    97,    -1,    83,    -1,    79,    80,
      -1,    88,    88,    -1,    82,    82,    -1,    82,    87,    -1,
      78,    78,    -1,    85,    85,    -1,    90,    90,    -1,    93,
      93,    -1,    87,    87,    -1,    86,    86,    -1,    81,    81,
      -1,    89,    81,    -1,    87,    81,    -1,    86,    81,    -1,
      85,    81,    -1,    90,    81,    -1,    93,    81,    -1,    88,
      81,    -1,    82,    81,    -1,    91,    81,    -1,    92,    81,
      -1,    84,    81,    -1,    87,    87,    81,    -1,    86,    86,
      81,    -1,    79,   174,    80,    -1,   174,   174,    -1,    49,
      -1,    50,    -1,    51,    -1,    52,    -1,    53,    -1,    54,
      -1,    55,    -1,    56,    -1,    57,    -1,    58,    -1,    59,
      -1,    60,    -1,    61,    -1,    62,    -1,    63,    -1,    64,
      -1,    65,    -1,    66,    -1,    67,    -1,    71,    -1,    72,
      -1,    69,    -1,    68,    -1,    70,    -1,    20,    -1,    22,
      -1,     4,    -1,     5,    -1,     6,    -1,     3,    -1,     7,
      -1,     8,    -1,    -1,   177,   178,    -1,   174,    74,    -1,
      15,    79,   174,    80,    75,   177,    76,    -1,    16,   176,
      78,    -1,    75,   177,    76,    -1,   174,    75,   177,    76,
      -1,   181,    -1,   183,    -1,   185,    -1,   179,    -1,   180,
      -1,   187,    -1,   189,    -1,   190,    -1,   195,    -1,   192,
      -1,   198,    -1,   199,    -1,   200,    -1,   201,    -1,   194,
      -1,    74,    -1,    12,    79,   174,    80,    75,   177,    76,
      -1,    12,    79,   174,    80,    75,   177,    76,    13,   178,
      -1,    -1,    10,    79,   174,    80,   182,    75,   177,    76,
      -1,    -1,    18,    75,   177,    76,   184,    10,    79,   174,
      80,    74,    -1,    -1,    11,    79,   174,    74,   174,    74,
     174,    80,   186,    75,   177,    76,    -1,    -1,    41,   193,
     188,    75,   204,    76,    -1,    25,   193,    74,    -1,    27,
     193,     8,   191,    74,    -1,    -1,     8,    -1,    26,   197,
      79,   196,    80,     8,   191,    74,    -1,    79,    80,    -1,
      79,   174,    80,    -1,    45,   197,    79,   196,    80,    74,
      -1,    44,   197,    79,   196,    80,    74,    -1,   174,    -1,
      -1,     8,    -1,     8,    78,    78,     8,    -1,    46,    74,
      -1,    47,    74,    -1,    48,    74,    -1,    24,   202,    74,
      -1,    -1,   174,    -1,    42,    79,   173,    80,    78,    75,
     177,    76,   163,    -1,    43,    79,   173,    80,    78,    75,
     177,    76,   163,    -1,    -1,   204,   203,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   253,   253,   263,   266,   271,   272,   253,   282,   284,
     287,   289,   292,   300,   302,   303,   309,   309,   320,   320,
     322,   323,   327,   337,   337,   359,   361,   365,   366,   370,
     379,   381,   384,   388,   400,   405,   409,   410,   416,   419,
     386,   485,   486,   489,   491,   491,   504,   505,   508,   550,
     552,   554,   556,   559,   569,   576,   585,   586,   588,   593,
     616,   617,   620,   625,   630,   635,   640,   645,   650,   655,
     660,   665,   670,   675,   680,   685,   690,   695,   700,   705,
     710,   715,   720,   725,   730,   735,   740,   745,   753,   758,
     763,   766,   771,   774,   778,   781,   786,   808,   817,   817,
     817,   817,   817,   818,   819,   820,   821,   822,   829,   835,
     843,   844,   846,   851,   864,   865,   866,   869,   870,   871,
     872,   879,   880,   884,   903,   904,   908,   909,   919,   920,
     923,   924,   926,   928,   931,   932,   933,   936,   937,   940,
     944,   945,   949,   950,   951,   952,   953,   954,   955,   956,
     957,   958,   959,   967,   968,   972,   973,   979,   979,  1017,
    1020,  1023,  1029,  1029,  1029,  1029,  1029,  1030,  1031,  1032,
    1032,  1032,  1032,  1032,  1032,  1032,  1032,  1032,  1032,  1032,
    1032,  1032,  1032,  1032,  1032,  1032,  1032,  1032,  1033,  1034,
    1035,  1036,  1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,
    1045,  1046,  1047,  1048,  1049,  1050,  1051,  1052,  1053,  1054,
    1055,  1056,  1057,  1058,  1061,  1061,  1061,  1061,  1062,  1062,
    1062,  1062,  1062,  1063,  1063,  1063,  1063,  1063,  1064,  1064,
    1064,  1064,  1064,  1064,  1064,  1065,  1065,  1065,  1066,  1067,
    1070,  1070,  1070,  1070,  1070,  1071,  1078,  1079,  1082,  1083,
    1084,  1085,  1086,  1087,  1088,  1089,  1090,  1091,  1092,  1093,
    1094,  1095,  1096,  1097,  1098,  1099,  1100,  1101,  1102,  1107,
    1123,  1145,  1145,  1170,  1170,  1196,  1196,  1213,  1213,  1247,
    1271,  1296,  1299,  1304,  1328,  1331,  1337,  1346,  1358,  1361,
    1367,  1370,  1376,  1382,  1387,  1392,  1406,  1407,  1411,  1420,
    1430,  1431
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "c_char", "c_int", "c_float", "c_bool",
  "c_string", "identifier", "cppblock", "k_while", "k_for", "k_if",
  "k_else", "k_enum", "k_switch", "k_case", "k_class", "k_do", "k_void",
  "k_const", "k_inline", "k_static", "k_virtual", "k_return", "k_autowait",
  "k_autocall", "k_waitevent", "k_event", "k_name", "k_thumbnail",
  "k_features", "k_uses", "k_export", "k_texture", "k_sound", "k_model",
  "k_properties", "k_components", "k_functions", "k_procedures", "k_wait",
  "k_on", "k_otherwise", "k_call", "k_jump", "k_stop", "k_resume",
  "k_pass", "k_CTString", "k_CTStringTrans", "k_CTFileName",
  "k_CTFileNameNoDep", "k_BOOL", "k_COLOR", "k_FLOAT", "k_INDEX",
  "k_RANGE", "k_CEntityPointer", "k_CModelObject", "k_CModelInstance",
  "k_CAnimObject", "k_CSoundObject", "k_CPlacement3D", "k_FLOATaabbox3D",
  "k_FLOATmatrix3D", "k_FLOATquat3D", "k_ANGLE", "k_FLOAT3D", "k_ANGLE3D",
  "k_FLOATplane3D", "k_ANIMATION", "k_ILLUMINATIONTYPE", "k_FLAGS", "';'",
  "'{'", "'}'", "','", "':'", "'('", "')'", "'='", "'-'", "'~'", "'*'",
  "'&'", "'<'", "'>'", "'+'", "'!'", "'|'", "'/'", "'%'", "'^'", "'['",
  "']'", "'.'", "'?'", "$accept", "program", "@1", "@2", "@3", "@4", "@5",
  "opt_global_cppblock", "uses_list", "uses_statement",
  "enum_and_event_declarations_list", "enum_declaration", "@6",
  "opt_comma", "enum_values_list", "enum_value", "event_declaration", "@7",
  "event_members_list", "non_empty_event_members_list", "event_member",
  "opt_class_declaration", "class_declaration", "@8", "@9", "@10", "@11",
  "@12", "@13", "@14", "class_optexport", "opt_features", "@15",
  "features_list", "feature", "opt_internal_properties",
  "internal_property_list", "internal_property",
  "property_declaration_list", "nonempty_property_declaration_list",
  "empty_property_declaration_list", "property_declaration", "property_id",
  "property_identifier", "property_type", "property_wed_name_opt",
  "property_shortcut_opt", "property_color_opt", "property_flags_opt",
  "property_default_opt", "property_default_expression",
  "component_declaration_list", "nonempty_component_declaration_list",
  "empty_component_declaration_list", "component_declaration",
  "component_id", "component_identifier", "component_filename",
  "component_type", "function_list", "function_implementation",
  "opt_tilde", "opt_export", "opt_const", "opt_virtual", "opt_semicolon",
  "parameters_list", "non_void_parameters_list", "parameter_declaration",
  "return_type", "any_type", "procedure_list", "opt_override",
  "procedure_implementation", "@16", "event_specification", "expression",
  "type_keyword", "case_constant_expression", "statements", "statement",
  "statement_if", "statement_if_else", "statement_while", "@17",
  "statement_dowhile", "@18", "statement_for", "@19", "statement_wait",
  "@20", "statement_autowait", "statement_waitevent", "opt_eventvar",
  "statement_autocall", "wait_expression", "statement_jump",
  "statement_call", "event_expression", "jumptarget", "statement_stop",
  "statement_resume", "statement_pass", "statement_return",
  "opt_expression", "handler", "handlers_list", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,    59,   123,   125,    44,    58,    40,
      41,    61,    45,   126,    42,    38,    60,    62,    43,    33,
     124,    47,    37,    94,    91,    93,    46,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,   100,   101,   102,   103,   104,    99,   105,   105,
     106,   106,   107,   108,   108,   108,   110,   109,   111,   111,
     112,   112,   113,   115,   114,   116,   116,   117,   117,   118,
     119,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     120,   128,   128,   129,   130,   129,   131,   131,   132,   133,
     133,   134,   134,   135,   136,   136,   137,   137,   138,   139,
     140,   141,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   143,   143,
     144,   144,   145,   145,   146,   146,   147,   147,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   149,   149,
     150,   150,   151,   152,   153,   154,   155,   156,   156,   156,
     156,   157,   157,   158,   159,   159,   160,   160,   161,   161,
     162,   162,   163,   163,   164,   164,   164,   165,   165,   166,
     167,   167,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   169,   169,   170,   170,   172,   171,   173,
     173,   173,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     176,   176,   176,   176,   176,   176,   177,   177,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   179,
     180,   182,   181,   184,   183,   186,   185,   188,   187,   189,
     190,   191,   191,   192,   193,   193,   194,   195,   196,   196,
     197,   197,   198,   199,   200,   201,   202,   202,   203,   203,
     204,   204
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     0,     0,     0,    11,     0,     1,
       0,     2,     3,     0,     2,     2,     0,     8,     0,     1,
       1,     3,     3,     0,     8,     0,     1,     1,     3,     2,
       0,     1,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     1,     2,     0,     0,     4,     1,     3,     1,     0,
       3,     0,     2,     3,     1,     2,     1,     3,     0,     6,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     3,
       0,     1,     0,     4,     0,     4,     0,     2,     1,     1,
       1,     1,     1,     1,     4,     4,     2,     3,     1,     2,
       1,     3,     0,     4,     1,     1,     1,     1,     1,     1,
       1,     0,     2,    13,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     1,     1,     3,     2,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     0,     2,     0,     5,     0,    10,     0,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     3,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     2,     7,
       3,     3,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     7,
       9,     0,     8,     0,    10,     0,    12,     0,     6,     3,
       5,     0,     1,     8,     2,     3,     6,     6,     1,     0,
       1,     4,     2,     2,     2,     3,     0,     1,     9,     9,
       0,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     2,     0,     8,     1,     9,     3,    10,     4,     0,
      13,    11,     0,     5,    12,     0,     0,     8,    14,    15,
      16,    23,     6,     0,     0,    30,     0,    25,    41,     7,
      31,     0,     0,    18,    20,   143,     0,     0,     0,   238,
       0,   239,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   236,   235,   237,   233,   234,    18,    26,    27,     0,
     142,    42,     0,     0,    19,     0,     0,   144,   151,   147,
     148,   149,   150,    19,     0,    29,   145,   146,     0,    22,
      21,     0,     0,    28,     0,     0,    17,   152,    24,     0,
       0,     0,     0,     0,     0,    33,    43,    44,    34,     0,
       0,    48,     0,    46,     0,    45,     0,    58,    47,    60,
      35,    18,    54,    56,     0,    49,    19,    55,     0,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    84,    83,
      85,    87,    86,     0,     0,    51,    36,    57,    62,    63,
      61,    88,     0,     0,    90,    96,    50,    52,     0,     0,
      91,    92,     0,    94,     0,   112,     0,    89,   101,    98,
      99,   100,   102,   103,   238,   239,     0,     0,    97,     0,
       0,    59,    53,   114,    37,    18,   108,   110,     0,     0,
       0,   165,   162,   163,   164,   166,   167,   184,   183,     0,
     169,   171,   187,   177,   176,   172,   173,   170,   174,   175,
     178,   179,   180,   181,   182,   185,   186,     0,   168,   106,
       0,     0,     0,    19,   109,   120,   118,   119,   117,     0,
       0,     0,   192,   188,     0,   198,   206,   190,   191,   209,
     202,   193,   201,   197,   200,   196,   205,   189,   199,   203,
     194,   207,   208,   204,   195,   107,   213,     0,     0,     0,
     111,   115,     0,    93,   104,   212,   211,   210,   105,    95,
     121,   116,   113,   126,   127,     0,   122,   130,     0,   131,
       0,   153,   141,   124,   140,    39,   125,     0,     0,     0,
     154,     0,   159,     0,   134,   160,     0,    40,   135,     0,
     136,   137,     0,   161,   155,   128,     0,   139,     0,   157,
     129,     0,   138,     0,     0,   246,     0,   246,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   296,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   268,   246,   132,
       0,   247,   256,   257,   253,   254,   255,   258,   259,   260,
     262,   267,   261,   263,   264,   265,   266,   156,   132,     0,
       0,     0,     0,   243,   240,   241,   242,   244,   245,     0,
     246,   297,     0,     0,     0,   290,     0,     0,   277,     0,
       0,   292,   293,   294,     0,   133,   123,   248,   246,   158,
       0,     0,     0,     0,   250,     0,   295,   284,     0,   279,
       0,   289,   281,     0,   289,   289,   251,     0,   271,     0,
       0,     0,   273,   285,     0,   288,     0,   282,     0,   300,
       0,     0,   252,     0,     0,   246,   246,     0,   291,     0,
     280,     0,     0,     0,   246,     0,     0,     0,     0,   281,
       0,     0,   278,   301,   287,   286,     0,     0,   269,   249,
       0,     0,   159,   159,   272,   275,     0,     0,   283,     0,
       0,     0,   270,     0,     0,     0,   246,   274,     0,     0,
       0,   246,   246,   276,     0,     0,   132,   132,   298,   299
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,    10,    17,    25,     6,     8,    11,
      13,    18,    23,    75,    33,    34,    19,    24,    66,    67,
      68,    29,    30,   106,   110,   125,   163,   232,   285,   299,
      31,   108,   109,   112,   113,   156,   162,   167,   120,   121,
     122,   123,   124,   161,   154,   165,   171,   177,   191,   173,
     188,   194,   195,   196,   197,   198,   272,   282,   239,   283,
     286,   297,   287,   321,   290,   396,   309,   310,   311,   293,
      69,   295,   319,   300,   324,   306,   266,   228,   379,   328,
     351,   352,   353,   354,   433,   355,   437,   356,   471,   357,
     413,   358,   359,   428,   360,   384,   361,   362,   426,   386,
     363,   364,   365,   366,   382,   453,   441
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -359
static const yytype_int16 yypact[] =
{
      -3,  -359,     9,    10,  -359,  -359,  -359,  -359,     7,    35,
    -359,  -359,   -23,    -2,  -359,    65,   102,    10,  -359,  -359,
    -359,  -359,  -359,    44,    55,   114,   128,  3207,   100,  -359,
    -359,   126,   127,    60,  -359,    52,   131,  3207,    56,  3207,
    3207,  3207,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,
    -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,
    -359,  -359,  -359,  -359,  -359,  -359,    68,  -359,  -359,    17,
    -359,  -359,    63,   139,   128,    71,  3207,  -359,    15,  -359,
      15,    15,    15,  3207,    72,  -359,  -359,  -359,   141,  -359,
    -359,    76,    22,  -359,    80,    81,  -359,  -359,  -359,   130,
     148,    86,   132,   154,    89,  -359,   133,  -359,  -359,   158,
     129,  -359,    41,  -359,    91,  -359,   158,   163,  -359,  -359,
    -359,    93,  -359,  -359,  3320,    96,   163,  -359,   164,  -359,
    -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,
    -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,
    -359,  -359,  -359,   165,   166,  -359,  -359,  -359,  -359,  -359,
    -359,   168,  3142,   138,   174,    97,  -359,  -359,    19,   101,
    -359,   134,    26,   149,   107,   178,   108,  -359,  -359,  -359,
    -359,  -359,  -359,   110,  -359,  -359,  3052,    26,  -359,   111,
     112,  -359,  -359,  -359,  -359,   115,  -359,  -359,    18,  3052,
    3052,  -359,  -359,  -359,  -359,  -359,  -359,  -359,   116,  1532,
     117,   -21,  -359,   118,   -22,   -31,   -70,   -45,   119,   -43,
     120,   121,   -53,  -359,  -359,  -359,  -359,  1627,  -359,  -359,
    3052,  3052,   156,   178,  -359,  -359,  -359,  -359,  -359,   185,
    1722,  1817,  -359,  -359,  1912,  -359,  -359,  -359,  -359,  -359,
    -359,  -359,  -359,   122,  -359,   123,  -359,  -359,  -359,  -359,
    -359,  -359,  -359,  -359,  -359,  -359,  3052,  2007,  2102,   135,
    -359,  -359,   189,  -359,  -359,  -359,  -359,  -359,  -359,  -359,
    -359,  -359,  -359,    25,  -359,   167,  -359,   182,   136,  -359,
    3231,  -359,    56,   137,    15,   198,  -359,   201,   142,   140,
    -359,   143,   202,   144,  3296,   203,   146,  -359,    56,   147,
     153,  -359,    29,  -359,   145,   192,  3207,  -359,   207,  -359,
    -359,   157,  -359,   159,   160,  -359,   161,  -359,   297,   209,
     392,   155,   162,   169,   170,    64,   171,  3052,   172,   216,
     172,   172,   216,   216,   173,   176,   179,  -359,  -359,   180,
    1437,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,
    -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,   180,  3052,
    3052,  3052,  3052,  -359,  -359,  -359,  -359,  -359,  -359,   184,
    -359,  3052,   183,  2197,   190,   187,   177,   228,  -359,   188,
     193,  -359,  -359,  -359,   487,  -359,  -359,  -359,  -359,  -359,
    2292,  2387,  2482,  2577,  -359,   582,  -359,  -359,  2672,  -359,
     195,  3052,   230,   191,  3052,  3052,  -359,   677,  -359,  3052,
     200,   204,  -359,  -359,   232,  3052,   196,  -359,   194,  -359,
     197,   206,  -359,   208,  2767,  -359,  -359,   233,  -359,   234,
    -359,   -27,   210,   213,  -359,  3052,   772,   867,   199,   230,
     211,   212,  -359,  -359,  -359,  -359,   962,  2862,   231,  -359,
    3052,   214,   202,   202,  -359,  -359,  1342,  2957,  -359,   215,
     226,   217,  -359,   219,   218,   236,  -359,  -359,   235,   241,
    1057,  -359,  -359,  -359,  1152,  1247,   180,   180,  -359,  -359
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -359,  -359,  -359,  -359,  -359,  -359,  -359,   246,  -359,  -359,
    -359,  -359,  -359,   -59,  -359,   237,  -359,  -359,  -359,  -359,
     175,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,
    -359,  -359,  -359,  -359,   220,  -359,  -359,  -359,  -359,  -359,
    -359,   205,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,
      58,  -359,  -359,  -359,    49,  -359,  -359,  -359,  -359,  -359,
    -359,  -359,  -359,  -359,  -359,  -358,  -359,  -359,   -64,  -359,
     -35,  -359,  -359,  -359,  -359,  -346,  -186,   -19,  -359,  -324,
    -177,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,
    -359,  -359,  -359,  -131,  -359,  -219,  -359,  -359,  -291,  -217,
    -359,  -359,  -359,  -359,  -359,  -359,  -359
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -39
static const yytype_int16 yytable[] =
{
     227,     1,    78,   330,    80,    81,    82,    84,    70,     4,
     399,   254,    15,   240,   241,   450,   451,   255,    70,     5,
      70,    70,    70,   244,   394,    85,    16,   174,   263,   178,
     179,   180,   181,   182,   183,   235,   256,   317,   259,     9,
     264,    92,    12,   257,   267,   268,   184,   260,   185,   452,
     252,    14,   236,   237,   238,   253,   405,    70,   284,   250,
     246,   247,   127,   251,    70,   -38,   248,   373,   374,   375,
     376,   377,   378,    20,   417,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    86,
      87,    86,    87,    86,    87,   186,    86,    87,   187,    97,
      21,   446,   447,    86,    87,   115,   469,   470,   116,    26,
     456,   387,   388,   430,   431,   389,   390,   168,   488,   489,
      27,    28,    32,    71,    72,    73,   234,    74,    76,    77,
      79,    88,   350,    70,   350,    83,    89,    91,    94,    95,
      96,   381,   480,   189,    98,   101,    99,   484,   485,   100,
     102,   104,   103,   105,   107,   111,   114,   119,   189,   117,
     126,   155,   158,   159,   160,   164,   169,   170,   172,   175,
     190,   192,   193,   400,   401,   402,   403,   199,   176,   200,
     230,   231,   233,   271,   242,   269,   281,   408,   245,   249,
     258,   261,   262,   276,   277,   289,   298,   288,   350,   301,
     305,   313,   320,   280,   291,   323,   303,   367,   307,   350,
     296,   302,   304,   318,   385,   425,   314,   315,   425,   425,
     316,   350,   325,   434,   369,   327,   412,   326,   427,   329,
     438,   370,   449,   448,   466,   229,   380,   391,   371,   372,
     392,   383,   322,   393,   395,   294,   411,   406,    93,   457,
     350,   350,   404,    22,   409,   410,   429,   414,   440,   312,
     350,    70,   415,   424,   467,   435,   439,   442,   460,   436,
     350,   312,   270,   444,   454,    70,   443,   455,   468,   472,
     462,   463,   476,   477,   350,   474,   478,    70,   350,   350,
     201,   202,   203,   204,   205,   206,   475,   331,   332,   333,
     481,    90,   334,   335,   479,   336,   482,   184,   461,   185,
       0,   337,   338,   339,   340,     0,     0,     0,     0,     0,
       0,   157,     0,     0,     0,     0,   118,     0,   341,     0,
       0,   342,   343,   344,   345,   346,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,   347,   348,   349,   207,   208,   209,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   201,   202,   203,   204,   205,
     206,     0,   331,   332,   333,     0,     0,   334,   335,     0,
     336,     0,   184,     0,   185,     0,   337,   338,   339,   340,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   341,     0,     0,   342,   343,   344,   345,
     346,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,   347,   348,   368,   207,
     208,   209,     0,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     201,   202,   203,   204,   205,   206,     0,   331,   332,   333,
       0,     0,   334,   335,     0,   336,     0,   184,     0,   185,
       0,   337,   338,   339,   340,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   341,     0,
       0,   342,   343,   344,   345,   346,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,   347,   348,   416,   207,   208,   209,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   201,   202,   203,   204,   205,
     206,     0,   331,   332,   333,     0,     0,   334,   335,     0,
     336,     0,   184,     0,   185,     0,   337,   338,   339,   340,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   341,     0,     0,   342,   343,   344,   345,
     346,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,   347,   348,   422,   207,
     208,   209,     0,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     201,   202,   203,   204,   205,   206,     0,   331,   332,   333,
       0,     0,   334,   335,     0,   336,     0,   184,     0,   185,
       0,   337,   338,   339,   340,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   341,     0,
       0,   342,   343,   344,   345,   346,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,   347,   348,   432,   207,   208,   209,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   201,   202,   203,   204,   205,
     206,     0,   331,   332,   333,     0,     0,   334,   335,     0,
     336,     0,   184,     0,   185,     0,   337,   338,   339,   340,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   341,     0,     0,   342,   343,   344,   345,
     346,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,   347,   348,   458,   207,
     208,   209,     0,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     201,   202,   203,   204,   205,   206,     0,   331,   332,   333,
       0,     0,   334,   335,     0,   336,     0,   184,     0,   185,
       0,   337,   338,   339,   340,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   341,     0,
       0,   342,   343,   344,   345,   346,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,   347,   348,   459,   207,   208,   209,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   201,   202,   203,   204,   205,
     206,     0,   331,   332,   333,     0,     0,   334,   335,     0,
     336,     0,   184,     0,   185,     0,   337,   338,   339,   340,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   341,     0,     0,   342,   343,   344,   345,
     346,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,   347,   348,   464,   207,
     208,   209,     0,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     201,   202,   203,   204,   205,   206,     0,   331,   332,   333,
       0,     0,   334,   335,     0,   336,     0,   184,     0,   185,
       0,   337,   338,   339,   340,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   341,     0,
       0,   342,   343,   344,   345,   346,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,   347,   348,   483,   207,   208,   209,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   201,   202,   203,   204,   205,
     206,     0,   331,   332,   333,     0,     0,   334,   335,     0,
     336,     0,   184,     0,   185,     0,   337,   338,   339,   340,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   341,     0,     0,   342,   343,   344,   345,
     346,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,   347,   348,   486,   207,
     208,   209,     0,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     201,   202,   203,   204,   205,   206,     0,   331,   332,   333,
       0,     0,   334,   335,     0,   336,     0,   184,     0,   185,
       0,   337,   338,   339,   340,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   341,     0,
       0,   342,   343,   344,   345,   346,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,   347,   348,   487,   207,   208,   209,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   201,   202,   203,   204,   205,
     206,     0,   331,   332,   333,     0,     0,   334,   335,     0,
     336,     0,   184,     0,   185,     0,   337,   338,   339,   340,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   341,     0,     0,   342,   343,   344,   345,
     346,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,   347,   348,     0,   207,
     208,   209,     0,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     201,   202,   203,   204,   205,   206,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   184,     0,   185,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,   397,   398,     0,   207,   208,   209,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   201,   202,   203,   204,   205,
     206,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   184,     0,   185,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,     0,     0,     0,   207,
     208,   209,   243,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     201,   202,   203,   204,   205,   206,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   184,     0,   185,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,     0,     0,     0,   207,   208,   209,   265,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   201,   202,   203,   204,   205,
     206,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   184,     0,   185,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,     0,     0,     0,   207,
     208,   209,   273,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     201,   202,   203,   204,   205,   206,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   184,     0,   185,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,     0,     0,     0,   207,   208,   209,   274,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   201,   202,   203,   204,   205,
     206,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   184,     0,   185,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,     0,     0,     0,   207,
     208,   209,   275,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     201,   202,   203,   204,   205,   206,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   184,     0,   185,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,     0,     0,     0,   207,   208,   209,   278,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   201,   202,   203,   204,   205,
     206,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   184,     0,   185,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,     0,     0,     0,   207,
     208,   209,   279,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     201,   202,   203,   204,   205,   206,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   184,     0,   185,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,     0,     0,     0,   207,   208,   209,   407,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   201,   202,   203,   204,   205,
     206,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   184,     0,   185,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,     0,     0,     0,   207,
     208,   209,   418,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     201,   202,   203,   204,   205,   206,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   184,     0,   185,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,   419,     0,     0,   207,   208,   209,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   201,   202,   203,   204,   205,
     206,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   184,     0,   185,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,     0,     0,     0,   207,
     208,   209,   420,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     201,   202,   203,   204,   205,   206,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   184,     0,   185,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,     0,     0,     0,   207,   208,   209,   421,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   201,   202,   203,   204,   205,
     206,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   184,     0,   185,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,     0,     0,     0,   207,
     208,   209,   423,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     201,   202,   203,   204,   205,   206,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   184,     0,   185,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,   445,     0,     0,   207,   208,   209,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   201,   202,   203,   204,   205,
     206,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   184,     0,   185,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,     0,     0,     0,   207,
     208,   209,   465,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     201,   202,   203,   204,   205,   206,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   184,     0,   185,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,     0,     0,     0,   207,   208,   209,   473,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   201,   202,   203,   204,   205,
     206,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   184,     0,   185,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,     0,     0,     0,   207,
     208,   209,     0,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
      35,     0,     0,     0,     0,     0,    36,     0,     0,    37,
       0,    38,    39,    40,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    35,     0,     0,   166,     0,
       0,    36,     0,     0,    37,     0,    38,    39,    40,    41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    35,
       0,     0,     0,     0,     0,    36,     0,     0,    37,     0,
     292,    39,    40,    41,     0,     0,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    35,     0,     0,     0,     0,     0,
      36,     0,     0,    37,     0,   308,    39,    40,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   128,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153
};

static const yytype_int16 yycheck[] =
{
     186,     4,    37,   327,    39,    40,    41,    66,    27,     0,
     368,    81,    14,   199,   200,    42,    43,    87,    37,     9,
      39,    40,    41,   209,   348,     8,    28,     8,    81,     3,
       4,     5,     6,     7,     8,    17,    81,     8,    81,    32,
      93,    76,     7,    88,   230,   231,    20,    90,    22,    76,
      81,    74,    34,    35,    36,    86,   380,    76,    33,    81,
      81,    82,   121,    85,    83,    40,    87,     3,     4,     5,
       6,     7,     8,     8,   398,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    84,
      85,    84,    85,    84,    85,    79,    84,    85,    82,    87,
       8,   435,   436,    84,    85,    74,   462,   463,    77,    75,
     444,   340,   341,   414,   415,   342,   343,   162,   486,   487,
      75,    17,     4,    33,     8,     8,   195,    77,    86,     8,
      84,    78,   328,   162,   330,    77,     7,    76,    76,     8,
      74,   337,   476,   172,    74,     7,    75,   481,   482,    29,
      74,     7,    30,    74,    31,     7,    37,     4,   187,    78,
      77,    75,     8,     8,     8,     7,    38,     3,    81,    78,
      31,    74,     4,   369,   370,   371,   372,    79,    54,    79,
      79,    79,    77,     8,    78,    39,     7,   383,    81,    81,
      81,    81,    81,    81,    81,    23,     8,    40,   394,     8,
       8,     8,    20,    78,    78,     8,    76,     8,    74,   405,
      83,    79,    79,    78,     8,   411,    80,    80,   414,   415,
      77,   417,    75,   419,    79,    75,     8,    78,     8,    78,
       8,    79,     8,    10,    13,   187,    75,    74,    79,    79,
      74,    79,   316,    74,    74,   290,    79,    74,    83,   445,
     446,   447,    78,    17,    74,    78,    75,    79,    74,   304,
     456,   290,    79,    78,   460,    75,    80,    80,    79,    75,
     466,   316,   233,    75,    74,   304,    80,    74,    74,   466,
      79,    79,    75,    74,   480,    80,    78,   316,   484,   485,
       3,     4,     5,     6,     7,     8,    80,    10,    11,    12,
      75,    74,    15,    16,    78,    18,    75,    20,   449,    22,
      -1,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,   126,    -1,    -1,    -1,    -1,   116,    -1,    41,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    74,    75,    76,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    -1,    -1,    15,    16,    -1,
      18,    -1,    20,    -1,    22,    -1,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    18,    -1,    20,    -1,    22,
      -1,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    74,    75,    76,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    -1,    -1,    15,    16,    -1,
      18,    -1,    20,    -1,    22,    -1,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    18,    -1,    20,    -1,    22,
      -1,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    74,    75,    76,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    -1,    -1,    15,    16,    -1,
      18,    -1,    20,    -1,    22,    -1,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    18,    -1,    20,    -1,    22,
      -1,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    74,    75,    76,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    -1,    -1,    15,    16,    -1,
      18,    -1,    20,    -1,    22,    -1,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    18,    -1,    20,    -1,    22,
      -1,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    74,    75,    76,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    -1,    -1,    15,    16,    -1,
      18,    -1,    20,    -1,    22,    -1,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    18,    -1,    20,    -1,    22,
      -1,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    74,    75,    76,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    -1,    -1,    15,    16,    -1,
      18,    -1,    20,    -1,    22,    -1,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    -1,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    74,    75,    -1,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    74,    -1,    -1,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    74,    -1,    -1,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       8,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    17,
      -1,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     8,    -1,    -1,    76,    -1,
      -1,    14,    -1,    -1,    17,    -1,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    17,    -1,
      19,    20,    21,    22,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     8,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    17,    -1,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    99,   100,     0,     9,   105,   101,   106,    32,
     102,   107,     7,   108,    74,    14,    28,   103,   109,   114,
       8,     8,   105,   110,   115,   104,    75,    75,    17,   119,
     120,   128,     4,   112,   113,     8,    14,    17,    19,    20,
      21,    22,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,   116,   117,   118,   168,
     175,    33,     8,     8,    77,   111,    86,     8,   168,    84,
     168,   168,   168,    77,   111,     8,    84,    85,    78,     7,
     113,    76,   168,   118,    76,     8,    74,    87,    74,    75,
      29,     7,    74,    30,     7,    74,   121,    31,   129,   130,
     122,     7,   131,   132,    37,    74,    77,    78,   132,     4,
     136,   137,   138,   139,   140,   123,    77,   111,    14,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,   142,    75,   133,   139,     8,     8,
       8,   141,   134,   124,     7,   143,    76,   135,   168,    38,
       3,   144,    81,   147,     8,    78,    54,   145,     3,     4,
       5,     6,     7,     8,    20,    22,    79,    82,   148,   175,
      31,   146,    74,     4,   149,   150,   151,   152,   153,    79,
      79,     3,     4,     5,     6,     7,     8,    77,    78,    79,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,   174,   175,   148,
      79,    79,   125,    77,   111,    17,    34,    35,    36,   156,
     174,   174,    78,    80,   174,    81,    81,    82,    87,    81,
      81,    85,    81,    86,    81,    87,    81,    88,    81,    81,
      90,    81,    81,    81,    93,    80,   174,   174,   174,    39,
     152,     8,   154,    80,    80,    80,    81,    81,    80,    80,
      78,     7,   155,   157,    33,   126,   158,   160,    40,    23,
     162,    78,    19,   167,   168,   169,    83,   159,     8,   127,
     171,     8,    79,    76,    79,     8,   173,    74,    19,   164,
     165,   166,   168,     8,    80,    80,    77,     8,    78,   170,
      20,   161,   166,     8,   172,    75,    78,    75,   177,    78,
     177,    10,    11,    12,    15,    16,    18,    24,    25,    26,
      27,    41,    44,    45,    46,    47,    48,    74,    75,    76,
     174,   178,   179,   180,   181,   183,   185,   187,   189,   190,
     192,   194,   195,   198,   199,   200,   201,     8,    76,    79,
      79,    79,    79,     3,     4,     5,     6,     7,     8,   176,
      75,   174,   202,    79,   193,     8,   197,   193,   193,   197,
     197,    74,    74,    74,   177,    74,   163,    74,    75,   163,
     174,   174,   174,   174,    78,   177,    74,    80,   174,    74,
      78,    79,     8,   188,    79,    79,    76,   177,    80,    74,
      80,    80,    76,    80,    78,   174,   196,     8,   191,    75,
     196,   196,    76,   182,   174,    75,    75,   184,     8,    80,
      74,   204,    80,    80,    75,    74,   177,   177,    10,     8,
      42,    43,    76,   203,    74,    74,   177,   174,    76,    76,
      79,   191,    79,    79,    76,    80,    13,   174,    74,   173,
     173,   186,   178,    80,    80,    80,    75,    74,    78,    78,
     177,    75,    75,    76,   177,   177,    76,    76,   163,   163
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
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



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
        case 2:
#line 253 "Ecc/Parser.y"
    {
    int iID = atoi((yyvsp[(1) - (1)]).strString);
    if(iID>32767) {
      yyerror("Maximum allowed id for entity source file is 32767");
    }
    _iCurrentClassID = iID;
    _iNextFreeID = iID<<16;
    fprintf(_fDeclaration, "#ifndef _%s_INCLUDED\n", _strFileNameBaseIdentifier);
    fprintf(_fDeclaration, "#define _%s_INCLUDED 1\n", _strFileNameBaseIdentifier);

  ;}
    break;

  case 3:
#line 263 "Ecc/Parser.y"
    {

    //fprintf(_fImplementation, "\n#undef DECL_DLL\n#define DECL_DLL _declspec(dllimport)\n");
  ;}
    break;

  case 4:
#line 266 "Ecc/Parser.y"
    {
    //fprintf(_fImplementation, "\n#undef DECL_DLL\n#define DECL_DLL _declspec(dllexport)\n");

    fprintf(_fImplementation, "#include <%s.h>\n", _strFileNameBase);
    fprintf(_fImplementation, "#include <%s_tables.h>\n", _strFileNameBase);
  ;}
    break;

  case 5:
#line 271 "Ecc/Parser.y"
    {
  ;}
    break;

  case 6:
#line 272 "Ecc/Parser.y"
    {
  ;}
    break;

  case 7:
#line 273 "Ecc/Parser.y"
    {
    fprintf(_fDeclaration, "#endif // _%s_INCLUDED\n", _strFileNameBaseIdentifier);
  ;}
    break;

  case 9:
#line 284 "Ecc/Parser.y"
    { fprintf(_fImplementation, "%s\n", (yyvsp[(1) - (1)]).strString); ;}
    break;

  case 12:
#line 292 "Ecc/Parser.y"
    {
    char *strUsedFileName = strdup((yyvsp[(2) - (3)]).strString);
    strUsedFileName[strlen(strUsedFileName)-1] = 0;
    fprintf(_fDeclaration, "#include <%s.h>\n", strUsedFileName+1);
  ;}
    break;

  case 16:
#line 309 "Ecc/Parser.y"
    { 
    _strCurrentEnum = (yyvsp[(2) - (2)]).strString;
    fprintf(_fTables, "EP_ENUMBEG(%s)\n", _strCurrentEnum );
    fprintf(_fDeclaration, "extern DECL_DLL CEntityPropertyEnumType %s_enum;\n", _strCurrentEnum );
    fprintf(_fDeclaration, "enum %s {\n", _strCurrentEnum );
  ;}
    break;

  case 17:
#line 314 "Ecc/Parser.y"
    {
    fprintf(_fTables, "EP_ENUMEND(%s);\n\n", _strCurrentEnum);
    fprintf(_fDeclaration, "};\n");
    fprintf(_fDeclaration, "DECL_DLL inline void ClearToDefault(%s &e) { e = (%s)0; } ;\n", _strCurrentEnum, _strCurrentEnum);
  ;}
    break;

  case 22:
#line 327 "Ecc/Parser.y"
    {
    fprintf(_fTables, "  EP_ENUMVALUE(%s, %s),\n", (yyvsp[(2) - (3)]).strString, (yyvsp[(3) - (3)]).strString);
    fprintf(_fDeclaration, "  %s = %s,\n", (yyvsp[(2) - (3)]).strString, (yyvsp[(1) - (3)]).strString);
  ;}
    break;

  case 23:
#line 337 "Ecc/Parser.y"
    { 
    _strCurrentEvent = (yyvsp[(2) - (2)]).strString;
    int iID = CreateID();
    fprintf(_fDeclaration, "#define EVENTCODE_%s 0x%08x\n", _strCurrentEvent, iID);
    fprintf(_fDeclaration, "class DECL_DLL %s : public CEntityEvent {\npublic:\n",
      _strCurrentEvent);
    fprintf(_fDeclaration, "%s();\n", _strCurrentEvent );
    fprintf(_fDeclaration, "CEntityEvent *MakeCopy(void);\n");
    fprintf(_fImplementation, 
      "CEntityEvent *%s::MakeCopy(void) { "
      "CEntityEvent *peeCopy = new %s(*this); "
      "return peeCopy;}\n",
      _strCurrentEvent, _strCurrentEvent);
    fprintf(_fImplementation, "%s::%s() : CEntityEvent(EVENTCODE_%s) {;\n",
      _strCurrentEvent, _strCurrentEvent, _strCurrentEvent);
  ;}
    break;

  case 24:
#line 352 "Ecc/Parser.y"
    {
    fprintf(_fImplementation, "};\n");
    fprintf(_fDeclaration, "};\n");
    fprintf(_fDeclaration, "DECL_DLL inline void ClearToDefault(%s &e) { e = %s(); } ;\n", _strCurrentEvent, _strCurrentEvent);
  ;}
    break;

  case 29:
#line 370 "Ecc/Parser.y"
    {
    fprintf(_fDeclaration, "%s %s;\n", (yyvsp[(1) - (2)]).strString, (yyvsp[(2) - (2)]).strString);
    fprintf(_fImplementation, " ClearToDefault(%s);\n", (yyvsp[(2) - (2)]).strString);
  ;}
    break;

  case 33:
#line 388 "Ecc/Parser.y"
    {
    _strCurrentClass = (yyvsp[(2) - (11)]).strString;
    _strCurrentBase = (yyvsp[(4) - (11)]).strString;
    _strCurrentDescription = (yyvsp[(7) - (11)]).strString;
    _strCurrentThumbnail = (yyvsp[(10) - (11)]).strString;

    fprintf(_fTables, "#define ENTITYCLASS %s\n\n", _strCurrentClass);
    fprintf(_fDeclaration, "extern \"C\" DECL_DLL CDLLEntityClass %s_DLLClass;\n",
      _strCurrentClass);
    fprintf(_fDeclaration, "%s %s : public %s {\npublic:\n",
      (yyvsp[(1) - (11)]).strString, _strCurrentClass, _strCurrentBase);

  ;}
    break;

  case 34:
#line 400 "Ecc/Parser.y"
    {
    fprintf(_fDeclaration, "  %s virtual void SetDefaultProperties(void);\n", _bClassIsExported?"":"DECL_DLL");
    fprintf(_fImplementation, "void %s::SetDefaultProperties(void) {\n", _strCurrentClass);
    fprintf(_fTables, "CEntityProperty %s_properties[] = {\n", _strCurrentClass);

  ;}
    break;

  case 35:
#line 405 "Ecc/Parser.y"
    {
    fprintf(_fImplementation, "  %s::SetDefaultProperties();\n}\n", _strCurrentBase);

    fprintf(_fTables, "CEntityComponent %s_components[] = {\n", _strCurrentClass);
  ;}
    break;

  case 36:
#line 409 "Ecc/Parser.y"
    {
  ;}
    break;

  case 37:
#line 410 "Ecc/Parser.y"
    {
    _bTrackLineInformation = 1;
    fprintf(_fTables, "CEventHandlerEntry %s_handlers[] = {\n", _strCurrentClass);

    _bInProcedure = 0;
    _bInHandler = 0;
  ;}
    break;

  case 38:
#line 416 "Ecc/Parser.y"
    {

    _bInProcedure = 1;
  ;}
    break;

  case 39:
#line 419 "Ecc/Parser.y"
    {
  ;}
    break;

  case 40:
#line 420 "Ecc/Parser.y"
    {
    fprintf(_fTables, "};\n#define %s_handlersct ARRAYCOUNT(%s_handlers)\n", 
      _strCurrentClass, _strCurrentClass);
    fprintf(_fTables, "\n");

    if (_bFeature_AbstractBaseClass) {
      fprintf(_fTables, "CEntity *%s_New(void) { return NULL; };\n",
        _strCurrentClass);
    } else {
      fprintf(_fTables, "CEntity *%s_New(void) { return new %s; };\n",
        _strCurrentClass, _strCurrentClass);
    }

    if (!_bFeature_ImplementsOnInitClass) {
      fprintf(_fTables, "void %s_OnInitClass(void) {};\n", _strCurrentClass);
    } else {
      fprintf(_fTables, "void %s_OnInitClass(void);\n", _strCurrentClass);
    }

    if (!_bFeature_ImplementsOnEndClass) {
      fprintf(_fTables, "void %s_OnEndClass(void) {};\n", _strCurrentClass);
    } else {
      fprintf(_fTables, "void %s_OnEndClass(void);\n", _strCurrentClass);
    }

    if (!_bFeature_ImplementsOnPrecache) {
      fprintf(_fTables, "void %s_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};\n", _strCurrentClass);
    } else {
      fprintf(_fTables, "void %s_OnPrecache(CDLLEntityClass *pdec, INDEX iUser);\n", _strCurrentClass);
    }

    if (!_bFeature_ImplementsOnWorldEnd) {
      fprintf(_fTables, "void %s_OnWorldEnd(CWorld *pwo) {};\n", _strCurrentClass);
    } else {
      fprintf(_fTables, "void %s_OnWorldEnd(CWorld *pwo);\n", _strCurrentClass);
    }

    if (!_bFeature_ImplementsOnWorldInit) {
      fprintf(_fTables, "void %s_OnWorldInit(CWorld *pwo) {};\n", _strCurrentClass);
    } else {
      fprintf(_fTables, "void %s_OnWorldInit(CWorld *pwo);\n", _strCurrentClass);
    }

    if (!_bFeature_ImplementsOnWorldTick) {
      fprintf(_fTables, "void %s_OnWorldTick(CWorld *pwo) {};\n", _strCurrentClass);
    } else {
      fprintf(_fTables, "void %s_OnWorldTick(CWorld *pwo);\n", _strCurrentClass);
    }

    if (!_bFeature_ImplementsOnWorldRender) {
      fprintf(_fTables, "void %s_OnWorldRender(CWorld *pwo) {};\n", _strCurrentClass);
    } else {
      fprintf(_fTables, "void %s_OnWorldRender(CWorld *pwo);\n", _strCurrentClass);
    }

    fprintf(_fTables, "ENTITY_CLASSDEFINITION(%s, %s, %s, %s, 0x%08x);\n",
      _strCurrentClass, _strCurrentBase, 
      _strCurrentDescription, _strCurrentThumbnail, _iCurrentClassID);
    fprintf(_fTables, "DECLARE_CTFILENAME(_fnm%s_tbn, %s);\n", _strCurrentClass, _strCurrentThumbnail);

    fprintf(_fDeclaration, "};\n");
  ;}
    break;

  case 41:
#line 485 "Ecc/Parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); _bClassIsExported = 0; ;}
    break;

  case 42:
#line 486 "Ecc/Parser.y"
    { (yyval) = (yyvsp[(1) - (2)])+" DECL_DLL "; _bClassIsExported = 1; ;}
    break;

  case 44:
#line 491 "Ecc/Parser.y"
    {
    _bFeature_ImplementsOnWorldInit = 0;
    _bFeature_ImplementsOnWorldEnd = 0;
    _bFeature_ImplementsOnWorldTick = 0;
    _bFeature_ImplementsOnWorldRender = 0;
    _bFeature_ImplementsOnInitClass = 0;
    _bFeature_ImplementsOnEndClass = 0;
    _bFeature_ImplementsOnPrecache = 0;
    _bFeature_AbstractBaseClass = 0;
    _bFeature_CanBePredictable = 0;
  ;}
    break;

  case 48:
#line 508 "Ecc/Parser.y"
    {
    if (strcmp((yyvsp[(1) - (1)]).strString, "\"AbstractBaseClass\"")==0) {
      _bFeature_AbstractBaseClass = 1;
    } else if (strcmp((yyvsp[(1) - (1)]).strString, "\"IsTargetable\"")==0) {
      fprintf(_fDeclaration, "virtual BOOL IsTargetable(void) const { return TRUE; };\n");
    } else if (strcmp((yyvsp[(1) - (1)]).strString, "\"IsImportant\"")==0) {
      fprintf(_fDeclaration, "virtual BOOL IsImportant(void) const { return TRUE; };\n");
    } else if (strcmp((yyvsp[(1) - (1)]).strString, "\"HasName\"")==0) {
      fprintf(_fDeclaration, 
        "virtual const CTString &GetName(void) const { return m_strName; };\n");
    } else if (strcmp((yyvsp[(1) - (1)]).strString, "\"CanBePredictable\"")==0) {
      fprintf(_fDeclaration, 
        "virtual CEntity *GetPredictionPair(void) { return m_penPrediction; };\n");
      fprintf(_fDeclaration, 
        "virtual void SetPredictionPair(CEntity *penPair) { m_penPrediction = penPair; };\n");
      _bFeature_CanBePredictable = 1;
    } else if (strcmp((yyvsp[(1) - (1)]).strString, "\"HasDescription\"")==0) {
      fprintf(_fDeclaration, 
        "virtual const CTString &GetDescription(void) const { return m_strDescription; };\n");
    } else if (strcmp((yyvsp[(1) - (1)]).strString, "\"HasTarget\"")==0) {
      fprintf(_fDeclaration, 
        "virtual CEntity *GetTarget(void) const { return m_penTarget; };\n");
    } else if (strcmp((yyvsp[(1) - (1)]).strString, "\"ImplementsOnInitClass\"")==0) {
      _bFeature_ImplementsOnInitClass = 1;
    } else if (strcmp((yyvsp[(1) - (1)]).strString, "\"ImplementsOnEndClass\"")==0) {
      _bFeature_ImplementsOnEndClass = 1;
    } else if (strcmp((yyvsp[(1) - (1)]).strString, "\"ImplementsOnPrecache\"")==0) {
      _bFeature_ImplementsOnPrecache = 1;
    } else if (strcmp((yyvsp[(1) - (1)]).strString, "\"ImplementsOnWorldInit\"")==0) {
      _bFeature_ImplementsOnWorldInit = 1;
    } else if (strcmp((yyvsp[(1) - (1)]).strString, "\"ImplementsOnWorldEnd\"")==0) {
      _bFeature_ImplementsOnWorldEnd = 1;
    } else if (strcmp((yyvsp[(1) - (1)]).strString, "\"ImplementsOnWorldTick\"")==0) {
      _bFeature_ImplementsOnWorldTick = 1;
    } else if (strcmp((yyvsp[(1) - (1)]).strString, "\"ImplementsOnWorldRender\"")==0) {
      _bFeature_ImplementsOnWorldRender = 1;
    } else {
      yyerror((SType("Unknown feature: ")+(yyvsp[(1) - (1)])).strString);
    }
  ;}
    break;

  case 53:
#line 559 "Ecc/Parser.y"
    { 
    fprintf(_fDeclaration, "%s %s;\n", (yyvsp[(1) - (3)]).strString, (yyvsp[(2) - (3)]).strString);
  ;}
    break;

  case 54:
#line 569 "Ecc/Parser.y"
    {
    DeclareFeatureProperties(); // this won't work, but at least it will generate an error!!!!
    fprintf(_fTables, "  CEntityProperty()\n};\n");
    fprintf(_fTables, "#define %s_propertiesct 0\n", _strCurrentClass);
    fprintf(_fTables, "\n");
    fprintf(_fTables, "\n");
  ;}
    break;

  case 55:
#line 576 "Ecc/Parser.y"
    {
    DeclareFeatureProperties();
    fprintf(_fTables, "};\n");
    fprintf(_fTables, "#define %s_propertiesct ARRAYCOUNT(%s_properties)\n", 
      _strCurrentClass, _strCurrentClass);
    fprintf(_fTables, "\n");
  ;}
    break;

  case 59:
#line 593 "Ecc/Parser.y"
    {
    fprintf(_fTables, " CEntityProperty(%s, %s, (0x%08x<<8)+%s, _offsetof(%s, %s), %s, %s, %s, %s),\n",
      _strCurrentPropertyPropertyType,
      _strCurrentPropertyEnumType,
      _iCurrentClassID,
      _strCurrentPropertyID,
      _strCurrentClass,
      _strCurrentPropertyIdentifier,
      _strCurrentPropertyName,
      _strCurrentPropertyShortcut,
      _strCurrentPropertyColor,
      _strCurrentPropertyFlags);
    fprintf(_fDeclaration, "  %s %s;\n",
      _strCurrentPropertyDataType,
      _strCurrentPropertyIdentifier
      );

    if (strlen(_strCurrentPropertyDefaultCode)>0) {
      fprintf(_fImplementation, "  %s\n", _strCurrentPropertyDefaultCode);
    }
  ;}
    break;

  case 60:
#line 616 "Ecc/Parser.y"
    { _strCurrentPropertyID = (yyvsp[(1) - (1)]).strString; ;}
    break;

  case 61:
#line 617 "Ecc/Parser.y"
    { _strCurrentPropertyIdentifier = (yyvsp[(1) - (1)]).strString; ;}
    break;

  case 62:
#line 620 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_ENUM"; 
    _strCurrentPropertyEnumType = (SType("&")+(yyvsp[(2) - (2)])+"_enum").strString; 
    _strCurrentPropertyDataType = (SType("enum ")+(yyvsp[(2) - (2)]).strString).strString;
  ;}
    break;

  case 63:
#line 625 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_FLAGS"; 
    _strCurrentPropertyEnumType = (SType("&")+(yyvsp[(2) - (2)])+"_enum").strString; 
    _strCurrentPropertyDataType = "ULONG";
  ;}
    break;

  case 64:
#line 630 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_STRING"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "CTString";
  ;}
    break;

  case 65:
#line 635 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_STRINGTRANS"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "CTStringTrans";
  ;}
    break;

  case 66:
#line 640 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_FILENAME"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "CTFileName";
  ;}
    break;

  case 67:
#line 645 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_FILENAMENODEP"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "CTFileNameNoDep";
  ;}
    break;

  case 68:
#line 650 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_BOOL"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "BOOL";
  ;}
    break;

  case 69:
#line 655 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_COLOR"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "COLOR";
  ;}
    break;

  case 70:
#line 660 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_FLOAT"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "FLOAT";
  ;}
    break;

  case 71:
#line 665 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_INDEX"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "INDEX";
  ;}
    break;

  case 72:
#line 670 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_RANGE"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "RANGE";
  ;}
    break;

  case 73:
#line 675 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_ENTITYPTR"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "CEntityPointer";
  ;}
    break;

  case 74:
#line 680 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_MODELOBJECT"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "CModelObject";
  ;}
    break;

  case 75:
#line 685 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_MODELINSTANCE"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "CModelInstance";
  ;}
    break;

  case 76:
#line 690 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_ANIMOBJECT"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "CAnimObject";
  ;}
    break;

  case 77:
#line 695 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_SOUNDOBJECT"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "CSoundObject";
  ;}
    break;

  case 78:
#line 700 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_PLACEMENT3D"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "CPlacement3D";
  ;}
    break;

  case 79:
#line 705 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_FLOATAABBOX3D"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "FLOATaabbox3D";
  ;}
    break;

  case 80:
#line 710 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_FLOATMATRIX3D"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "FLOATmatrix3D";
  ;}
    break;

  case 81:
#line 715 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_FLOATQUAT3D"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "FLOATquat3D";
  ;}
    break;

  case 82:
#line 720 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_ANGLE"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "ANGLE";
  ;}
    break;

  case 83:
#line 725 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_ANGLE3D"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "ANGLE3D";
  ;}
    break;

  case 84:
#line 730 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_FLOAT3D"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "FLOAT3D";
  ;}
    break;

  case 85:
#line 735 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_FLOATplane3D"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "FLOATplane3D";
  ;}
    break;

  case 86:
#line 740 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_ILLUMINATIONTYPE"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "ILLUMINATIONTYPE";
  ;}
    break;

  case 87:
#line 745 "Ecc/Parser.y"
    {
    _strCurrentPropertyPropertyType = "CEntityProperty::EPT_ANIMATION"; 
    _strCurrentPropertyEnumType = "NULL"; 
    _strCurrentPropertyDataType = "ANIMATION";
  ;}
    break;

  case 88:
#line 753 "Ecc/Parser.y"
    {
    _strCurrentPropertyName = "\"\""; 
    _strCurrentPropertyShortcut = "0"; 
    _strCurrentPropertyColor = "0"; // this won't be rendered anyway
  ;}
    break;

  case 89:
#line 758 "Ecc/Parser.y"
    {
    _strCurrentPropertyName = (yyvsp[(1) - (3)]).strString; 
  ;}
    break;

  case 90:
#line 763 "Ecc/Parser.y"
    {
    _strCurrentPropertyShortcut = "0"; 
  ;}
    break;

  case 91:
#line 766 "Ecc/Parser.y"
    {
    _strCurrentPropertyShortcut = (yyvsp[(1) - (1)]).strString; 
  ;}
    break;

  case 92:
#line 771 "Ecc/Parser.y"
    {
    _strCurrentPropertyColor = "0x7F0000FFUL"; // dark red
  ;}
    break;

  case 93:
#line 774 "Ecc/Parser.y"
    {
    _strCurrentPropertyColor = (yyvsp[(3) - (4)]).strString; 
  ;}
    break;

  case 94:
#line 778 "Ecc/Parser.y"
    {
    _strCurrentPropertyFlags = "0"; // dark red
  ;}
    break;

  case 95:
#line 781 "Ecc/Parser.y"
    {
    _strCurrentPropertyFlags = (yyvsp[(3) - (4)]).strString; 
  ;}
    break;

  case 96:
#line 786 "Ecc/Parser.y"
    {
    if (strcmp(_strCurrentPropertyDataType,"CEntityPointer")==0)  {
      _strCurrentPropertyDefaultCode = (SType(_strCurrentPropertyIdentifier)+" = NULL;").strString;
    } else if (strcmp(_strCurrentPropertyDataType,"CModelObject")==0)  {
      _strCurrentPropertyDefaultCode = 
        (SType(_strCurrentPropertyIdentifier)+".SetData(NULL);\n"+
        _strCurrentPropertyIdentifier+".mo_toTexture.SetData(NULL);").strString;
    } else if (strcmp(_strCurrentPropertyDataType,"CModelInstance")==0)  {
      _strCurrentPropertyDefaultCode = 
        (SType(_strCurrentPropertyIdentifier)+".Clear();\n").strString;
    } else if (strcmp(_strCurrentPropertyDataType,"CAnimObject")==0)  {
      _strCurrentPropertyDefaultCode = 
        (SType(_strCurrentPropertyIdentifier)+".SetData(NULL);\n").strString;
    } else if (strcmp(_strCurrentPropertyDataType,"CSoundObject")==0)  {
      _strCurrentPropertyDefaultCode = 
        (SType(_strCurrentPropertyIdentifier)+".SetOwner(this);\n"+
         _strCurrentPropertyIdentifier+".Stop_internal();").strString;
    } else {
      yyerror("this kind of property must have default value");
      _strCurrentPropertyDefaultCode = "";
    }
  ;}
    break;

  case 97:
#line 808 "Ecc/Parser.y"
    {
    if (strcmp(_strCurrentPropertyDataType,"CEntityPointer")==0)  {
      yyerror("CEntityPointer type properties always default to NULL");
    } else {
      _strCurrentPropertyDefaultCode = (SType(_strCurrentPropertyIdentifier)+" = "+(yyvsp[(2) - (2)]).strString+";").strString;
    }
  ;}
    break;

  case 103:
#line 818 "Ecc/Parser.y"
    {(yyval) = (yyvsp[(1) - (1)]) + " ";;}
    break;

  case 104:
#line 819 "Ecc/Parser.y"
    {(yyval) = (yyvsp[(1) - (4)])+(yyvsp[(2) - (4)])+(yyvsp[(3) - (4)])+(yyvsp[(4) - (4)]);;}
    break;

  case 105:
#line 820 "Ecc/Parser.y"
    {(yyval) = (yyvsp[(1) - (4)])+(yyvsp[(2) - (4)])+(yyvsp[(3) - (4)])+(yyvsp[(4) - (4)]);;}
    break;

  case 106:
#line 821 "Ecc/Parser.y"
    {(yyval) = (yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 107:
#line 822 "Ecc/Parser.y"
    {(yyval) = (yyvsp[(1) - (3)])+(yyvsp[(2) - (3)])+(yyvsp[(3) - (3)]);;}
    break;

  case 108:
#line 829 "Ecc/Parser.y"
    {
    fprintf(_fTables, "  CEntityComponent()\n};\n");
    fprintf(_fTables, "#define %s_componentsct 0\n", _strCurrentClass);
    fprintf(_fTables, "\n");
    fprintf(_fTables, "\n");
  ;}
    break;

  case 109:
#line 835 "Ecc/Parser.y"
    {
    fprintf(_fTables, "};\n");
    fprintf(_fTables, "#define %s_componentsct ARRAYCOUNT(%s_components)\n", 
      _strCurrentClass, _strCurrentClass);
    fprintf(_fTables, "\n");
  ;}
    break;

  case 113:
#line 851 "Ecc/Parser.y"
    {
  fprintf(_fTables, "#define %s ((0x%08x<<8)+%s)\n",
      _strCurrentComponentIdentifier,
      _iCurrentClassID,
      _strCurrentComponentID);
    fprintf(_fTables, " CEntityComponent(%s, %s, \"%s%s\" %s),\n",
      _strCurrentComponentType,
      _strCurrentComponentIdentifier,
      "EF","NM",
      _strCurrentComponentFileName);
  ;}
    break;

  case 114:
#line 864 "Ecc/Parser.y"
    { _strCurrentComponentID = (yyvsp[(1) - (1)]).strString; ;}
    break;

  case 115:
#line 865 "Ecc/Parser.y"
    { _strCurrentComponentIdentifier = (yyvsp[(1) - (1)]).strString; ;}
    break;

  case 116:
#line 866 "Ecc/Parser.y"
    { _strCurrentComponentFileName = (yyvsp[(1) - (1)]).strString; ;}
    break;

  case 117:
#line 869 "Ecc/Parser.y"
    { _strCurrentComponentType = "ECT_MODEL"; ;}
    break;

  case 118:
#line 870 "Ecc/Parser.y"
    { _strCurrentComponentType = "ECT_TEXTURE"; ;}
    break;

  case 119:
#line 871 "Ecc/Parser.y"
    { _strCurrentComponentType = "ECT_SOUND"; ;}
    break;

  case 120:
#line 872 "Ecc/Parser.y"
    { _strCurrentComponentType = "ECT_CLASS"; ;}
    break;

  case 121:
#line 879 "Ecc/Parser.y"
    { (yyval) = "";;}
    break;

  case 122:
#line 880 "Ecc/Parser.y"
    {(yyval) = (yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 123:
#line 885 "Ecc/Parser.y"
    {
    const char *strReturnType = (yyvsp[(3) - (13)]).strString;
    const char *strFunctionHeader = ((yyvsp[(4) - (13)])+(yyvsp[(5) - (13)])+(yyvsp[(6) - (13)])+(yyvsp[(7) - (13)])+(yyvsp[(8) - (13)])+(yyvsp[(9) - (13)])).strString;
    const char *strFunctionBody = ((yyvsp[(10) - (13)])+(yyvsp[(11) - (13)])+(yyvsp[(12) - (13)])).strString;
    if (strcmp((yyvsp[(5) - (13)]).strString, _strCurrentClass)==0) {
      if (strcmp(strReturnType+strlen(strReturnType)-4, "void")==0 ) {
        strReturnType = "";
      } else {
        yyerror("use 'void' as return type for constructors");
      }
    }
    fprintf(_fDeclaration, " %s %s %s %s;\n", 
      (yyvsp[(1) - (13)]).strString, (yyvsp[(2) - (13)]).strString, strReturnType, strFunctionHeader);
    fprintf(_fImplementation, "  %s %s::%s %s\n", 
      strReturnType, _strCurrentClass, strFunctionHeader, strFunctionBody);
  ;}
    break;

  case 124:
#line 903 "Ecc/Parser.y"
    { (yyval) = "";;}
    break;

  case 125:
#line 904 "Ecc/Parser.y"
    { (yyval) = " ~ "; ;}
    break;

  case 126:
#line 908 "Ecc/Parser.y"
    { (yyval) = "";;}
    break;

  case 127:
#line 909 "Ecc/Parser.y"
    { 
    if (_bClassIsExported) {
      (yyval) = ""; 
    } else {
      (yyval) = " DECL_DLL "; 
    }
  ;}
    break;

  case 128:
#line 919 "Ecc/Parser.y"
    { (yyval) = "";;}
    break;

  case 129:
#line 920 "Ecc/Parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 130:
#line 923 "Ecc/Parser.y"
    { (yyval) = "";;}
    break;

  case 131:
#line 924 "Ecc/Parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 134:
#line 931 "Ecc/Parser.y"
    { (yyval) = "";;}
    break;

  case 138:
#line 937 "Ecc/Parser.y"
    {(yyval) = (yyvsp[(1) - (3)])+(yyvsp[(2) - (3)])+(yyvsp[(3) - (3)]);;}
    break;

  case 139:
#line 940 "Ecc/Parser.y"
    { (yyval)=(yyvsp[(1) - (2)])+" "+(yyvsp[(2) - (2)]); ;}
    break;

  case 144:
#line 951 "Ecc/Parser.y"
    { (yyval)=(yyvsp[(1) - (2)])+" "+(yyvsp[(2) - (2)]); ;}
    break;

  case 145:
#line 952 "Ecc/Parser.y"
    { (yyval)=(yyvsp[(1) - (2)])+" "+(yyvsp[(2) - (2)]); ;}
    break;

  case 146:
#line 953 "Ecc/Parser.y"
    { (yyval)=(yyvsp[(1) - (2)])+" "+(yyvsp[(2) - (2)]); ;}
    break;

  case 147:
#line 954 "Ecc/Parser.y"
    { (yyval)=(yyvsp[(1) - (2)])+" "+(yyvsp[(2) - (2)]); ;}
    break;

  case 148:
#line 955 "Ecc/Parser.y"
    { (yyval)=(yyvsp[(1) - (2)])+" "+(yyvsp[(2) - (2)]); ;}
    break;

  case 149:
#line 956 "Ecc/Parser.y"
    { (yyval)=(yyvsp[(1) - (2)])+" "+(yyvsp[(2) - (2)]); ;}
    break;

  case 150:
#line 957 "Ecc/Parser.y"
    { (yyval)=(yyvsp[(1) - (2)])+" "+(yyvsp[(2) - (2)]); ;}
    break;

  case 151:
#line 958 "Ecc/Parser.y"
    { (yyval)=(yyvsp[(1) - (2)])+" "+(yyvsp[(2) - (2)]); ;}
    break;

  case 152:
#line 959 "Ecc/Parser.y"
    { (yyval)=(yyvsp[(1) - (4)])+" "+(yyvsp[(2) - (4)])+" "+(yyvsp[(3) - (4)])+" "+(yyvsp[(4) - (4)]); ;}
    break;

  case 153:
#line 967 "Ecc/Parser.y"
    { (yyval) = "";;}
    break;

  case 154:
#line 968 "Ecc/Parser.y"
    {(yyval) = (yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 155:
#line 972 "Ecc/Parser.y"
    { (yyval) = "-1"; ;}
    break;

  case 156:
#line 973 "Ecc/Parser.y"
    {
    (yyval) = SType("STATE_")+(yyvsp[(2) - (5)])+"_"+(yyvsp[(5) - (5)]);
  ;}
    break;

  case 157:
#line 979 "Ecc/Parser.y"
    {
    char *strProcedureName = (yyvsp[(1) - (5)]).strString;
    char strInputEventType[80];
    char strInputEventName[80];
    sscanf((yyvsp[(3) - (5)]).strString, "%s %s", strInputEventType, strInputEventName);

    char strStateID[256];
    char *strBaseStateID = "-1";
    if(strcmp(RemoveLineDirective(strProcedureName), "Main")==0){
      strcpy(strStateID, "1");
      if(strncmp(strInputEventType, "EVoid", 4)!=0 && _strCurrentThumbnail[2]!=0) {
        yyerror("procedure 'Main' can take input parameters only in classes without thumbnails");
      }
    } else {
      sprintf(strStateID, "0x%08x", CreateID());
    }

    sprintf(_strCurrentStateID, "STATE_%s_%s", 
      _strCurrentClass, RemoveLineDirective(strProcedureName));
    fprintf(_fDeclaration, "#define  %s %s\n", _strCurrentStateID, strStateID);
    AddHandlerFunction(strProcedureName, strStateID, (yyvsp[(5) - (5)]).strString);
    fprintf(_fImplementation, 
      "BOOL %s::%s(const CEntityEvent &__eeInput) {\n#undef STATE_CURRENT\n#define STATE_CURRENT %s\n", 
      _strCurrentClass, strProcedureName, _strCurrentStateID);
    fprintf(_fImplementation, 
      "  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_%s, \"%s::%s expects '%s' as input!\");",
      strInputEventType, _strCurrentClass, RemoveLineDirective(strProcedureName), 
      strInputEventType);
    fprintf(_fImplementation, "  const %s &%s = (const %s &)__eeInput;",
      strInputEventType, strInputEventName, strInputEventType);

  ;}
    break;

  case 158:
#line 1010 "Ecc/Parser.y"
    {
    char *strFunctionBody = (yyvsp[(8) - (10)]).strString;
    fprintf(_fImplementation, "%s ASSERT(FALSE); return TRUE;};", strFunctionBody);
  ;}
    break;

  case 159:
#line 1017 "Ecc/Parser.y"
    {
    (yyval)="EVoid e";
  ;}
    break;

  case 160:
#line 1020 "Ecc/Parser.y"
    {
    (yyval)=(yyvsp[(1) - (1)])+" e";
  ;}
    break;

  case 161:
#line 1023 "Ecc/Parser.y"
    {
    (yyval)=(yyvsp[(1) - (2)])+" "+(yyvsp[(2) - (2)]);
  ;}
    break;

  case 167:
#line 1030 "Ecc/Parser.y"
    {(yyval) = (yyvsp[(1) - (1)]) + " ";;}
    break;

  case 188:
#line 1033 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 189:
#line 1034 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 190:
#line 1035 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 191:
#line 1036 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 192:
#line 1037 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 193:
#line 1038 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 194:
#line 1039 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 195:
#line 1040 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 196:
#line 1041 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 197:
#line 1042 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 198:
#line 1043 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 199:
#line 1044 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 200:
#line 1045 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 201:
#line 1046 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 202:
#line 1047 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 203:
#line 1048 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 204:
#line 1049 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 205:
#line 1050 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 206:
#line 1051 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 207:
#line 1052 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 208:
#line 1053 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 209:
#line 1054 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 210:
#line 1055 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (3)])+(yyvsp[(2) - (3)])+(yyvsp[(3) - (3)]);;}
    break;

  case 211:
#line 1056 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (3)])+(yyvsp[(2) - (3)])+(yyvsp[(3) - (3)]);;}
    break;

  case 212:
#line 1057 "Ecc/Parser.y"
    {(yyval) = (yyvsp[(1) - (3)])+(yyvsp[(2) - (3)])+(yyvsp[(3) - (3)]);;}
    break;

  case 213:
#line 1058 "Ecc/Parser.y"
    {(yyval) = (yyvsp[(1) - (2)])+" "+(yyvsp[(2) - (2)]);;}
    break;

  case 245:
#line 1071 "Ecc/Parser.y"
    {(yyval) = (yyvsp[(1) - (1)]) + " ";;}
    break;

  case 246:
#line 1078 "Ecc/Parser.y"
    { (yyval) = "";;}
    break;

  case 247:
#line 1079 "Ecc/Parser.y"
    { (yyval) = (yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]); ;}
    break;

  case 248:
#line 1082 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]);;}
    break;

  case 249:
#line 1083 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (7)])+(yyvsp[(2) - (7)])+(yyvsp[(3) - (7)])+(yyvsp[(4) - (7)])+(yyvsp[(5) - (7)])+(yyvsp[(6) - (7)])+(yyvsp[(7) - (7)]);}
    break;

  case 250:
#line 1084 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (3)])+" "+(yyvsp[(2) - (3)])+(yyvsp[(3) - (3)])+" ";;}
    break;

  case 251:
#line 1085 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (3)])+(yyvsp[(2) - (3)])+(yyvsp[(3) - (3)]);;}
    break;

  case 252:
#line 1086 "Ecc/Parser.y"
    {(yyval)=(yyvsp[(1) - (4)])+(yyvsp[(2) - (4)])+(yyvsp[(3) - (4)])+(yyvsp[(4) - (4)]);;}
    break;

  case 269:
#line 1107 "Ecc/Parser.y"
    {
    if ((yyvsp[(6) - (7)]).bCrossesStates) {
      char strAfterIfName[80], strAfterIfID[11];
      CreateInternalHandlerFunction(strAfterIfName, strAfterIfID);
      (yyval) = (yyvsp[(1) - (7)])+"(!"+(yyvsp[(2) - (7)])+(yyvsp[(3) - (7)])+(yyvsp[(4) - (7)])+"){ Jump(STATE_CURRENT,"+strAfterIfID+", FALSE, EInternal());return TRUE;}"+(yyvsp[(6) - (7)])+
        "Jump(STATE_CURRENT,"+strAfterIfID+", FALSE, EInternal());return TRUE;}"+
        "BOOL "+_strCurrentClass+"::"+strAfterIfName+"(const CEntityEvent &__eeInput){"+
        "\nASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);"+
        "\n#undef STATE_CURRENT\n#define STATE_CURRENT "+strAfterIfID+"\n";
    } else {
      (yyval) = (yyvsp[(1) - (7)])+(yyvsp[(2) - (7)])+(yyvsp[(3) - (7)])+(yyvsp[(4) - (7)])+(yyvsp[(5) - (7)])+(yyvsp[(6) - (7)])+(yyvsp[(7) - (7)]);
    }
  ;}
    break;

  case 270:
#line 1123 "Ecc/Parser.y"
    {
    if ((yyvsp[(6) - (9)]).bCrossesStates || (yyvsp[(9) - (9)]).bCrossesStates) {
      char strAfterIfName[80], strAfterIfID[11];
      char strElseName[80], strElseID[11];
      CreateInternalHandlerFunction(strAfterIfName, strAfterIfID);
      CreateInternalHandlerFunction(strElseName, strElseID);
      (yyval) = (yyvsp[(1) - (9)])+"(!"+(yyvsp[(2) - (9)])+(yyvsp[(3) - (9)])+(yyvsp[(4) - (9)])+"){ Jump(STATE_CURRENT,"+strElseID+", FALSE, EInternal());return TRUE;}"+
        (yyvsp[(6) - (9)])+"Jump(STATE_CURRENT,"+strAfterIfID+", FALSE, EInternal());return TRUE;}"+
        "BOOL "+_strCurrentClass+"::"+strElseName+"(const CEntityEvent &__eeInput){"+
        "\nASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);"+
        "\n#undef STATE_CURRENT\n#define STATE_CURRENT "+strElseID+"\n"+
        (yyvsp[(9) - (9)])+"Jump(STATE_CURRENT,"+strAfterIfID+", FALSE, EInternal());return TRUE;}\n"+
        "BOOL "+_strCurrentClass+"::"+strAfterIfName+"(const CEntityEvent &__eeInput){"+
        "\nASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);"+
        "\n#undef STATE_CURRENT\n#define STATE_CURRENT "+strAfterIfID+"\n";
    } else {
      (yyval) = (yyvsp[(1) - (9)])+(yyvsp[(2) - (9)])+(yyvsp[(3) - (9)])+(yyvsp[(4) - (9)])+(yyvsp[(5) - (9)])+(yyvsp[(6) - (9)])+(yyvsp[(7) - (9)])+(yyvsp[(8) - (9)])+" "+(yyvsp[(9) - (9)]);
    }
  ;}
    break;

  case 271:
#line 1145 "Ecc/Parser.y"
    {
    if (strlen(_strInLoopName)>0) {
      yyerror("Nested loops are not implemented yet");
    }
  ;}
    break;

  case 272:
#line 1149 "Ecc/Parser.y"
    {
    if ((yyvsp[(7) - (8)]).bCrossesStates) {
      CreateInternalHandlerFunction(_strInLoopName, _strInLoopID);
      CreateInternalHandlerFunction(_strAfterLoopName, _strAfterLoopID);
      (yyval) = SType(GetLineDirective((yyvsp[(1) - (8)])))+"Jump(STATE_CURRENT,"+_strInLoopID+", FALSE, EInternal());return TRUE;}"+
        "BOOL "+_strCurrentClass+"::"+_strInLoopName+"(const CEntityEvent &__eeInput)"+(yyvsp[(6) - (8)])+
        "\nASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);"+
        "\n#undef STATE_CURRENT\n#define STATE_CURRENT "+_strInLoopID+"\n"+
        "if(!"+(yyvsp[(2) - (8)])+(yyvsp[(3) - (8)])+(yyvsp[(4) - (8)])+"){ Jump(STATE_CURRENT,"+_strAfterLoopID+", FALSE, EInternal());return TRUE;}"+
        (yyvsp[(7) - (8)])+"Jump(STATE_CURRENT,"+_strInLoopID+", FALSE, EInternal());return TRUE;"+(yyvsp[(8) - (8)])+
        "BOOL "+_strCurrentClass+"::"+_strAfterLoopName+"(const CEntityEvent &__eeInput) {"+
        "\nASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);"+
        "\n#undef STATE_CURRENT\n#define STATE_CURRENT "+_strAfterLoopID+"\n";
    } else {
      (yyval) = (yyvsp[(1) - (8)])+(yyvsp[(2) - (8)])+(yyvsp[(3) - (8)])+(yyvsp[(4) - (8)])+(yyvsp[(6) - (8)])+(yyvsp[(7) - (8)])+(yyvsp[(8) - (8)]);
    } 
    _strInLoopName[0] = 0;
  ;}
    break;

  case 273:
#line 1170 "Ecc/Parser.y"
    {
    if (strlen(_strInLoopName)>0) {
      yyerror("Nested loops are not implemented yet");
    }
    _strInLoopName[0] = 0;
  ;}
    break;

  case 274:
#line 1175 "Ecc/Parser.y"
    {
    if ((yyvsp[(3) - (10)]).bCrossesStates) {
      CreateInternalHandlerFunction(_strInLoopName, _strInLoopID);
      CreateInternalHandlerFunction(_strAfterLoopName, _strAfterLoopID);
      (yyval) = SType(GetLineDirective((yyvsp[(1) - (10)])))+"Jump(STATE_CURRENT,"+_strInLoopID+", FALSE, EInternal());return TRUE;}"+
        "BOOL "+_strCurrentClass+"::"+_strInLoopName+"(const CEntityEvent &__eeInput)"+(yyvsp[(2) - (10)])+
        "\nASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);"+
        "\n#undef STATE_CURRENT\n#define STATE_CURRENT "+_strInLoopID+"\n"+(yyvsp[(3) - (10)])+
        "if(!"+(yyvsp[(7) - (10)])+(yyvsp[(8) - (10)])+(yyvsp[(9) - (10)])+"){ Jump(STATE_CURRENT,"+_strAfterLoopID+", FALSE, EInternal());return TRUE;}"+
        "Jump(STATE_CURRENT,"+_strInLoopID+", FALSE, EInternal());return TRUE;"+(yyvsp[(4) - (10)])+
        "BOOL "+_strCurrentClass+"::"+_strAfterLoopName+"(const CEntityEvent &__eeInput) {"+
        "\nASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);"+
        "\n#undef STATE_CURRENT\n#define STATE_CURRENT "+_strAfterLoopID+"\n";
    } else {
      (yyval) = (yyvsp[(1) - (10)])+(yyvsp[(2) - (10)])+(yyvsp[(3) - (10)])+(yyvsp[(4) - (10)])+(yyvsp[(6) - (10)])+(yyvsp[(7) - (10)])+(yyvsp[(8) - (10)])+(yyvsp[(9) - (10)])+(yyvsp[(10) - (10)]);
    } 
    _strInLoopName[0] = 0;
  ;}
    break;

  case 275:
#line 1196 "Ecc/Parser.y"
    {
    if (strlen(_strInLoopName)>0) {
      yyerror("Nested loops are not implemented yet");
    }
  ;}
    break;

  case 276:
#line 1200 "Ecc/Parser.y"
    {
    if ((yyvsp[(11) - (12)]).bCrossesStates) {
      CreateInternalHandlerFunction(_strInLoopName, _strInLoopID);
      CreateInternalHandlerFunction(_strAfterLoopName, _strAfterLoopID);
      yyerror("For loops across states are not supported");
    } else {
      (yyval) = (yyvsp[(1) - (12)])+(yyvsp[(2) - (12)])+(yyvsp[(3) - (12)])+(yyvsp[(4) - (12)])+(yyvsp[(5) - (12)])+(yyvsp[(6) - (12)])+(yyvsp[(7) - (12)])+(yyvsp[(8) - (12)])+(yyvsp[(10) - (12)])+(yyvsp[(11) - (12)])+(yyvsp[(12) - (12)]);
    } 
    _strInLoopName[0] = 0;
  ;}
    break;

  case 277:
#line 1213 "Ecc/Parser.y"
    {
      if (!_bInProcedure) {
        yyerror("Cannot have 'wait' in functions");
      }
      CreateInternalHandlerFunction(_strInWaitName, _strInWaitID);
      CreateInternalHandlerFunction(_strAfterWaitName, _strAfterWaitID);
      _bHasOtherwise = 0;
      _bInHandler = 1;
  ;}
    break;

  case 278:
#line 1221 "Ecc/Parser.y"
    {
    if ((yyvsp[(5) - (6)]).bCrossesStates) {
      yyerror("'wait' statements must not be nested");
      (yyval) = "";
    } else {
      SType stDefault;
      if (!_bHasOtherwise) {
        stDefault = SType("default: return FALSE; break;");
      } else {
        stDefault = SType("");
      }

      (yyval) = SType(GetLineDirective((yyvsp[(1) - (6)])))+(yyvsp[(2) - (6)])+";\n"+
        "Jump(STATE_CURRENT, "+_strInWaitID+", FALSE, EBegin());return TRUE;}"+
        "BOOL "+_strCurrentClass+"::"+_strInWaitName+"(const CEntityEvent &__eeInput) {"+
        "\n#undef STATE_CURRENT\n#define STATE_CURRENT "+_strInWaitID+"\n"+
        "switch(__eeInput.ee_slEvent)"+(yyvsp[(4) - (6)])+(yyvsp[(5) - (6)])+stDefault+(yyvsp[(6) - (6)])+
        "return TRUE;}BOOL "+_strCurrentClass+"::"+_strAfterWaitName+"(const CEntityEvent &__eeInput){"+
        "\nASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);"+
        "\n#undef STATE_CURRENT\n#define STATE_CURRENT "+_strAfterWaitID+"\n";
      (yyval).bCrossesStates = 1;
      _bInHandler = 0;
    }
  ;}
    break;

  case 279:
#line 1247 "Ecc/Parser.y"
    {
    if (!_bInProcedure) {
      yyerror("Cannot have 'autowait' in functions");
    }
    CreateInternalHandlerFunction(_strInWaitName, _strInWaitID);
    CreateInternalHandlerFunction(_strAfterWaitName, _strAfterWaitID);
    _bHasOtherwise = 0;

    (yyval) = SType(GetLineDirective((yyvsp[(1) - (3)])))+(yyvsp[(2) - (3)])+";\n"+
      "Jump(STATE_CURRENT, "+_strInWaitID+", FALSE, EBegin());return TRUE;}"+
      "BOOL "+_strCurrentClass+"::"+_strInWaitName+"(const CEntityEvent &__eeInput) {"+
      "\n#undef STATE_CURRENT\n#define STATE_CURRENT "+_strInWaitID+"\n"+
      "switch(__eeInput.ee_slEvent) {"+
      "case EVENTCODE_EBegin: return TRUE;"+
      "case EVENTCODE_ETimer: Jump(STATE_CURRENT,"+_strAfterWaitID+", FALSE, EInternal()); return TRUE;"+
      "default: return FALSE; }}"+
      "BOOL "+_strCurrentClass+"::"+_strAfterWaitName+"(const CEntityEvent &__eeInput){"+
      "\nASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);"+
      "\n#undef STATE_CURRENT\n#define STATE_CURRENT "+_strAfterWaitID+"\n"+(yyvsp[(3) - (3)]);
    (yyval).bCrossesStates = 1;
  ;}
    break;

  case 280:
#line 1271 "Ecc/Parser.y"
    {
    if (!_bInProcedure) {
      yyerror("Cannot have 'autocall' in functions");
    }
    CreateInternalHandlerFunction(_strInWaitName, _strInWaitID);
    CreateInternalHandlerFunction(_strAfterWaitName, _strAfterWaitID);
    _bHasOtherwise = 0;

    (yyval) = SType(GetLineDirective((yyvsp[(1) - (5)])))+(yyvsp[(2) - (5)])+";\n"+
      "Jump(STATE_CURRENT, "+_strInWaitID+", FALSE, EBegin());return TRUE;}"+
      "BOOL "+_strCurrentClass+"::"+_strInWaitName+"(const CEntityEvent &__eeInput) {"+
      "\n#undef STATE_CURRENT\n#define STATE_CURRENT "+_strInWaitID+"\n"+
      "switch(__eeInput.ee_slEvent) {"+
      "case EVENTCODE_EBegin: return TRUE;"+
      "case EVENTCODE_"+(yyvsp[(3) - (5)])+": Jump(STATE_CURRENT,"+_strAfterWaitID+", FALSE, __eeInput); return TRUE;"+
      "default: return FALSE; }}"+
      "BOOL "+_strCurrentClass+"::"+_strAfterWaitName+"(const CEntityEvent &__eeInput){"+
      "\n#undef STATE_CURRENT\n#define STATE_CURRENT "+_strAfterWaitID+"\n"+
      "const "+(yyvsp[(3) - (5)])+"&"+(yyvsp[(4) - (5)])+"= ("+(yyvsp[(3) - (5)])+"&)__eeInput;\n"+(yyvsp[(5) - (5)]);
    (yyval).bCrossesStates = 1;
  ;}
    break;

  case 281:
#line 1296 "Ecc/Parser.y"
    {
    (yyval) = SType("__e");
  ;}
    break;

  case 282:
#line 1299 "Ecc/Parser.y"
    {
    (yyval) = (yyvsp[(1) - (1)]);
  ;}
    break;

  case 283:
#line 1304 "Ecc/Parser.y"
    {
    if (!_bInProcedure) {
      yyerror("Cannot have 'autocall' in functions");
    }
    CreateInternalHandlerFunction(_strInWaitName, _strInWaitID);
    CreateInternalHandlerFunction(_strAfterWaitName, _strAfterWaitID);
    _bHasOtherwise = 0;

    (yyval) = SType(GetLineDirective((yyvsp[(1) - (8)])))+(yyvsp[(2) - (8)])+";\n"+
      "Jump(STATE_CURRENT, "+_strInWaitID+", FALSE, EBegin());return TRUE;}"+
      "BOOL "+_strCurrentClass+"::"+_strInWaitName+"(const CEntityEvent &__eeInput) {"+
      "\n#undef STATE_CURRENT\n#define STATE_CURRENT "+_strInWaitID+"\n"+
      "switch(__eeInput.ee_slEvent) {"+
      "case EVENTCODE_EBegin: Call"+(yyvsp[(3) - (8)])+"STATE_CURRENT, "+(yyvsp[(2) - (8)])+", "+(yyvsp[(4) - (8)])+(yyvsp[(5) - (8)])+";return TRUE;"+
      "case EVENTCODE_"+(yyvsp[(6) - (8)])+": Jump(STATE_CURRENT,"+_strAfterWaitID+", FALSE, __eeInput); return TRUE;"+
      "default: return FALSE; }}"+
      "BOOL "+_strCurrentClass+"::"+_strAfterWaitName+"(const CEntityEvent &__eeInput){"+
      "\n#undef STATE_CURRENT\n#define STATE_CURRENT "+_strAfterWaitID+"\n"+
      "const "+(yyvsp[(6) - (8)])+"&"+(yyvsp[(7) - (8)])+"= ("+(yyvsp[(6) - (8)])+"&)__eeInput;\n"+(yyvsp[(8) - (8)]);
    (yyval).bCrossesStates = 1;
  ;}
    break;

  case 284:
#line 1328 "Ecc/Parser.y"
    {
    (yyval) = SType("SetTimerAt(THINKTIME_NEVER)"); 
  ;}
    break;

  case 285:
#line 1331 "Ecc/Parser.y"
    {
    (yyval) = SType("SetTimerAfter")+(yyvsp[(1) - (3)])+(yyvsp[(2) - (3)])+(yyvsp[(3) - (3)]); 
  ;}
    break;

  case 286:
#line 1337 "Ecc/Parser.y"
    {
    if (!_bInProcedure) {
      yyerror("Cannot have 'jump' in functions");
    }
    (yyval) = SType(GetLineDirective((yyvsp[(1) - (6)])))+"Jump"+(yyvsp[(3) - (6)])+"STATE_CURRENT, "+(yyvsp[(2) - (6)])+", "+(yyvsp[(4) - (6)])+(yyvsp[(5) - (6)])+";return TRUE;";
  ;}
    break;

  case 287:
#line 1346 "Ecc/Parser.y"
    {
    if (!_bInProcedure) {
      yyerror("Cannot have 'call' in functions");
    }
    if (!_bInHandler) {
      yyerror("'call' must be inside a 'wait' statement");
    }
    (yyval) = SType(GetLineDirective((yyvsp[(1) - (6)])))+"Call"+(yyvsp[(3) - (6)])+"STATE_CURRENT, "+(yyvsp[(2) - (6)])+", "+(yyvsp[(4) - (6)])+(yyvsp[(5) - (6)])+";return TRUE;";
  ;}
    break;

  case 288:
#line 1358 "Ecc/Parser.y"
    { 
    (yyval) = (yyvsp[(1) - (1)]);
  ;}
    break;

  case 289:
#line 1361 "Ecc/Parser.y"
    {
    (yyval) = SType("EVoid()");
  ;}
    break;

  case 290:
#line 1367 "Ecc/Parser.y"
    {
    (yyval) = SType("STATE_")+_strCurrentClass+"_"+(yyvsp[(1) - (1)])+", TRUE";
  ;}
    break;

  case 291:
#line 1370 "Ecc/Parser.y"
    {
    (yyval) = SType("STATE_")+(yyvsp[(1) - (4)])+"_"+(yyvsp[(4) - (4)])+", FALSE";
  ;}
    break;

  case 292:
#line 1376 "Ecc/Parser.y"
    {
    (yyval) = SType(GetLineDirective((yyvsp[(1) - (2)])))+"UnsetTimer();Jump(STATE_CURRENT,"
      +_strAfterWaitID+", FALSE, EInternal());"+"return TRUE"+(yyvsp[(2) - (2)]);
  ;}
    break;

  case 293:
#line 1382 "Ecc/Parser.y"
    {
    (yyval) = SType(GetLineDirective((yyvsp[(1) - (2)])))+"return TRUE"+(yyvsp[(2) - (2)]);
  ;}
    break;

  case 294:
#line 1387 "Ecc/Parser.y"
    {
    (yyval) = SType(GetLineDirective((yyvsp[(1) - (2)])))+"return FALSE"+(yyvsp[(2) - (2)]);
  ;}
    break;

  case 295:
#line 1392 "Ecc/Parser.y"
    {
    if (!_bInProcedure) {
      (yyval) = (yyvsp[(1) - (3)])+" "+(yyvsp[(2) - (3)])+(yyvsp[(3) - (3)]);
    } else {
      if (strlen((yyvsp[(2) - (3)]).strString)==0) {
        (yyvsp[(2) - (3)]) = SType("EVoid()");
      }
      (yyval) = SType(GetLineDirective((yyvsp[(1) - (3)])))
        +"Return(STATE_CURRENT,"+(yyvsp[(2) - (3)])+");"
        +(yyvsp[(1) - (3)])+" TRUE"+(yyvsp[(3) - (3)]);
    }
  ;}
    break;

  case 296:
#line 1406 "Ecc/Parser.y"
    {(yyval) = "";;}
    break;

  case 298:
#line 1411 "Ecc/Parser.y"
    {
    char strInputEventType[80];
    char strInputEventName[80];
    sscanf((yyvsp[(3) - (9)]).strString, "%s %s", strInputEventType, strInputEventName);

    (yyval) = SType("case")+(yyvsp[(2) - (9)])+"EVENTCODE_"+strInputEventType+(yyvsp[(4) - (9)])+(yyvsp[(5) - (9)])+(yyvsp[(6) - (9)])+
      "const "+strInputEventType+"&"+strInputEventName+"= ("+
      strInputEventType+"&)__eeInput;\n"+(yyvsp[(7) - (9)])+(yyvsp[(8) - (9)])+"ASSERT(FALSE);break;";
  ;}
    break;

  case 299:
#line 1420 "Ecc/Parser.y"
    {
    char strInputEventType[80];
    char strInputEventName[80];
    sscanf((yyvsp[(3) - (9)]).strString, "%s %s", strInputEventType, strInputEventName);

    (yyval) = SType("default")+(yyvsp[(5) - (9)])+(yyvsp[(6) - (9)])+(yyvsp[(7) - (9)])+(yyvsp[(8) - (9)])+"ASSERT(FALSE);break;";
    _bHasOtherwise = 1;
  ;}
    break;

  case 300:
#line 1430 "Ecc/Parser.y"
    { (yyval) = "";;}
    break;

  case 301:
#line 1431 "Ecc/Parser.y"
    { (yyval) = (yyvsp[(1) - (2)])+(yyvsp[(2) - (2)]); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4309 "Ecc/Parser.cpp"
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


#line 1434 "Ecc/Parser.y"


