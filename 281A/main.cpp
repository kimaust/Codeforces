#include <iostream>
#include <cctype>

int main()
{
    std::string word;
    std::cin >> word;
    word[0] = std::toupper(word[0]);
    std::cout << word << std::endl;
    return 0;
}
