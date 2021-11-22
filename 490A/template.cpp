#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int S[4] = {0};
    vector<vector<int>> T(4);
    for (int i = 0 ;i < n; ++i) {
        int s;
        cin >> s;
        S[s] += 1;
        T[s].push_back(i + 1);
    }
    int w = min(min(S[1], S[2]), S[3]);
    cout << w << endl;

    if (w != 0) {
        int count = 0;
        while (count < w) {
            cout << T[1][count] << ' ' << T[2][count] << ' ' << T[3][count] << endl;
            ++count;
        }
    }
    return 0;
}
