#include <iostream>

using namespace std;

int main ()
{
	int n = 0, aux = 0, n1 = 0, n2 = 0, soma = 0, maior = 0, menor = 0;

	cin >> n;

	while (aux < n)
	{
	    soma = 0;
		cin >> n1 >> n2;
		if(n1 > n2)         {maior = n1; menor = n2;}
		else if (n2 > n1)   {maior = n2; menor = n1;}
		else if(n2 == n1) {cout << "0" << endl; aux++; continue;}

		for (int i = (menor+1); i < maior; i++)
        {
            if(i % 2 != 0)
            {
                soma+=i;
            }
        }
        cout << soma << endl;
		aux++;
	}
	return 0;
}
