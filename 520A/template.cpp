#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    bool alphabet[26] = {0};
    string s;
    cin >> s;
    for (auto c : s) {
        alphabet[tolower(c) - 'a'] = true;
    }
    bool res = all_of(begin(alphabet), end(alphabet), [](bool b){return b;});
    if (res) cout << "YES"; else cout << "NO";
    cout << endl;
    return 0;
}
