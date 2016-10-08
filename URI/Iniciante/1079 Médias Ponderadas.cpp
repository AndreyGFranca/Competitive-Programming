#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int iNum = 0;
	double a = 0, b = 0, c = 0;

	cin >> iNum;
	
	for (int i = 0; i < iNum; i++)
	{
		cin >> a;
		cin >> b;
		cin >> c;

		cout << fixed << setprecision(1) << (a * 2 + b * 3 + c * 5) / 10 << endl;
	}
	return 0;
}