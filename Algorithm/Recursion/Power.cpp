#include <bits/stdc++.h>
using namespace std;

int power(int a, int n)
{
    if (n == 0)
        return 1;
    int ans = power(a, n / 2);
    ans = ans * ans;
    if (n & 1) // odd n
        return ans * a;
    return ans;
}

int main()
{
    int a = 2, n = 3;
    cout << power(a, n) << endl;
}