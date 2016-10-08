#include <iostream>

using namespace std;

int main ()
{
    int i = 1, j = 0;

    while(i <= 9)
    {

        for (j = 7; j >= 5; j--)
        {
            cout << "I=" << i << " ";
            cout << "J=" << j << endl;
        }

     i = i + 2;
    }

    return 0;
}
