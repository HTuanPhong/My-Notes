#include <iostream>

int main()
{
    double x;
    std::cin >> x;
    if (5 < x && x <= 10)
    {
        std::cout << "0.7 tr";
    }
    else if (10 < x && x <= 20)
    {
        std::cout << "2.5 tr";
    }
    else if (20 < x && x <= 35)
    {
        std::cout << "5.5 tr";
    }
    else if (x > 35)
    {
        std::cout << "7.5 tr";
    }
    else
    {
        std::cout << "ko phat";
    }
    return 0;
}