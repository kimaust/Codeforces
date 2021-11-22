#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i =0 ;i < t ; ++i) {
        int n, k;
        cin >> n >> k;
        
        vector<int> A;
        for (int i =0;i <n; ++i) {
            int a;
            cin >> a;
            A.push_back(a);
        }
        vector<int> B;
        for (int i =0;i <n; ++i) {
            int b;
            cin >> b;
            B.push_back(b);
        }
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        for (int i = 0; i < n && k > 0; ++i) {
            if (A[i] < B[n-i-1]) {
                A[i] = B[n-i-1];
                --k;
            }
        }
        int s = accumulate(A.begin(),  A.end(), 0);
        cout << s << endl;
    }
    return 0;
}
