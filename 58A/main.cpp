#include <iostream>

int main()
{
    std::string text;
    std::cin >> text;

    int position = 0;
    std::string hello = "hello";
    for (char c : text) {
        if (position >= 5) break;
        if (c == hello[position]) ++position;
    }
    std::cout << (position >= 5 ? "YES" : "NO") << std::endl;
    return 0;
}
