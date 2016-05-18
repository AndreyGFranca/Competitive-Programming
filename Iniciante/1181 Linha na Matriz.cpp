#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num;
    float matrix[12][12], soma, med;
    char ch;
    cin >> num >> ch;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++){
            cin >> matrix[i][j];
        }
    }

    switch (ch){
        case 'S': {
            for (int i = 0; i < 12; i++){
                soma += matrix[num][i];
            }
            cout << fixed << setprecision(1) << soma << endl;
        }
        case 'M':{
            for (int i = 0; i < 12; i++){
                soma += matrix[num][i];
            }
            med = soma/12;
            cout << fixed << setprecision(1) << med << endl;
        }
    }
    return 0;
}
