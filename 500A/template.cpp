#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    vector<int> A;
    for (int i = 0; i < n-1; ++i) {
        int a;
        cin >> a;
        A.push_back(a);
    }
    bool possible = false;
    int current = 1;
    do {
        current = current + A[current-1];
        if (current == t) possible = true;
    } while (current <= (n - 1) && current != 1 && !possible);

    cout << (possible ? "YES" : "NO") << endl;
    return 0;
}
