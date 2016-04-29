#include <iostream>

int main (void)
{
    int aux = 0;
    int T, N[1000];
    std::cin >> T;
    if(T >= 2 && T <= 50){
        for (int i = 0; i < 1000; i++){
            if(aux == T) { aux = 0; }
            N[i] = aux;
            std::cout << "N[" << i << "] = " << N[i] << std::endl;
            aux++;
        }
    }

    return 0;
}
