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

int sum(node* root)
{
    if (root == NULL)
        return 0;
    return sum(root->left) + root->data + sum(root->right);
}
bool isSumTree(node* root)
{
    if (root == NULL || (root->left == NULL && root->right == NULL) )
        return true;
    int valLeft = sum(root->left);
    int valRight = sum(root->right);
    if (root->data == valLeft + valRight && isSumTree(root->left) && isSumTree(root->right) )
        return true;
}

int main()
{
    node *root = newNode(26);
    insert(root, 10);
    insert(root, 3);
    insert(root, 4);
    insert(root, 6);
    insert(root, 3);
    cout << isSumTree(root);
    return 0;
}
