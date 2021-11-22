#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A;
    for (int i=0;i<n;++i) {
        int a;
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(), A.end());
    int s = 0;
    int largest = A[A.size()-1];
    for (int i = 0; i < n-1; ++i) {
        s += largest - A[i];
    }
    cout << s << endl;
    return 0;
}
