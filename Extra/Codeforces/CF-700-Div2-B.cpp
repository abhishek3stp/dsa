#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, a, b) for (int i = a; i < b; i++)

bool compair(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return (a.first < b.first);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        int n;
        cin >> a >> b >> n;
        ll ma[n], mb[n];
        
        F(i, 0, n)
            cin >> ma[i];
        F(i, 0, n)
            cin >> mb[i];

        vector<pair<ll, ll>> m;

        F(i, 0, n)
            m.push_back(make_pair(ma[i], mb[i]));

        sort(m.begin(), m.end(), compair);

        bool flag = true;
        F(i, 0, n)
        {
            while (b > 0 and m[i].second > 0)
            {
                b -= m[i].first;
                m[i].second -= a;
            }
            if (b <= 0)
            {
                if (i == n - 1 and m[i].second <= 0)
                    flag = true;
                else
                    flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}