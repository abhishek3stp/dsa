#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
    cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	int target;
	cin >> target;
	sort(arr, arr + n);
	for(int i = 0; i < n - 2; i++)
	{
		int midtarget = target - arr[i];
		int p = i + 1, q = n - 1;
		while(p < q)
		{
			int currSum = arr[p] + arr[q];
			if(currSum < midtarget)
				p++;
			else if(currSum > midtarget)
				q--;
			else if(currSum == midtarget)
			{
                cout << arr[i] << ", " << arr[p] << " and " << arr[q] << endl;
				p++; q--;	
			}
		}
	}
	return 0;
}