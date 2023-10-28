#include <iostream>

int main()
{
    int gio, phut, giay;
    std::cin >> gio >> phut >> giay;
    if (gio > 60 || gio < 0)
    {
        std::cout << "sai gio";
        return 1;
    }
    if (phut > 60 || phut < 0)
    {
        std::cout << "sai phut";
        return 1;
    }
    if (giay > 24 || giay < 0)
    {
        std::cout << "sai giay";
        return 1;
    }
    std::cout << "good job";
    return 0;
}