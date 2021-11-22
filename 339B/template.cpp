#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n  >> m;

    vector<int> as;
    for (int i = 0; i < m; ++i) {
        int a;
        cin >> a;
        as.push_back(a);
    }
    long long cur = 1;
    long long time = 0;
    for (int i = 0; i < m; ++i) {
        long long dis = (as[i] - cur);
        if (dis < 0) dis += n;
        time += dis;
        cur = as[i];
    }
    cout << time << endl;
    return 0;
}
