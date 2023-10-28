#include <iostream>

int main()
{
    double Toan, Ly, Hoa;

    std::cin >> Toan >> Ly >> Hoa;

    // xep loai
    if (Toan + Ly + Hoa < 15 || Toan < 4 || Ly < 4 || Hoa < 4)
    {
        std::cout << "thi hong" << '\n';
        return 0;
    }

    std::cout << "dau" << '\n';

    // nhan xet
    if (Toan <= 5 || Ly <= 5 || Hoa <= 5)
    {
        std::cout << "hoc chua deu cac mon";
        return 0;
    }

    std::cout << "hoc deu cac mon";
    return 0;
}