#include <iostream>

using namespace std;

int main ()
{
    int x = 0;

    for (;;){
    cin >> x;

    if (x == 0) return 0;
    for (int i = 1; i < x; i++){
        cout << i << " ";
    }
    cout << x << endl;
    }

    return 0;
}
