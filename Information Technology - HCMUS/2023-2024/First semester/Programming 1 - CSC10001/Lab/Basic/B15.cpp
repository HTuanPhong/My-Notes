#include <iostream>

int main()
{
    int bottles, moneyPerBottle, usersMoney;
    std::cin >> bottles >> moneyPerBottle >> usersMoney;
    int moneyLeft = usersMoney - (bottles * moneyPerBottle);
    int tens = moneyLeft / 10;
    int fives = (moneyLeft % 10) / 5;
    int twos = (moneyLeft % 10 % 5) / 2;
    int ones = moneyLeft % 10 % 5 % 2;
    std::cout << "so to 10,5,2,1 thua: " << tens << ", " << fives << ", " << twos << ", " << ones;
    return 0;
}