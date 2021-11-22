#include <iostream>
#include <algorithm>

inline void to_lower_string(std::string& s)
{
    std::transform(s.begin(), s.end(), s.begin(), [](int c){
        return std::tolower(c);
    });
}

int main()
{
    std::string first, second;

    std::cin >> first >> second;
    to_lower_string(first);
    to_lower_string(second);
    std::cout << (first < second ? -1 : first == second ? 0 : 1) << std::endl;
    return 0;
}
