#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2)
{
    int l1 = s1.length();
    int l2 = s2.length();

    if (l1 != l2)
        return false;

    unordered_map<char, int> m;
    for (int i = 0; i < l1; i++)
        m[s1[i]]++;

    for (int i = 0; i < l2; i++)
    {
        if (m.find(s2[i]) == m.end())
            return false;
        else
        {
            m[s2[i]]--;
            if (m[s2[i]] == 0)
                m.erase(s2[i]);
        }
    }
    return m.size() == 0;
}

int main()
{
    string str1 = "geeksforgeeks";
    string str2 = "forgeeksgeeks";
    if (isAnagram(str1, str2))
        cout << "Anagram" << endl;
    else
        cout << "Not Anagram" << endl;
    return 0;
}
