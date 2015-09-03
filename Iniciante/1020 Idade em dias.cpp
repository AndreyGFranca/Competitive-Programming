#include <iostream>
using namespace std;

int main ()
{
	int dias, anos, mes, ctr;
	
	cin >> dias;
	anos = dias/365;
	ctr = dias%365;
	mes = ctr/30;
	dias = ctr%30;
	
	cout << anos << " ano(s)" << endl;
	cout << mes << " mes(es)" << endl;
	cout << dias << " dia(s)" << endl;
	return 0;
}
