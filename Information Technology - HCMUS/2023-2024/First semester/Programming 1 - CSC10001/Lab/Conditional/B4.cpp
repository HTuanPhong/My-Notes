#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    if (n % 2)
    {
        std::cout << "so le";
        return 0;
    }

    std::cout << "so chan";
    return 0;
}