#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int A, B, C, MAIOR;
	
	if (A > B && A > C)
		MAIOR = A;
	if(B > A && B > C)
		MAIOR = B;
	if(C > A && C > B)
		MAIOR = C;
	
	cout << MAIOR <<" eh o maior";
	return 0;
}
