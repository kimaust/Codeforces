#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
 
    int count = 0;
    int c[100001] = {0};
    for (int i = 1; i <= d; ++i) {
        if (i % k == 0) c[i] = 1;
        if (i % l == 0) c[i] = 1;
        if (i % m == 0) c[i] = 1;
        if (i % n == 0) c[i] = 1;
    }
    for (int i = 1; i <= d; ++i) {
        if (c[i] == 1) ++count;
    }
    cout << count << endl;
 
    return 0;
}
