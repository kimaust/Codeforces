#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0;i < t; ++i) {
        long long a, b;
        cin >> a >> b;
        cout << abs(a - b) / 10 + (abs(a - b) % 10 > 0 ? 1 : 0) << endl;
    }
    return 0;
}
