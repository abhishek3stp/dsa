//https://codeforces.com/problemset/problem/1360/E
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		cin.get();
		char ch[100][100];
		for (int i = 0; i < n; i++)
			cin.getline(ch[i], 1000);

		bool flag = true;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if ((ch[i][j] == '1') and (i != n - 1 and j != n - 1))
				{
					if ((ch[i + 1][j] != '1') and (ch[i][j + 1] != '1'))
					{
						flag = false;
						break;
					}
				}
			}
			if (!flag)
				break;
		}
		(flag == true) ? (cout << "YES" << endl) : (cout << "NO" << endl);
	}
}
