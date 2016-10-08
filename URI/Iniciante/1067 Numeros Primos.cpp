#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x > 0)
    {
        for (int i = 0; i <= x; i++)
        {
            if(i % 2 != 0)
            {
                cout << i << endl;
            }
        }
    }
    return 0;
}
