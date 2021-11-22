#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;

    int shovel = 1;
    int i = 1;
    bool found = false;
    while (!found) {
        if ((k * i) % 10 == r || (k * i) % 10 == 0) { found = true; shovel = i; }
        ++i;
    }
    cout << shovel << endl;
    return 0;
}
