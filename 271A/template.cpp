#include <bits/stdc++.h>

using namespace std;

bool is_distinct(int year) {
    int digits[10] = {0};
    while (year) {
        int digit = year % 10;
        ++digits[digit];
        if (digits[digit] >= 2) return false;
        year /= 10;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    
    for (int i = 1; i < 9000; ++i) {
        if (is_distinct(n + i)) {
            cout << n + i << endl;
            break;
        }
    }
    return 0;
}
