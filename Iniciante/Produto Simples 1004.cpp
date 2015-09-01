/* Solução exercicio https://www.urionlinejudge.com.br/judge/pt/problems/view/1003
Andrey.*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
  	double A, B, resultado;
  	
  	cin >> A >> B;
  	resultado = (A * 0.35) +(B * 0.75);
  	cout << fixed << setprecision(5) << "MEDIA = " << ((resultado * 10) / 11) << endl;
  	return 0;
}
