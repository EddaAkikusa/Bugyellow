#define Uses_TKeys
#define Uses_TMenuBar
#define Uses_TStatusLine
#define Uses_TStatusDef
#define Uses_TSubMenu

#include "bugyellowapp.hpp"

TBugYellowApp::TBugYellowApp(int argc, char ** argv)
    : TProgInit(TBugYellowApp::initStatusLine,
                TBugYellowApp::initMenuBar,
                TBugYellowApp::initDeskTop),
      TApplication()
{

}

TBugYellowApp::~TBugYellowApp()
{
    
}

TStatusLine * TBugYellowApp::initStatusLine(TRect r)
{
    r.a.y = r.b.y-1;
    return new TStatusLine(r, *new TStatusDef( 0, 0xFFFF ));
}

TMenuBar * TBugYellowApp::initMenuBar(TRect r)
{
    r.b.y = r.a.y+1;
    return new TMenuBar(r, *new TSubMenu("~F~ile", kbAltF));
}