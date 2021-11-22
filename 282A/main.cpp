#include <iostream>
#include <string>

int main()
{
    int n, x = 0;
    std::string input;

    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> input;
        if (input.find("++") != std::string::npos) ++x;
        else --x;
    }
    std::cout << x << '\n';
    return 0;
}

