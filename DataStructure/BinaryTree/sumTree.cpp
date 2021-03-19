#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

node *newNode(int data)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void insert(node *root, int key)
{
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp->left == NULL)
        {
            temp->left = newNode(key);
            break;
        }
        else
            q.push(temp->left);

        if (temp->right == NULL)
        {
            temp->right = newNode(key);
            break;
        }
        else
            q.push(temp->right);
    }
}

void inorder(node *temp)
{
    if (temp == NULL)
        return;
    inorder(temp->left);
    cout << temp->data << " ";
    inorder(temp->right);
}

int sumTree(node* root)
{
    if (root == NULL)
        return 0;
    int val = root->data;
    root->data = sumTree(root->left) + sumTree(root->right);
    return val + root->data;
}

int main()
{
    node *root = newNode(10);
    insert(root, -2);
    insert(root, 6);
    insert(root, 8);
    insert(root, -4);
    insert(root, 7);
    insert(root, 5);
    sumTree(root);
    inorder(root);
    return 0;
}
