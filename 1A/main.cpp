#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

typedef unsigned long long ull;

int main()
{
    ull n, m, a;
    ull flagstones;
    cin >> n >> m >> a;
    flagstones = (ull)ceil((double)n / a) * (ull)ceil((double)m / a);
    cout << flagstones << endl;
    return 0;
}
