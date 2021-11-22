#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    bool alternate = false;
    for (int i = 1; i <= n; ++i) {
        for (int j =1; j <= m; ++j) {
            if (i % 2 == 1) {
                cout << '#';
            } else if (!alternate && j == m) {
                cout << '#';
            } else if (alternate && j == 1) {
                cout << '#';
            } else cout << '.';
        }
        cout << '\n';
        if (i % 2 == 0) alternate = !alternate;
    }
    return 0;
}
