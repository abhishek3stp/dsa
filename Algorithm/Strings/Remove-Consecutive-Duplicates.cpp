#include <bits/stdc++.h>
using namespace std;

void removeDuplicate(char str[])
{
    int n = strlen(str);
    if (n == 1 or n == 0)
        return;
    int prev = 0;
    for (int current = 1; current < n; current++)
        if (str[prev] != str[current])
        {
            str[prev + 1] = str[current];
            prev++;
        }
    str[prev + 1] = '\0';
    return;
}

int main()
{
    char str[] = "coodinnngg";
    removeDuplicate(str);
    cout << str;
    return 0;
}