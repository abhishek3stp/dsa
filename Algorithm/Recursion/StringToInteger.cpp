#include <bits/stdc++.h>
using namespace std;

int stringToInt(string str, int n)
{
    if (n == 0)
        return 0;
    int digit = str[n - 1] - '0';
    int SmallAns = stringToInt(str, n - 1);
    return SmallAns * 10 + digit;
}

int main()
{
    string str = "543631";
    int n = str.length();
    cout << stringToInt(str, n) << endl;
}