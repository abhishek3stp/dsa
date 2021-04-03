#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

void verticalOrder(node *root, int d, map<int, vector<int>> &m)
{
    if (root == NULL)
        return;

    m[d].push_back(root->data);
    verticalOrder(root->left, d - 1, m);
    verticalOrder(root->right, d + 1, m);
    return;
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->left->right->right = new node(8);
    root->right->right->right = new node(9);

    map<int, vector<int>> m;

    verticalOrder(root, 0, m);

    for (auto p : m)
    {
        for (auto x : p.second)
            cout << x << ", ";
        cout << endl;
    }
}
