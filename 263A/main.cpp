#include <iostream>
#include <cmath>

int main()
{
    int found_index = 0;

    int value;
    for (int i = 0; i < 25; ++i) {
        std::cin >> value;
        if (value == 1) found_index = i;
    }
    std::cout << abs(2 - found_index / 5) + abs(2 - found_index % 5) << std::endl;
    return 0;
}
