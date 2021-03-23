#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
}

int main()
{
	int a[] = {2, 15, 10, 7, 0, 13};
	int n = sizeof(a) / sizeof(a[0]);

	bubbleSort(a, n);

	for (int i = 0; i < n; i++)
		cout << a[i] << ", ";
	cout << endl;
}
