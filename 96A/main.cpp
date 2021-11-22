#include <iostream>

int main()
{
    std::string bits;
    std::cin >> bits;
    if (bits.size() < 7) {
        std::cout << "NO" << std::endl;
    } else {
        int count = 1;
        auto start = bits[0];
        for (std::string::size_type i = 1; i < bits.size(); ++i) {
            if (bits[i] == start) {
                ++count;
                if (count == 7) break;
            } else {
                count = 1;
                start = bits[i];
            }
        }
        std::cout << (count == 7 ? "YES" : "NO") << std::endl;
    }
    return 0;
}
