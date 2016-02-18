#include <iostream>

int main ()
{
    int n, soma = 0;

    while (n != 0)
    {
        soma = 0;
        std::cin >> n;
        if(n == 0)return 0;

        if (n % 2 == 0)
        {
            for (int i = 1; i <= 5; i++)
            {
                soma +=n;
                n+=2;
            }
            std::cout << soma << std::endl;
        }
        else
        {
            n++;
            for (int i = 1; i <= 5; i++)
            {
                soma +=n;
                n+=2;
            }
            std::cout << soma << std::endl;
        }

    }

    return 0;
}
