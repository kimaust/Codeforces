#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0;i < t; ++i) {
        int n;
        cin >> n;
        
        if ((n / 2) % 2 == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            int e = 0;
            for (int j = 1; j <= n / 2; ++j) {
                cout << 2 * j << ' ';
                e += 2 * j;
            }
            int s = 0;
            for (int j = 1; j < n / 2; ++j) {
                cout << 2 * j - 1 << ' ';
                s += 2 * j - 1;
            }
            cout << e - s << endl;
        }
    }
    return 0;

}
