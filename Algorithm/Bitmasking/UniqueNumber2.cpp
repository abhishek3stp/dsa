#include <iostream>
using namespace std;

void uniqueNumber2(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }

    int temp = res, pos = 0;
    while ((temp & 1) != 1)
    {
        pos++;
        temp = temp >> 1;
    }

    int mask = (1 << pos); // The first set bit in 'res' is at position 'pos'

    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & mask) > 0)
            x = x ^ arr[i];
    }
    y = res ^ x;
    cout << min(x, y) << " " << max(x, y) << endl;
}

int main()
{
    int arr[] = {5, 1, 2, 1, 2, 3, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    uniqueNumber2(arr, n);
}
