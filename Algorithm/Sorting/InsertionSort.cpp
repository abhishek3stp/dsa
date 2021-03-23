#include <bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int e = a[i], j = i - 1;

        while (j >= 0 and a[j] > e)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = e;
    }
}

int main()
{
    int a[] = {2, 15, 10, 7, 0, 13};
    int n = sizeof(a) / sizeof(a[0]);

    insertionSort(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << ", ";
    cout << endl;
}
