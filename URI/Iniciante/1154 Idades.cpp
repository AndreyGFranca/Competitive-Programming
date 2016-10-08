#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int idade = 0, cont = 0;
    float media = 0, soma = 0;

    while (idade >= 0){
        cin >> idade;
        if (idade < 0) break;
        soma+=idade;
        cont++;
    }
    media = (float)(soma / cont);

    cout << fixed << setprecision(2) << media << endl;

    return 0;
}
