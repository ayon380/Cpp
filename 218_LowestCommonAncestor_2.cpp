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
    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
node *lca(node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return nullptr;
    }
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }
    node *left = lca(root->left, n1, n2);
    node *right = lca(root->right, n1, n2);
    if (left and right)
    {
        return root;
    }
    return (left!=NULL )?left:right;
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
    cout << lca(root, 4, 5)->data;
    return 0;
}