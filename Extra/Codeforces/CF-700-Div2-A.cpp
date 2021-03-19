#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, a, b) for (int i = a; i < b; i++)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        F(i, 0, str.length())
        {
            if (i & 1)
            {
                if (str[i] == 'z')
                    str[i] = 'y';
                else
                    str[i] = 'z';
            }
            else
            {
                if (str[i] == 'a')
                    str[i] = 'b';
                else
                    str[i] = 'a';
            }
        }
        cout << str << endl;
    }
    return 0;
}