#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
	int min_idx;
	for (int i = 0; i < n - 1; i++)
	{
		min_idx = i;
		for (int j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;
		swap(arr[min_idx], arr[i]);
	}
}

int main()
{
	int arr[] = {1, 22, 12, 22, 11};
	int n = sizeof(arr) / sizeof(arr[0]);
	selectionSort(arr, n);
	for (int i = 0; i < n; i++)
		cout << arr[i] << ", ";
	return 0;
}