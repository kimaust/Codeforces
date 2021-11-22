#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int volume = 0;
    cin >> n;
     for (int i =0;i<n;++i) {int v; cin >> v; volume  += v;}
    cout << static_cast<double>(volume) /n <<endl;
    return 0;
}
