#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    bool print = false;
    for (auto c : s) {
        if (c == 'H' || c == 'Q' || c == '9') {
            print = true;
            break;
        }
    }
    cout << (print ? "YES" : "NO") << endl;
    return 0;
}
