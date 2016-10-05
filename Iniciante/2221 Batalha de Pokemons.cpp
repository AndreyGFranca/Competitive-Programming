#include <iostream>

int main ()
{

    int T = 0, B = 0, Ai = 0, Di = 0, Li = 0;
    int valor1 = 0, valor2 = 0;
    std::cin >> T;

    while (T-- > 0)
    {
        std::cin >> B >> Ai >> Di >> Li;
        Li % 2 == 0 ? valor1 = (Ai + Di) / 2 + B : valor1 = (Ai + Di) / 2;
        std::cin >> Ai >> Di >> Li;
        Li % 2 == 0 ? valor2 = (Ai + Di) / 2 + B : valor2 = (Ai + Di) / 2;
        if (valor1 == valor2) std::cout << "Empate" << std::endl;
        else if (valor1 > valor2) std::cout << "Dabriel" << std::endl;
        else if (valor2 > valor1) std::cout << "Guarte" << std::endl;
    }

    return 0;
}
