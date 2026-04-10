#include <cmath>
#include <cstdio>

int main()
{
    int x;
label:
    puts("请输入x的值[-10 ~ +65]");
    scanf("%d", &x);
    if (x < -10 || x > 65)
    {
        puts("输入非法，请重新输入");
        goto label;
    }

    long double sum = 1.0L;
    long double term = 1.0L;
    int n = 1;

    do
    {
        term = term * x / n;
        sum += term;
        ++n;
    }
    while (fabsl(term) > 1e-6L);
    n--;
    sum -= term;

    printf("迭代终值 n=%d |x^%d/%d!|=%.10Lg\n", n, n, n, term);
    printf("e^%d=%.10Lg\n", x, sum);

    return 0;
}