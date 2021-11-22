#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int day;
    for (day = 0; n > 0; ++day) {
        n -= 1;
        if ((day + 1)% m == 0) {
            n += 1;
        }
    }
    cout << day << endl;
    return 0;
}
