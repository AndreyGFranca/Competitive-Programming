/* Solução exercicio https://www.urionlinejudge.com.br/judge/pt/problems/view/1007
Andrey.*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
  	double numFuncionarios, numHrsTrabalhadas, vlrHora;
  	
  	cin >> numFuncionarios >> numHrsTrabalhadas >> vlrHora;
  	cout << "NUMBER = " << numFuncionarios << endl;
  	cout << fixed << setprecision(2) << "SALARY = U$ " << numHrsTrabalhadas * vlrHora << endl;
  	return 0;
}
