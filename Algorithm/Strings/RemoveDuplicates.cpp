#include <bits/stdc++.h>
using namespace std;

void removeDuplicate(string str)
{
    set <char> s;
    for (int i = 0; i < str.length(); i++)
        s.insert(str[i]);
    string opt;
    for (auto x : s)
        opt.push_back(x);
    cout << opt;
}

int main()
{
    string str = "geeksforgeeks";
    removeDuplicate(str);
    return 0;
}
