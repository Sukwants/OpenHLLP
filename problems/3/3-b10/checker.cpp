#include "testlib.h"

int main(int argc, char* argv[])
{
    registerTestlibCmd(argc, argv);

    if (ans.readLines(541) == ouf.readLines(541))
        quitf(_ok, "Correct");
    else
        quitf(_wa, "Incorrect");

    return 0;
}