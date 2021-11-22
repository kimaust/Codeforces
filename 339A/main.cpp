#include <iostream>
#include <algorithm>

int main()
{
    std::string sum;
    
    std::cin >> sum;

    sum.erase(std::remove_if(sum.begin(), sum.end(), [](auto c){
        return c == '+';
    }), sum.end());
    std::sort(sum.begin(), sum.end());

    std::cout << sum[0];
    std::for_each(sum.begin()+1, sum.end(), [](auto c){
        std::cout << '+' << c;
    });
    std::cout << std::endl;

    return 0;
}
