#include <bits/stdc++.h>
using namespace std;

pair<int, int> getMinMax(int arr[], int low, int high)
{
    pair<int, int> minmax, left, right;

    if (low == high)
    {
        minmax.first = arr[low];
        minmax.second = arr[low];
        return minmax;
    }

    if (high == low + 1)
    {
        if (arr[low] < arr[high])
        {
            minmax.first = arr[low];
            minmax.second = arr[high];
        }
        else
        {
            minmax.first = arr[high];
            minmax.second = arr[low];
        }
        return minmax;
    }

    int mid = (low + high) / 2;
    left = getMinMax(arr, low, mid);
    right = getMinMax(arr, mid + 1, high);

    if (left.first < right.first)
        minmax.first = left.first;
    else
        minmax.first = right.first;

    if (left.second > right.second)
        minmax.second = left.second;
    else
        minmax.second = right.second;

    return minmax;
}

int main()
{
    int arr[] = {1000, 11, 445, 12, 330, 30};
    pair<int, int> minmax = getMinMax(arr, 0, 5);

    cout << minmax.first << " " << minmax.second << endl;
    return 0;
}
