#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    string b;
    string c;
    cin >> a;
    cin >> b;
    cin >> c;

    int count[26] = {0};
    int pile_count[26] = {0};
    for (auto ch : a) {
        count[tolower(ch) - 'a'] += 1;
    }
    for (auto ch : b) {
        count[tolower(ch) - 'a'] += 1;
    }
    for (auto ch : c) {
        pile_count[tolower(ch) - 'a'] += 1;
    }

    for (int i = 0; i< 26; ++i) {
        if (count[i] == pile_count[i]) continue;
        else {  cout << "NO" << endl; return 0; }
    }
    cout << "YES" << endl;
    return 0;
}
