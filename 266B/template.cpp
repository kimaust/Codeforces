#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;
    vector<char> arr;
    copy(s.begin(), s.end(), back_inserter(arr));
    for (int i = 0; i < t; ++i) {
        for (int j = 0; j < static_cast<int>(arr.size()) - 1; ++j) {
            if (arr[j] == 'B' && arr[j+1] == 'G') {
                swap(arr[j], arr[j+1]);
                ++j;
            }
        }
    }
    string a(arr.begin(), arr.end());
    cout << a << endl;
    return 0;
}
