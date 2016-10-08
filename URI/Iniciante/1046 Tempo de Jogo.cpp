#include <iostream>

using namespace std;


int main()
{
	int x, y, tot;
	cin >> x >> y;

	if (y > x)
	{
		tot = y - x;
	}
	else
	{
		int j = 0;
		for (int i = x; i < 24; i++)
		{
			j++ ;
			tot = j + y;
		}
	}
	cout << "O JOGO DUROU " << tot << " HORA(S)" << endl;
	system("pause");
	return 0;
}
