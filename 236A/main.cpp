#include <iostream>
#include <vector>

int main()
{
    std::string name;
    std::cin >> name;

    int count = 0;
    std::vector<int> seen(26, 0);
    for (char c : name) {
        if (count >= 26) break;
        if (seen[c-'a'] == 0) {
            seen[c-'a'] = 1;
            ++count;
        }
    }
    std::cout << (count & 1 ? "IGNORE HIM!" : "CHAT WITH HER!");
    std::cout << std::endl;
    return 0;
}
