#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        long long n;
        cin >> n;
        for (int k = 2; k <= 30; ++k) {
            long long x = n / (pow(2, k) - 1);
            if ((pow(2, k) - 1) * x == n) {
                cout << x << endl;
                break;
            }
        }
    }
    return 0;
}
