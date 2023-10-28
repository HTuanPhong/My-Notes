#include <iostream>

int main()
{
    int inputNumber;
    std::cin >> inputNumber;
    switch (inputNumber)
    {
    case 1:
        std::cout << "mot";
        break;
    case 2:
        std::cout << "hai";
        break;
    case 3:
        std::cout << "ba";
        break;
    case 4:
        std::cout << "bon";
        break;
    case 5:
        std::cout << "nam";
        break;
    case 6:
        std::cout << "sau";
        break;
    case 7:
        std::cout << "bay";
        break;
    case 8:
        std::cout << "tam";
        break;
    case 9:
        std::cout << "chin";
        break;
    default:
        std::cout << "nhap sai so";
        break;
    }
    return 0;
}