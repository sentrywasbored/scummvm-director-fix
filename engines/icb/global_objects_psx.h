/* ResidualVM - A 3D game interpreter
 *
 * ResidualVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the AUTHORS
 * file distributed with this source distribution.
 *
 * Additional copyright for this file:
 * Copyright (C) 1999-2000 Revolution Software Ltd.
 * This code is based on source code created by Revolution Software,
 * used with permission.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#ifndef ICB_GLOBAL_OBJECTS_PSX_H
#define ICB_GLOBAL_OBJECTS_PSX_H

#include "engines/icb/common/px_rcutypes.h"
#include "engines/icb/surface_manager.h"
#include "engines/icb/gfx/psx_light.h"
#include "engines/icb/gfx/psx_tman.h"
#include "engines/icb/gfx/psx_camera.h"
#include "engines/icb/gfx/psx_pxactor.h"
#include "engines/icb/gfx/rlp_api.h"

namespace ICB {

// The texture manager for the actor textures
extern TextureManager *tman;

// The 3 directional lights and the ambient light
extern psxLight Lights[4];

// Camera and animation structures
extern psxCamera *g_camera;

// Actor structure
extern psxActor *g_av_actor;

// Lighting structure and coordinates, colour components
extern PSXLamp *g_av_Light;

// Colour of the actors bounding box
extern int32 bboxRed;
extern int32 bboxGreen;
extern int32 bboxBlue;

// Colour of the actors screen outline
extern int32 slineRed;
extern int32 slineGreen;
extern int32 slineBlue;

// Colour of the z-fragments outlines
extern int32 zfragRed;
extern int32 zfragGreen;
extern int32 zfragBlue;

// Colour of the z-layers outlines
extern int32 zoverRed;
extern int32 zoverGreen;
extern int32 zoverBlue;

// Colour of the wire-frame man
extern int32 wfrmRed;
extern int32 wfrmGreen;
extern int32 wfrmBlue;

// Drawing options
extern int32 _normalScale;
extern int32 _useWindingOrder;
extern int32 _removeBackface;
extern int32 _drawWfrm;
extern int32 _drawTxture;
extern int32 _drawLit;
extern int32 _drawGouraud;
extern int32 _drawPolys;
extern int32 _drawNormals;

extern int32 _drawActor;
extern int32 _drawBbox;
extern int32 _drawShadowBbox;
extern int32 _drawSolidBbox;
extern int32 _drawSline;
extern int32 _drawShadowSline;
extern int32 _drawZfragEdge;
extern int32 _drawZLayerEdge;
extern int32 _drawZfragImg;
extern int32 _drawBG;
extern int32 _drawProps;
extern int32 _drawSemiTrans;

extern int32 _drawText;
extern int32 _drawCompass;

extern int32 _drawDebugMesh;

} // End of namespace ICB

#endif // #ifndef   _GLOBAL_OBJECTS_PSX_H
