#include <iostream>

int main()
{
    float max, min;
    float h;
    std::cout << "Nhap vao chieu cao: ";
    std::cin >> h;
    max, min = h;
    while (true)
    {
        float h;
        std::cout << "Nhap vao chieu cao: ";
        std::cin >> h;
        if (h <= 0)
            break;
        if (h > max)
            max = h;
        if (h < min)
            min = h;
    }
    std::cout << "Chieu cao cua hoc sinh dung dau danh sach: " << max << " (m)" << '\n';
    std::cout << "Chieu cao cua hoc sinh dung cuoi danh sach: " << min << " (m)";
    return 0;
}