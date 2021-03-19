#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, key;
    cin >> n >> key;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    bool flag = false;
    
    int arr_min[n], arr_max[n];
    int mi = arr[0], mx = arr[n - 1];
    arr_min[0] = arr[0];
    arr_max[n - 1] = arr[n - 1];

    for (int i = 1; i < n; i++)
        arr_min[i] = min(mi, arr[i]);

    for (int i = n - 2; i >= 0; i--)
        arr_max[i] = max(mx, arr[i]);

    for(int i = 0; i < n; i++)
        if(arr_max[i] - arr_min[i] >= key)
        {
            flag = true;
            break;
        }
    
    if(flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
