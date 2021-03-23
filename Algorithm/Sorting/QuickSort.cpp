#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int s, int e)
{
    int i = s - 1;
    int pivot = a[e];

    for (int j = s; j <= e - 1; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[e]);
    return i + 1;
}

void quickSort(int a[], int s, int e)
{
    if (s >= e)
        return;

    int p = partition(a, s, e);
    quickSort(a, s, p - 1);
    quickSort(a, p + 1, e);
}

int main()
{
    int a[] = {2, 15, 10, 7, 0, 13};
    int n = sizeof(a) / sizeof(a[0]);

    quickSort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << a[i] << ", ";
    cout << endl;
}
