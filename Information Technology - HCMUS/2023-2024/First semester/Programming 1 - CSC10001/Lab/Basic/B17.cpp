#include <iostream>

int main()
{
    double weight, height;
    std::cin >> weight >> height;
    std::cout << weight / ( height * height ) << " kg/m^2";
    return 0;
}