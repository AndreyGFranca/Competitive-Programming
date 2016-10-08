#include <iostream>
#include <iomanip>

using namespace std;


int main ()
{
    int iNum = 0, iRat = 0, iSap = 0, iCoe = 0, iTot = 0, iQtd = 0;
    char cCob;

    cin >> iNum;

    for (int i = 0; i < iNum; i++)
    {
        cin >> iQtd;
        cin >> cCob;

        iTot += iQtd;

        if (cCob == 'C') iCoe += iQtd;
        if (cCob == 'S') iSap += iQtd;
        if (cCob == 'R') iRat +=iQtd;
    }
    cout << "Total: " << iTot << " cobaias" << endl;
    cout << "Total de coelhos: " << iCoe << endl;
    cout << "Total de ratos: " << iRat << endl;
    cout << "Total de sapos: " << iSap << endl;
    cout << fixed << setprecision(2) << "Percentual de coelhos: " << ((float)iCoe / (float)iTot) * 100  << endl;
    cout << fixed << setprecision(2) <<  "Percentual de ratos: " << ((float)iRat / (float)iTot) * 100 << endl;
    cout << fixed << setprecision(2) <<  "Percentual de sapos: " << ((float)iSap / (float)iTot) * 100 << endl;


    return 0;
}
