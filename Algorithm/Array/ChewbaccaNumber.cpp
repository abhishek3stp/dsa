#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
        if (str[i] > '4')
            str[i] = '9' - str[i] + '0';

    if (str.front() == '0')
        str.front() = '9';

    cout << str << endl;
    return 0;
}