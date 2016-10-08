#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double nota = 0, media = 0;
    int cont = 0;

    while (cont < 2)
    {
        cin >> nota;
        if(nota < 0 || nota > 10)
        {
            cout << "nota invalida" << endl;
        }
        else
        {
            media+=nota / 2;
            cont++;
        }

    }

    cout << fixed << setprecision(2) << "media = " << media << endl;

    return 0;
}
