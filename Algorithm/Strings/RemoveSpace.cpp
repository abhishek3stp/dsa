#include <bits/stdc++.h>
using namespace std;

void removeSpace(string str)
{
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    cout << str;
}

int main()
{
    string str = "Abhishek    is   a great man";
    removeSpace(str);
    return 0;
}
