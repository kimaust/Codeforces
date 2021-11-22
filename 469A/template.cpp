#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<bool> passes(n+1, 0);
    passes[0] = true;

    int p, q;
    int v;
    cin >> p;
    for (int i = 0; i < p; ++i) {
        cin >> v;
        passes[v] = true;
    }
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> v;
        passes[v] = true;
    }
    if (all_of(passes.begin(), passes.end(), [](bool b) {return b;})) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
    cout <<endl;
    return 0;
}
