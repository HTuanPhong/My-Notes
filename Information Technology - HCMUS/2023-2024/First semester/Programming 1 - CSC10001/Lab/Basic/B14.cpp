#include <iostream>


int main()
{
    int Money;
    std::cin >> Money;
    int Money10 = Money / 10;
    int Money5 = (Money % 10) / 5;
    int Money2 = (Money % 10 % 5) / 2;
    int Money1 = Money % 10 % 5 % 2;
    std::cout << "so to 10,5,2,1 : " << Money10 << ", " << Money5 << ", " << Money2 << ", " << Money1;
    return 0;
}