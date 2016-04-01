/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 197 "Engine/Base/Parser.y"
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
/* Line 1529 of yacc.c.  */
#line 126 "Engine/Base/Parser.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



