#include <bits/stdc++.h>
using namespace std;

string intToString(int n, string str)
{
    if (n == 0)
        return str;
    char ch = (char)(n % 10 + 48);
    string smallAns = intToString(n / 10, str);
    smallAns.push_back(ch);
    return smallAns;
}

int main()
{
    int n = 435;
    string str = "";
    cout << intToString(n, str) << endl;
}