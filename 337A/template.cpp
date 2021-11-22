#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> fs;
    for (int i =0 ;i<m;++i) {
        int f;
        cin >> f;
        fs.push_back(f);
    }
    sort(fs.begin(), fs.end());
    vector<int> mis;
    for (int i = n-1; i <m;++i) {
        mis.push_back(fs[i] - fs[i-n+1]);
    }
    int mi = *min_element(mis.begin(),  mis.end());
    cout << mi << endl;

    return 0;
}
