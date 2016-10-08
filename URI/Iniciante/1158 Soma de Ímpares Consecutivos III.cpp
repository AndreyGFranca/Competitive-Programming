#include <iomanip>
#include <iostream>
using namespace std;

int main (){
    int x = 0, y = 0, soma = 0, n = 0;

    cin >> n;

    for (int i = 0; i < n; i++){
        soma = 0;
        cin >> x >> y;
        if (x % 2 == 0){
            x++;
            for (int i = 1; i <= y; i++){
                soma+=x;
                x+=2;
            }
            cout << soma << endl;
        }else{
            for (int i = 1; i <= y; i++){
                soma+=x;
                x+=2;
        }
        cout << soma << endl;
        }
    }

    return 0;
}
