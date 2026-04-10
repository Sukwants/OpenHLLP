#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p[10];
    for (int i = 1; i <= 9; ++i) p[i] = i;

    int total = 0;
    do
    {
        if (p[1] > p[4] || p[4] > p[7])
            continue;
        if (p[1] * 100 + p[2] * 10 + p[3] + p[4] * 100 + p[5] * 10 + p[6] + p[7] * 100 + p[8] * 10 + p[9] == 1953)
            printf("No.%3d : %d+%d+%d=1953\n", ++total, p[1] * 100 + p[2] * 10 + p[3], p[4] * 100 + p[5] * 10 + p[6], p[7] * 100 + p[8] * 10 + p[9]);
    }
    while (next_permutation(p + 1, p + 10), [&] {
        for (int i = 1; i < 8; i++)
            if (p[i + 1] > p[i]) return true;
        return false;
    }());
    printf("total=%d\n", total);
    
    return 0;
}