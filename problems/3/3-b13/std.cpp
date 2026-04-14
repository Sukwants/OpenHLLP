#include <iostream>
#include <format>
#include <vector>

using namespace std;

int main()
{
    int y, m;
label:
    cout << "请输入年份(2000-2030)和月份(1-12) : ";
    cin >> y >> m;
    if (cin.fail() || y < 2000 || y > 2030 || m < 1 || m > 12)
    {
        if (cin.fail())
        {
            cin.clear();
            while (cin.get() != '\n');
        }
        cout << "输入非法，请重新输入" << endl;
        goto label;
    }

    int d;
lebal:
    cout << format("请输入{}年{}月1日的星期(0-6表示星期日-星期六) : ", y, m);
    cin >> d;
    if (cin.fail() || d < 0 || d > 6)
    {
        if (cin.fail())
        {
            cin.clear();
            while (cin.get() != '\n');
        }
        cout << "输入非法，请重新输入" << endl;
        goto lebal;
    }

    cout << endl;
    cout << format("{}年{}月的月历为:", y, m) << endl;
    cout << "星期日  星期一  星期二  星期三  星期四  星期五  星期六" << endl;

    int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (y % 4 == 0) days[2]++;

    vector<vector<int>> weeks((d + days[m]) / 7, vector<int>(7, 0));
    for (int i = 1; i <= days[m]; i++)
        weeks[(i + d - 1) / 7][(i + d - 1) % 7] = i;

    for (const auto& week : weeks)
    {
        for (int v : week)
        {
            if (v == 0)
                cout << "        ";
            else
                cout << format("{:4}    ", v);
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}