#include <iostream>

int main()
{
    int n;
    double sum = 1;
    std::cin >> n;
    for (int i = 2; i <= n; i++)
    {
        sum += n * 1.0 / (n - 1);
    }
    std::cout << sum;
}