#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i< t; ++i ) {
        int n;
        cin >> n;
        int steps = 0;
        int even = 0, odd = 0;
        for (int j = 0; j< n; ++j) {
            int a;
            cin >> a;
            if (a%2 != j%2) {
                if (j%2 == 1) ++odd;
                else ++even;

                if (odd > 0 && even > 0) {++steps; --odd; --even;}
            }
        }
        if (even == 0 && odd == 0) {
            cout << steps << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
