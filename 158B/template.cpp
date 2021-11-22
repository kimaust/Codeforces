#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int count[4] = {0};
    for (int i = 0; i < n; ++i) {
        int children;
        cin >> children;
        ++count[children-1];
    }
    int taxi = count[3] + count[2];
    count[0] -= count[2];
    taxi += count[1] / 2;
    if (count[1] % 2 == 1) {
        ++taxi;
        count[0] -= 2;
    }
    taxi += max(0, count[0] / 4);
    if (count[0] > 0 && count[0] % 4 != 0) {
        ++taxi;
    }
    cout << taxi << endl;
    return 0;
}
