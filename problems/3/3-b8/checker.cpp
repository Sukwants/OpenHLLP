#include "testlib.h"
#include <format>
#include <regex>
#include <string>

int main(int argc, char* argv[])
{
    registerTestlibCmd(argc, argv);

label:
    std::string a = ans.readLine();
    std::string b = ouf.readLine();
    ensure(a == b);
    if (!a.starts_with("µü´úÖÕÖµ n="))
        goto label;

lebal:
    char c = ans.readChar();
    char d = ouf.readChar();
    ensure(c == d);
    if (c != '=')
        goto lebal;

    double x = ans.readReal();
    double y = ouf.readReal();
    ensure(std::format("{:.5g}", x) == std::format("{:.5g}", y));

    ans.readEoln(), ans.readEof();
    ouf.readEoln(), ouf.readEof();
    quitf(_ok, "Correct");

    return 0;
}