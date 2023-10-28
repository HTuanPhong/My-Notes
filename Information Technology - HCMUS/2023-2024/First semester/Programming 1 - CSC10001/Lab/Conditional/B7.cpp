#include <iostream>
#include <algorithm>

int main()
{
    double a, b, c, max, min, mid;
    std::cin >> a >> b >> c;
    max = std::max(std::max(a, b), c);
    min = std::min(std::min(a, b), c);
    std::cout << min << ' ' << (a + b + c - max - min) << ' ' << max;
    return 0;
}