#include <iostream>

using namespace std;

int main() {
    int n = 0, *x = 0, menor = 0, pos = 0;

    cin >> n;

    x = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++){
        cin >> x[i];
    }

    menor = x[0];
    for (int i = 0; i < n; i++){
        if (x[i] < menor){ menor = x[i]; pos = i; }
    }

    cout << "Menor valor: " << menor << "\nPosicao: " << pos << endl;
    return 0;
}
