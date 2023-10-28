#include <iostream>

int main()
{
    double M1, M2, d;
    std::cin >> M1 >> M2 >> d;
    std::cout << 6.67E-11 * (M1 * M2 / (d * d));
    return 0;
}