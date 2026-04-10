#include <iostream>
#include <format>

using namespace std;

int main()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << format("{:d}x{:d}={:<4d}", j, i, i * j);
        cout << endl;
    }
    cout << endl;
    return 0;
}