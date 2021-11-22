#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;

    int steps = 0;
    if (x <= 5) {
        steps = 1;
    } else {
        steps = x / 5;
        if (x % 5 != 0)
            steps += 1;
    }
    cout << steps << endl;
    return 0;
}
