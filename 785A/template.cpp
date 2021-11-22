#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int total = 0;
    string s;
    cin >> n;
    for (int i =0 ;i<n;++i) {
        cin >> s;
        if (s == "Icosahedron") total += 20;
        if (s == "Dodecahedron") total += 12;
        if (s == "Octahedron") total += 8;
        if (s == "Cube") total += 6;
        if (s == "Tetrahedron") total += 4;
    }
    cout << total << endl;
    return 0;
}
