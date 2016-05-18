#include <iostream>

using namespace std;

int main() {
    int num = 0, par[5], impar[5], aux = 0, i = 0, j = 0;

    while (aux < 15){
        cin >> num;
        if(num % 2 == 0){
            par[i] = num;
            i++;
        }
        else{
            impar[j] = num;
            j++;
        }

        if(i == 5){
            for (int k = 0; k < 5; k++){
                cout << "par[" << k << "] = " << par[k] << endl;
            }
            i = 0;
        }
        else if (j == 5){
            for (int k = 0; k < 5; k++){
                cout << "impar[" << k << "] = " << impar[k] << endl;
            }
            j = 0;
        }

        aux++;
    }

    for (int k = 0; k < j; k++) {
        cout << "impar[" << k << "] = " << impar[k] << endl;
    }
    
    for (int k = 0; k < i; k++){
        cout << "par[" << k << "] = " << par[k] << endl;
    }
    return 0;
}
