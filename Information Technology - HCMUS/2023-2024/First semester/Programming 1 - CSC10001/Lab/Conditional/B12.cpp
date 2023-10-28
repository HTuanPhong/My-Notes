#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    if (x > 9)
    {
        std::cout << (static_cast<char>(x + 55));
    }
    else
    {
        std::cout << x;
    }
    return 0;
}