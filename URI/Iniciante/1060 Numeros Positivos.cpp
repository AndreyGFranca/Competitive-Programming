#include <iostream>

using namespace std;

int main ()
{
	float num = 0, pos = 0, aux = 0;
	
	do
	{
		aux++;
		cin >> num;
		if (num > 0) pos++;
	} while (aux < 6);
	cout << pos << " valores positivos" << endl;
	return 0;
}
