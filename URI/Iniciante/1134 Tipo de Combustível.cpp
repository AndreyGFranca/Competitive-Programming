#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    short int num;
    int gasolina = 0, alcool = 0, diesel = 0;

    inicio:
    cin >> num;

    if (num == 4) {
        cout << "MUITO OBRIGADO\nAlcool: " << alcool << "\nGasolina: " << gasolina << "\nDiesel: " << diesel << endl;
    }
    else if (num == 1) {alcool +=1; goto inicio;}
    else if (num == 2) {gasolina +=1; goto inicio;}
    else if (num == 3) {diesel +=1; goto inicio;}
    else if (num > 4 || num < 1) goto inicio;
    return 0;
}
