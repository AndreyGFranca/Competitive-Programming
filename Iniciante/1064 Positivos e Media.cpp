#include <iostream>

using namespace std;

int main()
{
	float num, soma = 0;
	int pos = 0;

	for (int i = 0; i < 6; i++)
	{
		cin >> num;
		if (num > 0)
		{
			pos++;
			soma += num;
		}
	}
	cout << pos << " valores positivos" << endl;
	cout << soma / pos << endl;
	system("pause");

	return 0;
}