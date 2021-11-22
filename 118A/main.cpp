#include <iostream>
#include <algorithm>
#include <cctype>
#include <set>

int main()
{
    std::set<char> vowels{'A', 'O', 'Y', 'E', 'U', 'I'};
    std::string input;
    std::cin >> input;
    input.erase(std::remove_if(input.begin(), input.end(), [&](int c){
        return vowels.find(std::toupper(c)) != vowels.end();
    }), input.end());

    std::string replacement;
    std::for_each(input.begin(), input.end(), 
        [&](int c){replacement += '.'; replacement += std::tolower(c);});
    std::cout << replacement << '\n';
    
    return 0;
}
