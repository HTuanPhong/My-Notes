#include <iostream>

int main()
{
    double km;
    std::cin >> km;

    if (km < 1)
    {
        std::cout << km * 15;
    }
    else if (km < 5)
    {
        std::cout << 1 * 15 + (km - 1) * 13.5;
    }
    else
    {
        std::cout << (1 * 15 + 4 * 13.5 + (km - 5) * 11) * (km > 120 ? 0.1 : 1);
    }

    return 0;
}