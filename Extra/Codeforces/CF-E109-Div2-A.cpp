#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        int gc = gcd(k, 100);
        cout << 100 / gc << endl;
    }
}
