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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

