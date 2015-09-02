#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	double raio;
	const double PI = 3.14159;
	
	cin >> raio;
	cout << fixed << setprecision(3) << "VOLUME = " << (4.0/3) * PI * (raio * raio * raio) << endl;
	return 0;
}
