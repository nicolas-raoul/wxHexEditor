/***********************************(GPL)********************************
*   wxHexEditor is a hex edit tool for editing massive files in Linux   *
*   Copyright (C) 2006  Erdem U. Altinyurt                              *
*                                                                       *
*   This program is free software; you can redistribute it and/or       *
*   modify it under the terms of the GNU General Public License         *
*   as published by the Free Software Foundation; either version 2      *
*   of the License, or any later version.                               *
*                                                                       *
*   This program is distributed in the hope that it will be useful,     *
*   but WITHOUT ANY WARRANTY; without even the implied warranty of      *
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the       *
*   GNU General Public License for more details.                        *
*                                                                       *
*   You should have received a copy of the GNU General Public License   *
*   along with this program;                                            *
*   if not, write to the Free Software	Foundation, Inc.,                *
*   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA        *
*                                                                       *
*               home  : wxhexeditor.sourceforge.net                     *
*               email : death_knight at gamebox.net                     *
*************************************************************************/
/***************************************************************
 * Name:      wxHexEditorApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Death Knight
 * Created:   2008-05-12
 * Copyright: Death Knight (wxhexeditor.sourceforge.net)
 * License:...GPL
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "HexEditorApp.h"
#include "HexEditorFrame.h"
IMPLEMENT_APP(wxHexEditorApp);

bool wxHexEditorApp::OnInit()
{
    HexEditorFrame* frame = new HexEditorFrame(0L);
    frame->Show();
    return true;
}
//int wxHexEditorApp::FilterEvent(wxEvent &event){
//#if defined(_DEBUG_) && _DEBUG_ > 1
//	if( event.IsKindOf(CLASSINFO(wxMouseEvent)) )
//		if( static_cast<wxMouseEvent*>(&event)->Dragging() )
//			std::cout << "Got Mouse Event! " <<  std::endl;
//			//return 1;
//#endif
//	return -1;
//	}
