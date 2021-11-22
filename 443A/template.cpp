#include <bits/stdc++.h>

using namespace std;

int main()
{
    string line;
    set<char> s;
    getline(cin, line);
    for (auto c : line) {
        if (c == ' ') continue;
        if (c == ',') continue;
        if (c == '{') continue;
        if (c == '}') continue;

        s.insert(c);
    }
    cout << s.size() << endl;
    return 0;
}
