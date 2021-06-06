#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        bool sort = true;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != i + 1)
                sort = false;
        }

        if (sort == true)
            cout << 0 << endl;

        else if (a[0] == n and a[n - 1] == 1)
            cout << 3 << endl;

        else if (a[0] != 1 and a[n - 1] != n)
            cout << 2 << endl;

        else if (a[0] == 1 or a[n - 1] == n)
            cout << 1 << endl;
    }
}
