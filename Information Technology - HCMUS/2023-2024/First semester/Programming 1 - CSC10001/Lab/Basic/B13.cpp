#include <iostream>
#include <cmath>

int main()
{
    double tonnesOfRice;
    std::cin >> tonnesOfRice;
    std::cout << ceil(tonnesOfRice * 1000 / 20);
    return 0;
}