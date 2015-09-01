/* Solução exercicio https://www.urionlinejudge.com.br/judge/pt/problems/view/1006
Andrey.*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
  	double A, B, C, D, DIFERENCA;
  	
  	cin >> A >> B >> C >> D;
  	DIFERENCA = (A * B - C * D);
  	cout << "DIFERENCA = " << DIFERENCA << endl;
  	return 0;
}
