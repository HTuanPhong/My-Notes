#include <iostream>

int main()
{
    double soCu, soMoi, soDienPhaiTra;
    std::cin >> soCu >> soMoi;
    soDienPhaiTra = soMoi - soCu;
    if (soDienPhaiTra <= 100)
    {
        std::cout << soDienPhaiTra * 1000;
    }
    else if (soDienPhaiTra <= 150)
    {
        std::cout << 100000 + (soDienPhaiTra - 100) * 1200;
    }
    else if (soDienPhaiTra <= 200)
    {
        std::cout << 160000 + (soDienPhaiTra - 150) * 2000;
    }
    else
    {
        std::cout << 260000 + (soDienPhaiTra - 200) * 2500;
    }
}