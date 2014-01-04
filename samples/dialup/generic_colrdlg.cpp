/////////////////////////////////////////////////////////////////////////////
// Name:        generic_colrdlg.cpp
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
#include <wx/propdlg.h>
#include <wx/fdrepdlg.h>
#include <wx/colourdata.h>
#include <wx/textctrl.h>
#include <wx/infobar.h>
#include <wx/notifmsg.h>

#include "dialogs.h"

#if USE_COLOURDLG_GENERIC
    #include "../src/generic/colrdlgg.cpp"
#endif // USE_COLOURDLG_GENERIC

