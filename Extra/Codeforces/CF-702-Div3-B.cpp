#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp, count = 0;
        cin >> n;
        int cnt[3] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            temp = temp % 3;
            cnt[temp]++;
        }
        int m = n / 3;
        for (int i = 0; i < 6; i++)
        {
            if (cnt[i % 3] > m)
            {
                int v = cnt[i % 3] - m;
                count += v;
                cnt[i % 3] = m;
                cnt[(i + 1) % 3] += v;
            }
        }
        cout << count << endl;
    }
}
