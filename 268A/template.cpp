#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count = 0;
    int n;

    vector<int> hs;
    vector<int> as;

    cin >> n;
    for (int i = 0;i <n;++i) {
        int h, a;
        cin >> h >> a;
        hs.push_back(h);
        as.push_back(a);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) continue;
            if (hs[i] == as[j]) ++count;
        }
    }
    cout << count << endl;
    return 0;
}
