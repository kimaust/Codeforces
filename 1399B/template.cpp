#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; ++j) {
    int n;
    cin >> n;

    vector<long long> A;
    vector<long long> B;
    for (int i = 0; i < n; ++i) {
        long long a;
        cin >> a;
        A.push_back(a);
    }
    for (int i = 0;i < n ; ++i) {
        int b;
        cin >> b;
        B.push_back(b);
    }
    long long minA = *min_element(A.begin(), A.end());
    long long minB = *min_element(B.begin(), B.end());

    long long count = 0;
    for (int i = 0; i < n; ++i) {
        long long opA = A[i] - minA;
        long long opB = B[i] - minB;

        count += min(opA, opB);
        count += max(opA, opB) - min(opA, opB);
    }
    cout << count << endl;
    }

    return 0;
}
