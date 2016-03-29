/* Copyright (c) 2002-2012 Croteam Ltd. All rights reserved. */

#ifndef SE_INCL_LCDDRAWING_H
#define SE_INCL_LCDDRAWING_H
#ifdef PRAGMA_ONCE
  #pragma once
#endif

extern void _LCDInit(void);
extern void _LCDEnd(void);
extern void _LCDPrepare(FLOAT fFade);
extern void _LCDSetDrawport(CDrawPort *pdp);
extern void _LCDDrawBox(PIX pixUL, PIX pixDR, PIXaabbox2D &box, COLOR col);
extern void _LCDScreenBox(COLOR col);
extern void _LCDScreenBoxOpenLeft(COLOR col);
extern void _LCDScreenBoxOpenRight(COLOR col);
extern void _LCDRenderClouds1(void);
extern void _LCDRenderClouds2(void);
extern void _LCDRenderClouds2Light(void);
extern void _LCDRenderGrid(void);
extern void _LCDDrawPointer(PIX pixI, PIX pixJ);
extern COLOR _LCDGetColor(COLOR colDefault, const char *strName);
extern COLOR _LCDFadedColor(COLOR col);
extern COLOR _LCDBlinkingColor(COLOR col0, COLOR col1);

#endif  /* include-once check. */


