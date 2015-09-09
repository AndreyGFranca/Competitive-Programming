#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	float salarioInc, salarioFin, reajuste;
	cin >> salarioInc;

	if (salarioInc <= 400)
	{
		reajuste = salarioInc * 0.15;
		salarioFin = salarioInc + reajuste;
		cout << fixed << setprecision(2);
		cout << "Novo salario: " << salarioFin << endl;
		cout << "Reajuste ganho: " << reajuste << endl;
		cout << "Em percentual: 15 %" << endl;
	}
	else if (salarioInc > 400 && salarioInc <= 800)
	{
		reajuste = salarioInc * 0.12;
		salarioFin = salarioInc + reajuste;
		cout << fixed << setprecision(2);
		cout << "Novo salario: " << salarioFin << endl;
		cout << "Reajuste ganho: " << reajuste << endl;
		cout << "Em percentual: 12 %" << endl;
	}
	else if (salarioInc > 800 && salarioInc <= 1200)
	{
		reajuste = salarioInc * 0.10;
		salarioFin = salarioInc + reajuste;
		cout << fixed << setprecision(2);
		cout << "Novo salario: " << salarioFin << endl;
		cout << "Reajuste ganho: " << reajuste << endl;
		cout << "Em percentual: 10 %" << endl;
	}
	else if (salarioInc > 1200 && salarioInc <= 2000)
	{
		reajuste = salarioInc * 0.07;
		salarioFin = salarioInc + reajuste;
		cout << fixed << setprecision(2);
		cout << "Novo salario: " << salarioFin << endl;
		cout << "Reajuste ganho: " << reajuste << endl;
		cout << "Em percentual: 7 %" << endl;
	}
	else if (salarioInc > 2000)
	{
		reajuste = salarioInc * 0.04;
		salarioFin = salarioInc + reajuste;
		cout << fixed << setprecision(2);
		cout << "Novo salario: " << salarioFin << endl;
		cout << "Reajuste ganho: " << reajuste << endl;
		cout << "Em percentual: 4 %" << endl;
	}

	return 0;
}
