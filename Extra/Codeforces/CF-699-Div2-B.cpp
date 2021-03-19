#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        long long int ans = -1;
        while (true)
        {
            for (long long int i = 0; i < n; i++)
            {
                if (i == n - 1)
                {
                    k = -1;
                    ans = -1;
                    break;
                }
                else if (arr[i] < arr[i + 1])
                {
                    k--;
                    arr[i]++;
                    ans = i + 1;
                    break;
                }
            }
            if (k <= 0)
                break;
        }
        cout << ans << endl;
    }
}
