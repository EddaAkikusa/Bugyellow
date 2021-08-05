#include "bugyellowapp.hpp"

int main(int argc, char ** argv)
{
    TBugYellowApp app(argc, argv);
    app.run();
    app.shutDown();
    return 0;
}