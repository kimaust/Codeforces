#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i =0 ; i < t; ++i ){
    
        int a, b;
        cin >> a >> b;
        if (min(a, b) * 2 > max(a, b)) cout << min(a, b) * 2 * min(a, b) * 2<< endl;
        else cout << max(a, b) * max(a, b) << endl;
    }
    return 0;
}
