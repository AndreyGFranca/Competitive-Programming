#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	float x, y, z;
	cin >> x >> y >> z;
	
	if (x > y && x > z && z > y)
	{
		cout << y << "\n" << z << "\n" << x << endl;
		cout << "\n";
		cout << x << "\n" << y << "\n" << z << endl;
	}
	else if (x > y && x > z && y > z)
	{
		cout << z << "\n" << y << "\n" << x << endl;
		cout << "\n";
		cout << x << "\n" << y << "\n" << z << endl;
	}
	else if (y > x && y > z && x > z)
	{
		cout << z << "\n" << x << "\n" << y << endl;
		cout << "\n";
		cout << x << "\n" << y << "\n" << z << endl;
	}
	else if (y > x && y > z && z > x)
	{
		cout << x << "\n" << z << "\n" << y << endl;
		cout << "\n";
		cout << x << "\n" << y << "\n" << z << endl;
	}
	else if (z > y && z > x && x > y)
	{
		cout << y << "\n" << x << "\n" << z << endl;
		cout << "\n";
		cout << x << "\n" << y << "\n" << z << endl;
	}
	else if (z > y && z > x && y > x)
	{
		cout << x << "\n" << y << "\n" << z << endl;
		cout << "\n";
		cout << x << "\n" << y << "\n" << z << endl;
	}
	return 0;
}
