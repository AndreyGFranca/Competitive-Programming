#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int A, B, C, D, MAIOR;
	
	cin >> A >> B >> C;
	D = ((A + B + abs(A - B)))/2;
	MAIOR = ((D + C + abs(D - C)))/2;
	cout << MAIOR << " eh o maior";
	return 0;
}
