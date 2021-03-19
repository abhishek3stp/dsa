#include <bits/stdc++.h>
using namespace std;

bool areRotation(string std1, string std2)
{
    std1.append(std1);
    return std1.find(std2) != -1;
}

int main()
{
    string std1 = "defabc";
    string std2 = "abcdef";
    cout << areRotation(std1, std2);
}