#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	double N1, N2, N3, N4, N5, media, novaMedia;
	
	cin >> N1 >> N2 >> N3 >> N4;
	media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10;
	cout << fixed << setprecision(1) << "Media: " << media << endl;
	if(media >= 7.0)
	{
		cout << "Aluno aprovado." << endl;
	}
	else if(media < 7.0 && media >= 5.0)
	{
		cout << "Aluno em exame." << endl;
		cin >> N5;
		cout << "Nota do exame: " << N5 << endl;
		novaMedia = (N5 + media) / 2;
		if(novaMedia >= 5.0)
		{
			cout << "Aluno aprovado." << endl;
			cout << fixed << setprecision(1) << "Media final: " << novaMedia << endl;
		}
		else
		{
			cout << "Aluno reprovado." << endl;
			cout << fixed << setprecision(1) << "Media final: " << novaMedia << endl;
		}
	}
	else 
	{
		cout << "Aluno reprovado." << endl;
	}
	return 0;
}
