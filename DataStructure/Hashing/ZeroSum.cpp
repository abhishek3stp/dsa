#include <bits/stdc++.h>
using namespace std;

bool zeroSum(int arr[], int n)
{
    unordered_set<int> s;

    int pre = 0;
    for (int i = 0; i < n; i++)
    {
        pre += arr[i];
        if (pre == 0 or s.find(pre) != s.end())
            return true;

        s.insert(pre);
    }
    return false;
}

int main()
{
    int arr[] = {6, -1, 2, -1, 2, -1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << zeroSum(arr, n);
}
