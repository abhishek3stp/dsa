#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n)
{
    int opt[n] = {0};
    for (int i = 1; i < n; i++)
        opt[i] = INT_MAX;

    for (int i = 0; i < n - 1; i++)
    {
        if (opt[i] != INT_MAX)
            for (int j = i + 1; (j <= i + arr[i] && j < n); j++)
                opt[j] = min(opt[j], opt[i] + 1);
    }

    if (opt[n - 1] != INT_MAX)
        return opt[n - 1];
    else
        return -1;
}

int main()
{
    int arr[] = {1, 3, 6, 3, 2, 3, 6, 8, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << minJumps(arr, n);
}
