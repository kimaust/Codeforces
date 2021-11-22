#include <iostream>
#include <cmath>

int main()
{
    int a, b;
    std::cin >> a >> b;

    int days = 0;
    while (a * std::pow(3, days) <= b * std::pow(2, days)) {
        ++days;
    }
    std::cout << days << std::endl;
    return 0;
}
