#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int dist, int cow)
{
    int prev_cow = arr[0];
    int cnt = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - prev_cow >= dist)
        {
            prev_cow = arr[i];
            cnt++;
        }
    }

    return cnt >= cow;
}

int aggressiveCow(vector<int> arr, int cow)
{
    int l = 1;
    int h = arr[arr.size() - 1] - arr[0];
    int res = 1;
    while (l <= h)
    {
        int m = (h + l) / 2;
        if (isPossible(arr, m, cow))
        {
            res = m;
            l = m + 1;
        }
        else
            h = m - 1;
    }
    return res;
}

int main()
{
    vector<int> arr = {1, 2, 4, 8, 9};
    cout << aggressiveCow(arr, 3) << endl;
    return 0;
}
