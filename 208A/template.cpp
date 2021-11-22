#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<string> ss;
    size_t pos;
    while ((pos = s.find("WUB")) != string::npos) {
        string token = s.substr(0, pos);
        if (token != "") ss.push_back(token);
        s.erase(0, pos+3);
    }
    if (s != "") ss.push_back(s);
    for (int i =0 ;i < static_cast<int>(ss.size())-1;++i) {
        cout << ss[i] << ' ';
    }
    cout << ss[ss.size()-1] << endl;
    return 0;
}
