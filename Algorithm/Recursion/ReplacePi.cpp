#include <bits/stdc++.h>
using namespace std;

void replacePi(char *str, int i)
{
    if (str[i] == '\0' or str[i + 1] == '\0')
        return;
    if (str[i] == 'p' and str[i + 1] == 'i')
    {
        int j = i + 2;
        while (str[j] != '\0')
            j++;
        while (j >= i + 2)
        {
            str[j + 2] = str[j];
            j--;
        }
        str[i] = '3';
        str[i + 1] = '.';
        str[i + 2] = '1';
        str[i + 3] = '4';
        replacePi(str, i + 4);
    }
    else
        replacePi(str, i + 1);
    return;
}

int main()
{
    char str[] = "xtepibrrpipi";
    replacePi(str, 0);
    cout << str << endl;
}