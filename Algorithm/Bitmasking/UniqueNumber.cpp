#include <bits/stdc++.h>
using namespace std;

int uniqueNumber(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {3, 1, 3, 1, 2, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << uniqueNumber(arr, n) << endl;
}