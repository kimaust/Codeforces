#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    if (all_of(s.begin(), s.end(), [](auto c){return isupper(c);}) || 
        islower(s[0]) && all_of(s.begin() + 1, s.end(), [](auto c){return isupper(c);})) {
        if (islower(s[0])) {
            cout << static_cast<char>(toupper(s[0]));
            transform(s.begin(), s.end(), s.begin(), [](auto c){return tolower(c);});
            cout << s.substr(1) << endl;
        } else {
            transform(s.begin(), s.end(), s.begin(), [](auto c){return tolower(c);});
            cout << s << endl;
        }
    } else cout << s << endl;

    return 0;
}
