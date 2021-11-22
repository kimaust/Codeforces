#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;

    vector<int> hs;
    for (int i = 0; i < n; ++i) { 
        int hv;
        cin >> hv;
        hs.push_back(hv);
    }
    int count = 0;
    for (auto v : hs) {
        if (v > h) ++count;
        ++count;
    }
    cout << count << endl;
    return 0;
}
