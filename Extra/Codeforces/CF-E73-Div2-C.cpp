#include <bits/stdc++.h>
using namespace std;

bool possible(int c, int m, int x, int mid)
{
    if (mid <= c and mid <= m and mid <= (c + m + x) / 3)
        return true;
    else
        return false;
}

int solve(int c, int m, int x)
{
    int s = 0;
    int e = min(c, m);
    int ans = 0;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (possible(c, m, x, mid))
        {
            ans = max(ans, mid);
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c, m, x;
        cin >> c >> m >> x;
        cout << solve(c, m, x) << endl;
    }
}
