#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n, l;
    cin >> n >> l;
    vector<long> ls;
    for (int i = 0; i < n; ++i) {
        long la;
        cin >> la;
        ls.push_back(la);
    }
    sort(ls.begin(), ls.end());
    long double ma = -1;
    for (int i = 0; i < n-1; ++i) {
        if (ls[i+1] - ls[i] > ma) {ma = ls[i+1]-ls[i];}
    }

    ma = max(ls[0] / 1.0L, ma / 2.0L);
    ma = max((l - ls[ls.size() -1]) / 1.0L, ma);

    printf("%.9Lf\n", ma);
    return 0;
}
