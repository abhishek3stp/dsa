#include <bits/stdc++.h>
using namespace std;

int uniqueNumber3(int arr[], int n)
{
    int cnt[64] = {0};
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i], j = 0;
        while (temp > 0)
        {
            int lastbit = (temp & 1);
            cnt[j] += lastbit;
            j++;
            temp = temp >> 1;
        }
    }
    int p = 1, ans = 0;
    for (int i = 0; i < 64; i++)
    {
        cnt[i] %= 3;
        ans += (cnt[i] * p);
        p = p << 1;
    }
    return ans;
}

int main()
{
    int arr[] = {3, 3, 1, 1, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << uniqueNumber3(arr, n) << endl;
}
