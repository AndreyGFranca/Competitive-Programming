#include <iostream>

using namespace std;

int main()
{
    int iValor, iControle, aux = 0;
    cin >> iValor;

    iControle = iValor;
    while (aux < 6)
    {
        iControle++;
        if(iControle % 2 != 0)
        {
            cout << iControle << endl;
            aux++;
        }
    }

    return 0;
}
