#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i =0;i<t;++i) {
        string  s;
        cin >> s;

        int count = count_if(s.begin() + 1, s.end(), [](char c){return c != '0';});
        cout << count + 1 << endl;
        int multiplier = static_cast<int>(pow(10, s.size()-1));
        for (auto c : s) {
            if (c != '0') {
                cout << (c - '0') * multiplier << ' ';
            }
            multiplier /= 10;
        }
        cout << endl;
    }
    return 0;
}
