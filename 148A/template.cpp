#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b);

int gcd(int a, int b)
{
    if (a == 0) return b;
    return gcd(b %a, a);
}

int main()
{
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;

    int count = d / k + d/l + d/m + d/n;
    int m1, m2, m3, m4, m5, m6, m7, m8, m9;

    m1 =  ((k * l) / gcd(k, l)); 
    m2 =  ((k * m) / gcd(k, m)); 
    m3 = ((k * n) / gcd(k, n)); 

    m4 = ((l * m) / gcd(l, m)); 
    m5 = ((l * n) / gcd(l, n)); 
    m6 = ((m * n) / gcd(m, n)); 

    m7 = (m1 * m) / gcd(m1, m); 
    m8 = (m1 * n) / gcd(m1, n);
    m9 = (m4 * n) / gcd(m4, n);

    count -= d / m1;
    count -= d / m2;
    count -= d / m3;
    count -= d / m4;
    count -= d / m5;
    count -= d / m6;
    count += d / m7;
    count += d / m8;
    count += d / m9;

    cout << count << endl;
    
    return 0;
}
