#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node()
    {
        left = NULL;
        right = NULL;
    }
    node(int a)
    {
        data = a;
        left = NULL;
        right = NULL;
    }
};
int sum(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int d = root->data;
    root->data = sum(root->left) + sum(root->right);
    return d + root->data;
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" -> ";
    inorder(root->right);
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    sum(root);
    inorder(root);
    return 0;
}