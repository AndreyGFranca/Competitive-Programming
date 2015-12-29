#include <iostream>

using namespace std;

int main ()
{
	int m , n , maior = 0, menor = 0, soma = 0;

    while(1)
    {
        cin >> m >> n;
        if(m <= 0 || n <= 0) return 0;
		soma = 0;
		if(m > n) {maior = m; menor = n;}
		else if(n > m) {maior = n; menor = m;}
		for (int i = menor; i <= maior; i++)
		{
			cout << i << " ";
			soma+=i;
		}
		cout << "Sum=" << soma << endl;
	}
	return 0;
}
