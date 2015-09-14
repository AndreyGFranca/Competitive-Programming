#include <iostream>

using namespace std;

int main()
{
    int iValor1, iValor2, iSoma = 0;
    cin >> iValor1 >> iValor2;
    if (iValor2 > iValor1)
    {
        for (int i = iValor1 + 1; i <= iValor2; i++)
        {
            if (i % 2 != 0)
            {
                iSoma += i;
            }
        }
    }
    else if (iValor1 > iValor2)
    {
       for (int i = iValor2 + 1; i <= iValor1; i++)
        {
            if (i % 2 != 0)
            {
                iSoma += i;
            }
        }

    }
    cout << iSoma << endl;
    return 0;
}
