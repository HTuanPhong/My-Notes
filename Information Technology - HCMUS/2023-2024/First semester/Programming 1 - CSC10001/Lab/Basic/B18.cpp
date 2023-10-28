#include <iostream>

int main()
{
    int n, totalTime = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        std::cin >> t;
        totalTime += t;
    }
    std::cout << "tong thoi gian: " << totalTime;
    return 0;
}