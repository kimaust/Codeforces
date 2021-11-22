#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> as;
    for (int i =0; i< n; ++i) {
        int v;
        cin >> v;
        as.push_back(v);
    }
    sort(as.begin(), as.end());
    for (auto e : as) {
        cout << e << ' ';
    }
    cout << endl;
    return 0;
}
