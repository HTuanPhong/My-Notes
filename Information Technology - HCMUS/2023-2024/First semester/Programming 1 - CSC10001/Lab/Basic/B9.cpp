#include <iostream>

int main()
{
    double priceInput;
    std::cin >> priceInput;
    std::cout << priceInput + 0.1 * priceInput;
    return 0;
}