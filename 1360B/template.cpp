#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i =0;i<t;++i) {
        int n;
        cin >> n;

        vector<int> S;
        for (int j = 0;j <n;++j) {
            int s;
            cin >> s;
            S.push_back(s);
        }
        sort(S.begin(), S.end());
        int best = S[n-1] - S[0];
        for (int j = 0; j< n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                best = min(best, S[k] - S[j]);
            }
        }
        cout << best << endl;
    }
    return 0;
}
