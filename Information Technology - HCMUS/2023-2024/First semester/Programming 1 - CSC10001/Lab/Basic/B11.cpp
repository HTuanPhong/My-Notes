#include <iostream>

int main()
{
    int secondsInput;
    std::cin >> secondsInput;
    int hours = secondsInput / 3600;
    int minutes = (secondsInput % 3600) / 60;
    int seconds = (secondsInput % 3600 % 60) / 1;
    std::cout << hours << ":" << minutes << ":" << seconds;
    return 0;
}