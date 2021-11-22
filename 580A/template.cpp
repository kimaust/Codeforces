#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int ma = 1;
    int count = 1;
    cin >> n;
    vector<int> ns;
    for (int i = 0; i < n; ++i) {
        int v;
        cin >> v;
        ns.push_back(v);
    }
    for (int i =1 ; i < n; ++i) {
        if (ns[i] < ns[i-1]) count = 1;
        else ++count;
        ma = max(ma, count);
    }
    cout << ma << endl;
    return 0;
}
