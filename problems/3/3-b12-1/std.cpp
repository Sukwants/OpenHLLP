#include <iostream>

using namespace std;

int main()
{
	int x;

	while (1) {
		cout << "ÇëÊäÈëxµÄÖµ[0-100] : ";
		cin >> x;
		if (cin.fail())
			cin.clear(), [&](){
                while (getchar() != '\n');
            }();
		else if (x >= 0 && x <= 100)
			break;
	}

	cout << "cin.fail()=" << cin.fail() <<  " x=" << x << endl;

	return 0;
}
