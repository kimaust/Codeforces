#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int count = 0;
    int time = (240 - k);
    for (int i = 1; i <= n; ++i) {
        if (time >= 5 * i) {
            ++count;
            time -= 5 * i;
        }
    }
    cout << count << endl;
    
    return 0;
}
