/* Solução exercicio https://www.urionlinejudge.com.br/judge/pt/problems/view/1009
Andrey.*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
  	double cod1, num1, vlr1, cod2, num2, vlr2;
  	
  	cin >> cod1 >> num1 >> vlr1; 
	cin >> cod2 >> num2 >> vlr2;
  	cout << fixed << setprecision(2) << "VALOR A PAGAR = R$ " << (vlr1 * num1 ) + (vlr2 * num2) << endl;
  	return 0;
}
