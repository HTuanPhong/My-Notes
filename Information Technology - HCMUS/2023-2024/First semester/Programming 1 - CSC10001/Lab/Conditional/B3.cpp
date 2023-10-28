#include <iostream>
#include <cmath>

int main()
{
    signed int n;
    std::cin >> n;
    if (fmod(sqrt(n), 1))
    {
        std::cout << "ko phai chinh phuong";
        return 0;
    }
    std::cout << "La so chinh phuong";
    return 0;
}