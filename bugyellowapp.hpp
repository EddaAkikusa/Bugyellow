#ifndef __bugyellowapp_hpp__
#define __bugyellowapp_hpp__

#define Uses_TApplication

#include <tvision/tv.h>

class TBugYellowApp : public TApplication
{
public:
    TBugYellowApp(int argc, char ** argv);
    virtual ~TBugYellowApp();

    static TMenuBar * initMenuBar(TRect r);
    static TStatusLine * initStatusLine(TRect r);

};

#endif