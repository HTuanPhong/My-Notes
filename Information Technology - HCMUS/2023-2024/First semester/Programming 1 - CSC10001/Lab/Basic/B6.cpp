#include <iostream>

int main()
{
    double radiusInput;
    std::cin >> radiusInput;
    std::cout << 3.14 * radiusInput * radiusInput << '\n'
              << 2 * 3.14 * radiusInput;
    return 0;
}