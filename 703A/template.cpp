#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int M = 0, C =0;
    for (int i = 0; i < n; ++i) {
        int m, c;
        cin >> m >> c;
        if (m == c) {++M; ++C;}
        else if (m < c) ++C;
        else ++M;
    }
    cout << ((M == C) ? "Friendship is magic!^^" : (M < C) ? "Chris" : "Mishka") << endl;
    return 0;
}
