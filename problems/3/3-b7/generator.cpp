#include "testlib.h"
#include <format>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);

    println(std::format("{:.2f}", rnd.next(0, limit) / 100.0));

    return 0;
}