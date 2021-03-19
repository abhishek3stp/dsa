#include <bits/stdc++.h>
using namespace std;

int campare(int a, int b)
{
    return to_string(b) < to_string(a);
}

string biggestNumber(int arr[], int n)
{
    string str = "";
    sort(arr, arr + n, campare);
    for (int i = 0; i < n; i++)
        str.append(to_string(arr[i]));
    return str;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << biggestNumber(arr, n) << endl;
    }
    return 0;
}