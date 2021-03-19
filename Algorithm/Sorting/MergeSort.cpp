#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0;
    int b[high - low + 1];

    while (i <= mid && j <= high)
    {
        if (a[i] <= a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }

    while (j != high + 1)
        b[k++] = a[j++];
    while (i != mid + 1)
        b[k++] = a[i++];

    for (i = low, j = 0; i <= high; i++, j++)
        a[i] = b[j];
}

void mergesort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (high + low) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int main()
{
    int a[] = {2, 225, 100, 1, 0, 99};
    int size = sizeof(a) / sizeof(a[0]);

    mergesort(a, 0, size - 1);

    for (int i = 0; i < size; i++)
        cout << a[i] << ", ";
    return 0;
}
