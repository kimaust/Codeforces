#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        A.push_back(a);
    }
    long long C[100001] = {0};
    for (auto a : A) {
        C[a]++;
    }
    long long DP[100001] = {0};
    DP[1] = C[1];
    for (int i = 2; i < 100001; ++i) {
        DP[i] = max(DP[i-1], DP[i-2] + C[i] * i);
    }
    cout << DP[100000] << endl;
    return 0;
}
