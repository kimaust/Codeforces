#include <bits/stdc++.h>

using namespace std;

int main()
{
    int DP[1000001] = {0};
    DP[0] = 1;
    DP[1] = 1;

    int pos = 2;
    while (pos < 1000001) {
        DP[pos] = 2;
        for (int i = 2; i <= 1000001 / pos; ++i) {
            DP[pos * i] = 1;
        }

        bool found = false;
        for (int i = pos + 1; i < 1000001; ++i) {
            if (DP[i] == 0) {
                found = true;
                pos = i;
                break;
            }
        }
        if (!found) break;
    }

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        long long v;
        cin >> v;
        auto sr = sqrt(v);
        if (floor(sr) == sr) {
            long long f = static_cast<long long>(floor(sr));
            cout << (DP[f] == 2 ? "YES" : "NO") << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
