#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (s.size() > 10) {
            cout << s.front() << s.size() - 2 << s.back() << '\n';
        } else {
            cout << s << '\n';
        }
    }
    return 0;
}
