/* Solução exercicio https://www.urionlinejudge.com.br/judge/pt/problems/view/1005
Andrey.*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
  	double A, B, C, resultado;
  	
  	cin >> A >> B >> C;
  	resultado = (A * 0.2) + (B * 0.3) + (C * 0.5);
  	cout << fixed << setprecision(5) << "MEDIA = " << ((resultado * 10) / 10) << endl;
  	return 0;
}
