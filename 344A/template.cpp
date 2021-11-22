#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int groups = 0;
    int previous = -1;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        int v;
        cin >> v;
        if (v != previous) ++groups;
        previous = v;
    }
    cout << groups << endl;

    return 0;
}
