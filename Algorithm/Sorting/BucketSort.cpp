#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int marks;
};

void bucketSort(Student s[], int n)
{
    vector<Student> v[101];

    for (int i = 0; i < n; i++)
    {
        int temp = s[i].marks;
        v[temp].push_back(s[i]);
    }

    for (int i = 0; i <= 100; i++)
    {
        for (auto x : v[i])
            cout << x.name << " " << x.marks << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    Student s[n];

    for (int i = 0; i < n; i++)
        cin >> s[i].name >> s[i].marks;

    bucketSort(s, n);
}
