#include <iostream>

int main()
{
    int a, b;
    char oper;
    std::cin >> a >> oper >> b;
    switch (oper)
    {
    case '+':
        std::cout << a + b;
        break;
    case '-':
        std::cout << a - b;
        break;
    case '*':
        std::cout << a * b;
        break;
    case '/':
        std::cout << a / b;
        break;
    case '%':
        std::cout << a % b;
        break;
    default:
        std::cout << "wawa you doin man";
        break;
    }
    return 0;
}