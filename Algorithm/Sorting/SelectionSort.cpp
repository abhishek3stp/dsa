#include <bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min_index = i;

		for (int j = i + 1; j < n; j++)
			if (a[j] < a[min_index])
				min_index = j;

		swap(a[min_index], a[i]);
	}
}

int main()
{
	int a[] = {2, 15, 10, 7, 0, 13};
	int n = sizeof(a) / sizeof(a[0]);

	selectionSort(a, n);

	for (int i = 0; i < n; i++)
		cout << a[i] << ", ";
	cout << endl;
}
