#include <iostream>
using namespace std;

int main ()
{
	int N, min, hrs, seg;
	
	cin >> N;
	min = N/60;
	if(min > 60)
	{
		hrs = min/60;
		min = min%60;
	}
	else hrs = 0;
	seg = N%60;
	cout << hrs << ":" << min << ":" << seg << endl;
	return 0;
}
