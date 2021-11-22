#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> hs;
    for  (int i =0;i<n;++i) {
        int h;
        cin >>h;
        hs.push_back(h);
    }
    int last_min = 0, first_max = 0;
    for (int i = 0; i < n; ++i) {
        int v = hs[i];
        if (v <= hs[last_min]) last_min = i;
        if (v > hs[first_max]) first_max = i;
    }

    int time = n - 1 - last_min + first_max - 1;
    time += last_min > first_max ? 1 : 0;
    cout << time << endl;   
    return 0;
}
