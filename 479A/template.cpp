#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b,c;
    cin >> a >> b>>c;

    int ma = max(a+b*c, a*b+c);
    ma = max(ma, a+b+c);
    ma = max(ma, a*b*c);
    ma = max(ma, (a+b)*c);
    ma = max(ma, a*(b+c));
    cout << ma << endl;
    return 0;
}
