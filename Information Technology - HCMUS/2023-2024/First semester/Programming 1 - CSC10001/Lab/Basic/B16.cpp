#include <iostream>


int main()
{
    int x, y;
    std::cin >> x >> y;
    int firstDigit = y % 10; // xyz --> z
    int secondDigit = (y / 10) % 10; // xyz --> xy.z -- > y.z --> init int y
    int thirdDigit = y / 100; // xyz --> x.yz --> init int x
    std::cout << "   " << x << '\n'
              << " x " << y << '\n'
              << "----------" << '\n'
              << "     " << firstDigit * x << '\n'
              << "    " << secondDigit * x << '\n'
              << "   " << thirdDigit * x << '\n'
              << "----------" << '\n'
              << "   " << x * y;
    return 0;
}