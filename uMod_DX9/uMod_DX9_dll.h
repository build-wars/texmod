/*
This file is part of Universal Modding Engine.


Universal Modding Engine is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Universal Modding Engine is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Universal Modding Engine.  If not, see <http://www.gnu.org/licenses/>.
*/



#ifndef uMod_DX9_DLL_H_
#define uMod_DX9_DLL_H_

#include "../uMod_DXMain/uMod_Main.h"

void LoadOriginal_DX9_Dll(void);
void InitDX9();
void ExitDX9();

#ifndef NO_INJECTION

IDirect3D9 *APIENTRY uMod_Direct3DCreate9(UINT SDKVersion);
HRESULT APIENTRY uMod_Direct3DCreate9Ex( UINT SDKVersion, IDirect3D9Ex **ppD3D);

#endif

#endif