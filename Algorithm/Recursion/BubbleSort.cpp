#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int j, int n)
{
    if (n == 1)
        return;
    if (j == n - 1)
        return bubbleSort(arr, 0, n - 1);
    if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
    return bubbleSort(arr, j + 1, n);
}

int main()
{
    int arr[] = {5, 1, 3, 7, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, 0, n);
    for (auto x : arr)
        cout << x << " ";
    cout << endl;
}
