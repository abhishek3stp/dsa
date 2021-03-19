#include <iostream>
using namespace std;

int main()
{
    string std;
    cin >> std;
    bool flag = false;
    for (int i = 0; i < std.length() / 2; i++)
    {
        if (std[i] != std[std.length() - 1 - i])
        {
            cout << "No" << endl;
            flag = true;
            break;
        }
    }
    if (!flag)
        cout << "Yes" << endl;
    return 0;
}
