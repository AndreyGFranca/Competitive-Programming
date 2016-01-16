#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    short int num;

    cin >> num;

    if(num <= 1 || num >= 1000) {return 0;}
    else
    {
        for (int i = 1; i <= num; i++)
        {
            cout << i <<" " <<i*i <<" "<< i*i*i << endl;
        }
    }
    return 0;
}
