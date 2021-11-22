#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> s;
    for (int i = 0; i < n; ++i) {
        int v;
        cin >> v;
        s.push_back(v);
    }
    cout << count_if(s.begin(), s.end(), 
        [&](int e){return e >= s[k-1] && e > 0;}) << '\n';

    return 0;
}
