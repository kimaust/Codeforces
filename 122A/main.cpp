#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int value = n;
    bool almost_lucky = true;
    while (value > 0) {
        int last_digit = value % 10;
        if (last_digit != 4 && last_digit != 7) { almost_lucky = false; break; }
        value /= 10;
    }
    if (!almost_lucky && 
        (n % 4 == 0 || n % 7 == 0 || 
         n % 44 == 0 || n % 47 == 0 || 
         n % 74 == 0 || n % 77 == 0 || 
         n % 444 == 0 || n % 447 == 0 ||
         n % 474 == 0 || n % 477 == 0 || 
         n % 744 == 0 || n % 747 == 0 || 
         n % 774 == 0 || n % 777 == 0)) almost_lucky = true;

    std::cout << (almost_lucky ? "YES" : "NO") << std::endl;
    return 0;
}
