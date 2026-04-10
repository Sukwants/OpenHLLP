#include <cstdio>
#include <cmath>
#include <string>
#include <utility>
#include <vector>

using namespace std;

const int denominations[] = {5000, 2000, 1000, 500, 100, 50, 10, 5, 2, 1};
const string deno_names[] = {"50元", "20元", "10元", "5元 ", "1元 ", "5角 ", "1角 ", "5分 ", "2分 ", "1分 "};

int main()
{
    printf("请输入找零值：\n");
    double x;
    scanf("%lf", &x);
    int n = lround(x * 100);

    vector<pair<int, int>> result;
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        int k = n / denominations[i];
        if (k > 0)
        {
            result.emplace_back(i, k);
            n -= k * denominations[i];
            sum += k;
        }
    }

    printf("共%d张找零，具体如下：\n", sum);
    for (const auto &[i, k] : result)
        printf("%s : %d张\n", deno_names[i].c_str(), k);

    return 0;
}