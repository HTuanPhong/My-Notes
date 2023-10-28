#include <iostream>
#include <cmath>

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;
    std::cout << (-b - sqrt(b * b - 4 * a * c)) / (2 * a) << '\n';
    std::cout << (-b + sqrt(b * b - 4 * a * c)) / (2 * a) << '\n';
}