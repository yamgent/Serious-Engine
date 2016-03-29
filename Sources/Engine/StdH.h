/* Copyright (c) 2002-2012 Croteam Ltd. All rights reserved. */


#define ENGINE_INTERNAL 1
#define ENGINE_EXPORTS 1

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <time.h>
#include <math.h>
#include <search.h>   // for qsort
#include <float.h>    // for FPU control

#if !PLATFORM_MACOSX
#include <malloc.h>
#endif

#ifdef PLATFORM_WIN32
#include <conio.h>
#include <crtdbg.h>
#include <winsock2.h>
#include <windows.h>
#include <mmsystem.h> // for timers
#endif

#include <Engine/Base/Types.h>
#include <Engine/Base/Assert.h>