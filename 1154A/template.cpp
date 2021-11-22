#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<int> A = {a, b, c, d};
    sort(A.begin(), A.end());

    int s = A[A.size()-1];
    for (int i = 0; i < 3; ++i) {
        cout << s - A[i] << ' ';
    }
    cout << endl;
    return 0;
}
