#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);

    int n = a.size();
    for (int i = 0; i < n; ++i) {
        cout << ((a[i] - '0') ^ (b[i] - '0'));
    }
    cout << endl;
    return 0;
}
