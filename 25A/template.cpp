#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> vs;
    for (int i = 0; i < n; ++i) {
        int v;
        cin >> v;
        vs.push_back(v);
    }
    int parity[2] = {0};
    for (int i = 0; i < n; ++i) {
        ++parity[vs[i] % 2];
    
    }
    int index = -1;
    for (int i = 0; i < n; ++i) {
        if (parity[vs[i] % 2] == 1) {
            index = i + 1;
        }
    }
    cout << index << endl;
    return 0;
}
