#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, s;
    cin >> m >> s;

    vector<int> D;
    int min = 1;
    if (s > 9 * m) {
        cout << -1 << ' ' << -1 << endl;
    } else if (m == 1 && s == 0) {
        cout << 0 << ' ' << 0 << endl;
    } else {
        int M = m, S = s;
        do {
            if (s - min < 0) break;

            while (ceil((s - min) / 9.0) >= m) {
                ++min;
            }
            D.push_back(min);
            s -= min;
            m -= 1;

            min = 0;
        } while (m > 0);
        if (D.empty()) {
            cout << -1 << ' ' << -1 << endl;
        } else {
            for (auto d : D) {
                cout << d;
            }
            cout << ' ';
            D.clear();
            int max = 9;
            do {
                if (max < 0) 
                if (s - max < 0) {--max; continue;}

                while (ceil((s - max) / 9.0) <= m) {
                    ++min;
                }
                D.push_back(min);
                s -= min;
                m -= 1;

                min = 0;
            } while (m > 0);
            for (auto d : D) {
                cout << d;
            }
            cout << endl;
        }
    }
    return 0;
}
