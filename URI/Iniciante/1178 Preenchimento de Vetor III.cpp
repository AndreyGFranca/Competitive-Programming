#include <iostream>
#include <iomanip>

int main (void)
{
    double X = 0, N[100];

    std::cin >>std::fixed >> std::setprecision(4) >>  X;
    N[0] = X;
    std::cout << std::fixed << std::setprecision(4) <<  "N[0] = " << N[0] << std::endl;
    for (int i = 1; i < 100; i++)
    {
        X /=2;
        N[i] = X;
        std::cout << std::fixed << std::setprecision(4)
                  << "N[" << i << "] = " << N[i] << std::endl;
    }
    return 0;
}
