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

void insert(node *temp, int key)
{
    queue<node *> q;
    q.push(temp);
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

int size(node *temp)
{
    if (temp == NULL)
        return 0;
    int l_size = size(temp->left);
    int r_size = size(temp->right);
    return l_size + r_size + 1;
}

int sum(node *temp)
{
    if (temp == NULL)
        return 0;
    int l_sum = sum(temp->left);
    int r_sum = sum(temp->right);
    return l_sum + r_sum + temp->data;
}

int height(node *temp)
{
    if (temp == NULL)
        return -1; // -1 for Edges, 0 for Nodes
    int l_height = height(temp->left);
    int r_height = height(temp->right);
    return 1 + max(l_height, r_height);
}

int maxNode(node *temp)
{
    if (temp == NULL)
        return INT_MIN;
    int l_max = maxNode(temp->left);
    int r_max = maxNode(temp->right);
    return max(l_max, max(temp->data, r_max));
}

int diameter(node *temp)
{
    if (temp == NULL)
        return 0;
    int l_dia = diameter(temp->left);
    int r_dia = diameter(temp->right);
    int dia = height(temp->left) + height(temp->right) + 2;
    return max(dia, max(l_dia, r_dia));
}

void mirror(node *temp)
{
    if (temp == NULL)
        return;
    node *swap = temp->left;
    temp->left = temp->right;
    temp->right = swap;

    mirror(temp->left);
    mirror(temp->right);
}

void preorder(node *temp)
{
    if (temp == NULL)
        return;
    cout << temp->data << " ";
    preorder(temp->left);
    preorder(temp->right);
}

void inorder(node *temp)
{
    if (temp == NULL)
        return;
    inorder(temp->left);
    cout << temp->data << " ";
    inorder(temp->right);
}

void postorder(node *temp)
{
    if (temp == NULL)
        return;
    postorder(temp->left);
    postorder(temp->right);
    cout << temp->data << " ";
}

void preorderWR(node *temp)
{
    if (temp == NULL)
        return;
    stack<node *> s;
    s.push(temp);
    while (!s.empty())
    {
        node *temp = s.top();
        cout << temp->data << " ";
        s.pop();
        if (temp->right)
            s.push(temp->right);
        if (temp->left)
            s.push(temp->left);
    }
}

void inorderWR(node *temp)
{
    if (temp == NULL)
        return;
    stack<node *> s;
    while (temp != NULL)
    {
        s.push(temp);
        temp = temp->left;
    }
    while (!s.empty())
    {
        node *temp = s.top();
        cout << temp->data << " ";
        s.pop();
        if (temp->right != NULL)
        {
            temp = temp->right;
            while (temp != NULL)
            {
                s.push(temp);
                temp = temp->left;
            }
        }
    }
}

void postorderWR(node *temp)
{
    stack<node *> s1, s2;
    s1.push(temp);
    while (!s1.empty())
    {
        node *temp = s1.top();
        s2.push(temp);
        s1.pop();
        if (temp->left)
            s1.push(temp->left);
        if (temp->right)
            s1.push(temp->right);
    }
    while (!s2.empty())
    {
        cout << s2.top()->data << " ";
        s2.pop();
    }
}

void levelorderWR(node *temp)
{
    if (temp == NULL)
        return;
    queue<node *> q;
    q.push(temp);
    while (!q.empty())
    {
        node *temp = q.front();
        cout << temp->data << " ";
        q.pop();
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
}

void printLevelorder(node *temp, int level)
{
    if (temp == NULL)
        return;
    if (level == 0)
        cout << temp->data << " ";
    else if (level > 0)
    {
        printLevelorder(temp->left, level - 1);
        printLevelorder(temp->right, level - 1);
    }
}

void levelorder(node *temp)
{
    for (int i = 0; i <= height(temp); i++)
    {
        printLevelorder(temp, i);
        cout << endl;
    }
}

void reverseLevelorder(node *temp)
{
    for (int i = height(temp); i >= 0; i--)
    {
        printLevelorder(temp, i);
        cout << endl;
    }
}

bool isBalanced(node *temp)
{
    if (temp == NULL)
        return true;
    int l_height = height(temp->left);
    int r_height = height(temp->right);

    if (abs(l_height - r_height) <= 1 && isBalanced(temp->left) && isBalanced(temp->right))
        return true;
    return 0;
}

int main()
{
    node *root = newNode(1);
    insert(root, 2);
    insert(root, 3);
    insert(root, 4);
    insert(root, 5);
    insert(root, 6);
    insert(root, 7);
    insert(root, 8);
    // cout << size(root) << " ";
    // cout << sum(root) << " ";
    // cout << height(root) << " ";
    // cout << maxNode(root) << " ";
    // cout << diameter(root) << " ";
    // mirror(root);
    // preorder(root);
    // preorderWR(root);
    // inorder(root);
    // inorderWR(root);
    // postorder(root);
    // postorderWR(root);
    // levelorder(root);
    // levelorderWR(root);
    // reverseLevelorder(root);
    // cout << isBalanced(root);
    return 0;
}
