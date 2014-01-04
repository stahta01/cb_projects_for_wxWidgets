/////////////////////////////////////////////////////////////////////////////
// Name:        generic_fontdlg.cpp
// Purpose:     Common dialogs sample include generic code
// Author:      Tim Stahlhut
// Created:     2013-12-31
// Copyright:   public domain
//
//
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

#include <wx/app.h>
#include <wx/apptrait.h>
#include <wx/propdlg.h>  // wxPropertySheetDialog
#include <wx/fdrepdlg.h> // wxFindDialogEvent
#include <wx/colourdata.h>
#include <wx/textctrl.h>
#include <wx/infobar.h>
#include <wx/notifmsg.h> // wxNotificationMessage

#include "dialogs.h"

#if USE_FONTDLG_GENERIC
    #include "../src/generic/fontdlgg.cpp"
#endif // USE_FONTDLG_GENERIC

