#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double n = 0, s = 0;

    while (n <= 99){
        n++;
        s+= (1/n);
    }

    cout << fixed << setprecision(2) << s << endl;

    return 0;
}
