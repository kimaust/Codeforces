#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> c(n+1, 0);
    for (int i = 1; i <= n; ++i) {
        int pi;
        cin >> pi;
        c[pi] = i;
    }
    string sep = "";
    for (int i = 1; i <= n; ++i) {
        cout << sep << c[i];
        sep = " ";
    }
    cout << endl;
    return 0;
}
