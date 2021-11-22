#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    vector<int> A = {x, y, z};
    sort(A.begin(), A.end());
    cout << A[1] - A[0] + A[2] - A[1] << endl;
    return 0;
}
