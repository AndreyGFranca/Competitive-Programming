#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int  codigo, quant;
	
	cin >> codigo >> quant;
	
	if (codigo == 1) 
	{
		cout << fixed << setprecision(2) << "Total: R$ " << quant * 4.00 << endl;
	}
	if (codigo == 2) 
	{
		cout << fixed << setprecision(2) << "Total: R$ " << quant * 4.50 << endl;
	}
	if (codigo == 3) 
	{
		cout << fixed << setprecision(2) << "Total: R$ " << quant * 5.00 << endl;
	}
	if (codigo == 4) 
	{
		cout << fixed << setprecision(2) << "Total: R$ " << quant * 2.00 << endl;
	}
	if (codigo == 5) 
	{
		cout << fixed << setprecision(2) << "Total: R$ " << quant * 1.50 << endl;
	}
	
	return 0;
}
