#include <iostream>

using namespace std;

int main() {

    int X[10];
    cin >> X[0];
    if(X[0] > 50)
        return 0;

    for (int i = 1; i < 10; i++){
        X[i] = 2 * X[i - 1];
    }

    for (int i = 0; i < 10; i++){
        cout << "X[" << i << "] = " << X[i] << endl;
    }
    return 0;
}
