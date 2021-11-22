#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    long long x, y, n;
    cin >> t;
    for (int i = 0; i < t ; ++i) {
        cin >> x >> y >> n;
        int m = n / x;
        if (m * x + y > n) cout << (m - 1) *  x + y << endl;
        else cout << m * x + y << endl;
    }
    return 0;
}
