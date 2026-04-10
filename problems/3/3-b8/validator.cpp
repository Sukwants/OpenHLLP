#include "testlib.h"

int main(int argc, char* argv[])
{
    registerValidation(argc, argv);

    int x;
    do x = inf.readInt(); while(x < -10 || x > 65);
    inf.readEoln();
    inf.readEof();

    return 0;
}