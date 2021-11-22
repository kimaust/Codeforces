#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long n;
    cin >> n;

    int count = 0;
    while (n) {
        if (n % 10 == 4 || n % 10 == 7) ++count;
        n /= 10;
    }
    cout << (count == 4 || count == 7 || count == 47 ? "YES" : "NO") << endl;
    return 0;
}
