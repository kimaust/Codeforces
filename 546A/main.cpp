#include <iostream>

int main()
{
    int k, n, w;
    std::cin >> k >> n >> w;

    int total = w*(w+1)/2*k;
    std::cout << std::max(0, total - n) << std::endl;
    return 0;
}
