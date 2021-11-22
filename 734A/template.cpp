#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ac = 0, dc = 0;
    for (auto c : s) {
        if (c == 'A') ++ac;
        else ++dc;
    }
    if (ac > dc) {
        cout << "Anton";
    } else if (ac == dc) {
        cout << "Friendship";
    } else {
        cout << "Danik";
    }
    cout << endl;
    return 0;
}
