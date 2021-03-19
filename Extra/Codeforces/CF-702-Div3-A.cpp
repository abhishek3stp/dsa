#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int count = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 1; i < n; i++)
        {
            float b = max(arr[i - 1], arr[i]);
            float a = min(arr[i], arr[i - 1]);
            if (b / a > 2)
                while (b / a > 2)
                {
                    a = a * 2;
                    count++;
                }
        }
        cout << count << endl;
    }
}
