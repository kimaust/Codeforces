#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> ss;
    for (int i =0; i <n; ++i) {
        int x, y;
        cin >> x >> y;
        ss.push_back(make_pair(x, y));
    }
    sort(ss.begin(), ss.end());
    
    for (int i = 0; i< n; ++i) {
        if (s > ss[i].first) {
            s += ss[i].second;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    
    return 0;
}
