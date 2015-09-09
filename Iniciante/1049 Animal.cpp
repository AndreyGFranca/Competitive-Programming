#include <iostream>
#include <string>
using namespace std;


int main()
{
	string escolha1, escolha2, escolha3;
	
	cin >> escolha1;
	if (escolha1 == "vertebrado")
	{
		cin >> escolha2;
		if (escolha2 == "ave")
		{
			cin >> escolha3;
			if (escolha3 == "carnivoro")
				cout << "aguia" << endl;
			else if (escolha3 == "onivoro")
				cout << "pomba" << endl;
		}
		else if (escolha2 == "mamifero")
		{
			cin >> escolha3;
			if (escolha3 == "onivoro") {
				cout << "homem" << endl;
			}
			else if (escolha3 == "herbivoro")
				cout << "vaca" << endl;
		}
	}
	else if (escolha1 == "invertebrado")
	{
		cin >> escolha2;
		if (escolha2 == "inseto")
		{
			cin >> escolha3;
			if (escolha3 == "hematofago")
				cout << "pulga" << endl;
			else if (escolha3 == "herbivoro")
				cout << "lagarta" << endl;
		}
		else if (escolha2 == "anelideo")
		{
			cin >> escolha3;
			if (escolha3 == "hematofago")
				cout << "sanguessuga" << endl;
			else if (escolha3 == "onivoro")
				cout << "minhoca" << endl;
		}
	}
	return 0;
}
