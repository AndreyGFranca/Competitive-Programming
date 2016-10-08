#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int t, v;
	double gasto;
	cin >> t >> v;
	gasto = t * v;
	cout << fixed << setprecision(3) << gasto / 12 << endl;
	return 0;
}
