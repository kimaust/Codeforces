#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        vector<int> as;
        for (int j = 0; j < n; ++j) {
            int a;
            cin >> a;
            as.push_back(a);
        }
        sort(as.begin(), as.end());
        bool possible = true;
        for (int j = 1; j < as.size(); ++j) {
            if (abs(as[j] - as[j-1]) > 1) {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
