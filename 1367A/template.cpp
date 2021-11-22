#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); j += 2) {
            cout << s[j];
        }
        if (s.size() % 2 == 0) {
            cout << s[s.size()-1];
        }
        cout << endl;
    }
    return 0;
}
