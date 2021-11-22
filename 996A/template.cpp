#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    count += n / 100;
    n -= (n / 100) * 100;
    count += n / 20;
    n -= n/20 * 20;
    count += n / 10;
    n -= n/10 * 10;
    count += n / 5;
    n -= n/5 * 5;
    count += n / 1;
    n -= n/1 * 1;

    cout << count << endl;
    return 0;
}
