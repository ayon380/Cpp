#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left = nullptr;
    node *right = nullptr;
    node(int a) : data(a) {}
};
void leftview(node *root, int level, int *max)
{
    if (root == NULL)
    {
        return;
    }
    if (*max < level)
    {
        cout << root->data << endl;
        *max = level;
    }
    leftview(root->left, level + 1, max);
    leftview(root->right, level + 1, max);
}
void left(node *root)
{
    int max = 0;
    leftview(root, 1, &max);
}
int main()
{
    node *root = new node(10);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(7);
    root->left->right = new node(8);
    root->right->right = new node(15);
    root->right->left = new node(12);
    root->right->right->left = new node(14);
    left(root);
    return 0;
}