#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> bodyForce(3, 0);
    for (int i = 0; i < n; ++i) {
        int x, y, z;
        std::cin >> x >> y >> z;
        bodyForce[0] += x;
        bodyForce[1] += y;
        bodyForce[2] += z;
    }
    bool equilbrium = std::all_of(
            bodyForce.begin(), bodyForce.end(), [](int e){return e == 0;});
    if (equilbrium) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    std::cout << std::endl;
    return 0;
}
