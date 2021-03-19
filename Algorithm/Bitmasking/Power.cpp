#include <bits/stdc++.h>
using namespace std;

int power(int a, int n)
{
    int ans = 1;
    while (n > 0)
    {
        int lastbit = (n & 1);
        if (lastbit)
            ans = ans * a;
        a = a * a;
        n = n >> 1;
    }
    return ans;
}

int main()
{
    int a = 3, n = 5;
    cout << power(a, n) << endl;
}