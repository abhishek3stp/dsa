#include <bits/stdc++.h>
using namespace std;

bool isInterleaved(string str1, string str2, string str3)
{
    int i = 0, j = 0, k = 0;
    while (k < str3.length())
    {
        if (str3[k] == str1[i])
            i++;

        else if (str3[k] == str2[j])
            j++;

        else
            return false;
        k++;
    }
    if (i != str1.length() || j != str2.length())
        return false;
    return true;
}

int main()
{
    string str1 = "AB";
    string str2 = "CD";
    string str3 = "ACBD";
    cout << isInterleaved(str1, str2, str3);
}