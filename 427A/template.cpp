#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int police = 0;
    int untreated = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a == -1) {
            if (police == 0) ++untreated;
            else --police;
        } else police += a;
    }
    cout << untreated << endl;
    return 0;
}
