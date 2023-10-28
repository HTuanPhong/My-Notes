#include <iostream>

int main()
{
    int thang, nam;
    std::cout << "nhap thang, nam: ";
    std::cin >> thang >> nam;
    bool namNhuan = false;
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
    {
        std::cout << "nam nhuan" << '\n';
        namNhuan = true;
    }
    else
    {
        std::cout << "nam ko nhuan" << '\n';
        namNhuan = false;
    }

    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        std::cout << "thang 31 ngay";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        std::cout << "thang 30 ngay";
        break;
    case 2:
        std::cout << (namNhuan ? "thang 29 ngay" : "thang 28 ngay");
        break;
    default:
        std::cout << "nhap sai thang";
        break;
    }
    return 0;
}