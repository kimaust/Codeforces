#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> A;
    for (int i =0 ; i <n; ++i) {
        int a;
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(), A.end());
    int teams = 0;
    for (int i = 0; i < n-2; i += 3) {
        if (A[i] <= 5 - k && A[i+1] <= 5 -k && A[i+2] <= 5 -k) {
            ++teams;
        }
    }
    cout << teams << endl;
    return 0;
}
