#include <iostream>

int main()
{
    int n;
    int count = 0;

    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int v1, v2, v3;
        std::cin >> v1;
        std::cin >> v2;
        std::cin >> v3;
        if (v1 + v2 + v3 >= 2) ++count;
    }
    std::cout << count << '\n';
    return 0;
}
