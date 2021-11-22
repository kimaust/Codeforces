#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> C;
    for (int i = 0;  i < n; ++i) {
        string s;
        cin >> s;
        if (C[s] == 0) cout << "OK" << endl;
        else cout << s << C[s] << endl;
        ++C[s];     
    }
    return 0;
}
