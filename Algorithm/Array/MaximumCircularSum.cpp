// Numbers are arranged in a circular form find the maximum sum of consecutive numbers
// 8 -8 9 -9 10 -11 12  ->  22 (12 + 8 - 8 + 9 - 9 + 10)
#include <bits/stdc++.h>
using namespace std;

int kadaneAlgo(int arr[], int n)
{
    int maxSum = INT_MIN, currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);
        if (currentSum < 0)
            currentSum = 0;
    }
    return maxSum;
}

int maxCircularSum(int a[], int n)
{
    int maxKadane = kadaneAlgo(a, n);

    int maxWrap, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        a[i] = -a[i]; // Change sign of array
    }
    maxWrap = sum + kadaneAlgo(a, n); // Max sum in corner is total sum - max inverted sumarray

    return (maxWrap > maxKadane) ? maxWrap : maxKadane;
}

int main()
{
    int a[] = {8, -8, 9, -9, 10, -11, 12};
    int n = 7;
    cout << maxCircularSum(a, n) << endl;
    return 0;
}
