#include <iostream>

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;

    if ((a <= 0) || (b <= 0) || (c <= 0) || (a + b <= c) || (a + c <= b) || (b + c <= a))
    {
        std::cout << "ko phai tam giac";
        return 0;
    }

    std::cout << "tam giac ";

    if (a == b && b == c)
    {
        std::cout << "deu";
        return 0;
    }

    if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
    {
        std::cout << "vuong ";
    }

    if (a == b || b == c || c == a)
    {
        std::cout << "can";
        return 0;
    }

    return 0;
}