#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	double N;
	int notas100 = 0, notas50 = 0, notas20 = 0, notas10 = 0, notas5 = 0, notas2 = 0, moeda1 = 0, moeda05 = 0, moeda025 = 0, moeda010 = 0, moeda005 = 0, moeda001 = 0;
	
	cin >> N;
	
	do
	{
		if (N >= 100)
		{
			notas100++;	
			N -= 100;
		}
		else if (N >=50)
		{
			notas50++;
			N -= 50;
		}
		else if (N >=20)
		{
			notas20++;
			N -= 20;
		}
		else if (N >=10)
		{
			notas10++;
			N -= 10;
		}
		else if ( N >=5)
		{
			notas5++;
			N -= 5;
		}
		else if (N >=2)
		{
			notas2++;
			N -= 2;
		}
		else if (N >=1)
		{
			moeda1++;
			N -= 1;
		}
		else if (N >=0.5)
		{
			moeda05++;
			N -= 0.5;
		}
		else if (N >=0.25)
		{
			moeda025++;
			N -= 0.25;
		}
		else if (N >=0.1)
		{
			moeda010++;
			N -= 0.1;
		}
		else if (N >=0.05)
		{
			moeda005++;
			N -= 0.05;
		}
		else if (N >=0.01)
		{
			moeda001++;
			N -= 0.01;
		}
	}while (N >=0.00);
	
	cout << "NOTAS:" << endl;
	cout << notas100 << " nota(s) de R$ 100.00" << endl;
	cout << notas50 << " nota(s) de R$ 50.00" << endl;
	cout << notas20 << " nota(s) de R$ 20.00" << endl;
	cout << notas10 << " nota(s) de R$ 10.00" << endl;
	cout << notas5 << " nota(s) de R$ 5.00" << endl;
	cout << notas2 << " nota(s) de R$ 2.00" << endl;
	cout << "MOEDAS:" << endl;
	cout << moeda1 << " moeda(s) de R$ 1.00" << endl;
	cout << moeda05 << " moeda(s) de R$ 0.50" << endl;
	cout << moeda025 << " moeda(s) de R$ 0.25" << endl;
	cout << moeda010 << " moeda(s) de R$ 0.10" << endl;
	cout << moeda005 << " moeda(s) de R$ 0.05" << endl;
	cout << moeda001 << " moeda(s) de R$ 0.01" << endl;
	return 0;
}
