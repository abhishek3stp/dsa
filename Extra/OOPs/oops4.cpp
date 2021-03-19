#include <iostream>
#include <cstring>
using namespace std;

//Let us define a Vector Class(User defined Vector)
class Vector
{
    //Data Members and some functions
    int *arr;
    int cs;
    int maxSize;

public:
    Vector(int defaultSize = 4)
    {
        maxSize = defaultSize;
        cs = 0;
        arr = new int[maxSize];
    }

    void operator()(string s)
    {
        cout << s << "is an awesome Place";
    }

    void push_back(int data)
    {
        if (cs == maxSize)
        {
            int *oldArr = arr;
            arr = new int[2 * maxSize]; // Doubling Operations
            maxSize = 2 * maxSize;

            for (int i = 0; i < cs; i++)
                arr[i] = oldArr[i];

            delete[] oldArr; // Delete the oldArr
        }
        arr[cs] = data;
        cs++;
    }

    bool empty()
    {
        return cs == 0;
    }

    int getSize()
    {
        return cs;
    }

    int getMaxSize()
    {
        return maxSize;
    }

    void pop_back()
    {
        if (!empty())
            cs--;
    }

    void print()
    {
        for (int i = 0; i < cs; i++)
            cout << arr[i] << ", ";
        cout << endl;
    }

    int at(int i)
    {
        return arr[i];
    }

    // Operators over user defined [], (), +, * , - , ! etc
    // Box by reference
    int &operator[](int i)
    {
        return arr[i];
    }
};

ostream &operator<<(ostream &os, Vector v)
{
    cout << "In << operator" << endl;
    v.print();
    return os;
}

int main()
{
    Vector v(1000);
    Vector fun;

    for (int i = 0; i <= 3; i++)
        v.push_back(i * i);

    fun = v; // Copy Assignment Operators - Shallow Copy
    cout << v << fun;

    v[2] += 6;
    fun[2] += 3;
    cout << "Final value" << endl;
    cout << v << fun;
    return 0;
}
