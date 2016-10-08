#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int x = 0, y = 0, maior, menor;

    cin >> x >> y;
    if (x > y) {maior = x; menor = y;}
    else if (y > x) {maior = y; menor = x;}

    for (int i = menor + 1; i < maior; i++)
    {
        if (i % 5 == 2 || i % 5 == 3) cout << i << endl;
    }
    return 0;
}
