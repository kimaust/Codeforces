#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int amazing = 0;
    int p;
    cin >> p;
    int ma = p, mi = p;
    for (int i = 1; i < n; ++i) {
        cin >> p;
        if (p > ma) { ma = p; amazing++; }
        if (p < mi) { mi = p; amazing++; }
    }
    cout << amazing << endl;
    return 0;
}
