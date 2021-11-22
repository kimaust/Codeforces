#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> coins;
    for (int i = 0; i < n; ++i) {
        int coin;
        cin >> coin;
        coins.push_back(coin);
    }
    int sum = accumulate(coins.begin(), coins.end(), 0);
    sort(coins.begin(), coins.end(), greater<int>());

    int amount = 0;
    int count = 0;
    for (auto c : coins) {
        amount += c;
        sum -= c;
        ++count;
        if (amount > sum) break;
    }
    cout << count << endl;
    return 0;
}
