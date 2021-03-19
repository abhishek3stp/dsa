#include <bits/stdc++.h>
using namespace std;

int minSwaps(vector <int> arr)
{
    int n = arr.size();
    pair <int, int> arrPos[n];

    for (int i = 0; i < n; i++)
    {
        arrPos[i].first = arr[i];
        arrPos[i].second = i;
    }
    sort(arrPos, arrPos + n);
    vector <bool> visit(n, false);
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if(visit[i] || arrPos[i].second == i)
            continue;
        int cycleSize = 0;
        int j = i;
        while (!visit[j])
        {
            visit[j] = 1;
            j = arrPos[j].second;
            cycleSize++;
        }
        if ( cycleSize > 0)
            ans += (cycleSize - 1);  
    }
    return ans;
}

int main()
{
    vector <int> arr = {1, 5, 4 , 3, 2};
    cout <<minSwaps(arr);
}
