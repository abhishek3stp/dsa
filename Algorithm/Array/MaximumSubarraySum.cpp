#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n) // This approach take O(n^2) time
{
    int maxSum = INT_MIN, currentSum;

    for (int i = 0; i < n; i++)
    {
        currentSum = 0;
        for (int j = i; j < n; j++)
        {
            currentSum += arr[j];
            maxSum = max(maxSum, currentSum);
        }
    }
    return maxSum;
}

int kadaneAlgo(int arr[], int n) // Kadane’s algorithm take O(n) time
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

int main()
{
    int arr[] = {-4, 1, 3, -2, 6, 2, -1, -4, -7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxSum(arr, n) << endl;
    cout << kadaneAlgo(arr, n) << endl;
    return 0;
}
