#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    bool alternate = false;
    string final = "I hate ";

    cin >> n;
    for (int i = 1; i < n; ++i) {
        if (!alternate) final += "that I love ";
        else final += "that I hate ";

        alternate = !alternate;
    }
    final += "it";
    cout << final << endl;
    return 0;
}
