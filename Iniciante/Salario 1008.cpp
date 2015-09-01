/* Solução exercicio https://www.urionlinejudge.com.br/judge/pt/problems/view/1008
Andrey.*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
	char nome[100];
  	double salario, totVendas;
  	
  	cin >> nome >> salario >> totVendas;
  	cout << fixed << setprecision(2) << "TOTAL = R$ " << salario + (totVendas * 0.15) << endl;
  	return 0;
}
