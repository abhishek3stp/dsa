#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        int countU = 0;
        int countD = 0;
        int countR = 0;
        int countL = 0;
        string str;
        cin >> str;
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i] == 'U')
                countU++;
            else if(str[i] == 'D')
                countD++;
            else if(str[i] == 'R')
                countR++;
            else if(str[i] == 'L')
                countL++;
        }
        bool ans = false;

        if(x >= 0 and y >= 0)
        {
            if(countR >= x and countU >= y)
                ans = true;
        }
        else if(x <= 0 and y >= 0)
        {
            if(countL >= abs(x) and countU >= y)
                ans = true;  
        }
        else if(x >= 0 and y <= 0)
        {
            if(countR >= x and countD >= abs(y))
                ans = true;  
        }
        else if(x <= 0 and y <= 0)
        {
            if(countL >= abs(x) and countD >= abs(y))
                ans = true;  
        }
    
        if(ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}