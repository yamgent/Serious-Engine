/* Copyright (c) 2002-2012 Croteam Ltd. All rights reserved. */

#ifndef SE_INCL_SERIOUSSAM_STDH_H
#define SE_INCL_SERIOUSSAM_STDH_H

#ifdef PRAGMA_ONCE
#pragma once
#endif

#include <Engine/Engine.h>
#include <Engine/Templates/Stock_CTextureData.h>
#include <Engine/Templates/Stock_CModelData.h>
#include <GameMP/Game.h>

/* rcg10042001 protect against Visual C-isms. */
#ifdef _MSC_VER
#define DECL_DLL _declspec(dllimport)
#endif

#ifdef PLATFORM_UNIX
#define DECL_DLL 
#endif

#include <EntitiesMP/Global.h>
#include <EntitiesMP/Common/Common.h>
#include <EntitiesMP/Common/GameInterface.h>
#include <EntitiesMP/WorldLink.h>
#include <EntitiesMP/Player.h>
#undef DECL_DLL

#define TECHTESTONLY 0

#include "SeriousSam.h"
#include "Menu.h"
#include "MenuGadgets.h"

#endif

