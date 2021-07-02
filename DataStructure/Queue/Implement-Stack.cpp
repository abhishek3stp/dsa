#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Stack
{
    queue<T> q1, q2;

public:
    void push(T data)
    {
        q1.push(data);
    }

    void pop()
    {
        if (q1.empty())
            return;

        while (q1.size() > 1)
        {
            q2.push(q1.front());
            q1.pop();
        }

        q1.pop(); // remove nth element

        swap(q1, q2);
    }

    T top()
    {
        while (q1.size() > 1)
        {
            q2.push(q1.front());
            q1.pop();
        }

        T ans = q1.front();
        q1.pop();
        q2.push(ans);

        swap(q1, q2);
        return ans;
    }

    int size()
    {
        return q1.size() + q2.size();
    }

    bool empty()
    {
        return size() == 0;
    }
};

int main()
{
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    while (!s.empty())
    {
        cout << s.top() << ", ";
        s.pop();
    }
}
