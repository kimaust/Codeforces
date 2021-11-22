#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    if (a < b / 1.0 / m) {
        cout << a * n << endl;
    } else {
        int c = (n / m) * b;
        int r = min(b, (n % m) * a) + c;
        cout << r << endl;
    }
    return 0;
}
