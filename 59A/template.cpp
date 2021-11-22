#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    
    auto l = count_if(s.begin(), s.end(), [](auto c){return islower(c);});
    auto u = count_if(s.begin(), s.end(), [](auto c){return isupper(c);});
    if (l < u) {
        transform(s.begin(), s.end(), s.begin(), [](auto c){return toupper(c);});
    } else {
        transform(s.begin(), s.end(), s.begin(), [](auto c){return tolower(c);});
    }
    cout << s << endl;
    return 0;
}
