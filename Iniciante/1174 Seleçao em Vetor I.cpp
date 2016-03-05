#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float V[100];
    for(int i = 0; i < 100; i++){
        cin >> V[i];
    }
    for (int i = 0; i < 100; i++){
        if (V[i] <= 10){
            cout << fixed << setprecision(2) << "A[" << i << "] = " << V[i] << endl;
        }
    }
    return 0;
}
