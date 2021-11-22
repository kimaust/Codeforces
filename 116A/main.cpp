#include <iostream>

int main() 
{
    int n;
    std::cin >> n;

    int current = 0;
    int capacity = 0;
    for (int i = 0; i < n; ++i) {
        int exit, enter;
        std::cin >> exit >> enter;
        current -= exit;
        current += enter;
        capacity = std::max(capacity, current);
    }
    std::cout << capacity << std::endl;
    return 0;
}
