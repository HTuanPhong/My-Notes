#include <iostream>

int main()
{
    char loaiTK;
    int soDuTT, soDuCT;
    std::cin >> loaiTK >> soDuTT >> soDuCT;
    if (loaiTK == 't')
    {
        if (soDuCT < soDuTT)
        {
            std::cout << "phat 10$";
        }
        else
        {
            std::cout << "lai " << soDuCT * 0.04 << "$";
        }
    }
    else if (loaiTK == 'v')
    {
        if (soDuCT < soDuTT)
        {
            std::cout << "phat 25$";
        }
        else
        {
            std::cout << "lai " << soDuCT * (((soDuCT - soDuTT) >= 5000) ? 0.03 : 0.05) << "$";
        }
    }
    return 0;
}