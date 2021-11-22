#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int maximum = 0;
    for (int i = 0; i <= n / a; ++i) {
        for (int j = 0; j <= (n - a * i) / b; ++j) {
            int v = a * i + b * j;
            int rem = n - v;
            if (rem % c == 0 && i + j + (rem / c) > maximum) maximum = i + j + rem / c;
        }
    }
    cout << maximum << endl;
    
    return 0;
}
