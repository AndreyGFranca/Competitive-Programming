#include <iostream>

using namespace std;

int main ()
{
    double x, y;

    do
    {
        cin >> x >> y;

        if (x == 0 || y == 0)
            return 0;
        else if (x > 0 && y > 0)
            cout << "primeiro" << endl;
        else if (x < 0 && y > 0)
            cout << "segundo" << endl;
        else if (x > 0 && y < 0)
            cout << "quarto" << endl;
        else if (x < 0 && y < 0)
            cout << "terceiro" << endl;

    } while (1);

    return 0;
}
