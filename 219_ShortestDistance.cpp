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
        return root;
    }
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }
    node *left = lca(root->left, n1, n2);
    node *right = lca(root->right, n1, n2);
    if (left == NULL and right == NULL)
    {
        return NULL;
    }
    if (left != NULL and right != NULL)
    {
        return root;
    }
    if (left != NULL)
    {
        return lca(root->left, n1, n2);
    }
    return lca(root->right, n1, n2);
}
int calclevel(node *root, int k, int level)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == k)
    {
        return level;
    }
    int l = calclevel(root->left, k, level + 1);
    if (l == -1)
    {
        return calclevel(root->right, k, level + 1);
    }
    return l;
}
int distance(node *root, int n1, int n2)
{
    node *r = lca(root, n1, n2);
    int d1 = calclevel(r, n1, 0);
    int d2 = calclevel(r, n2, 0);
    return d1 + d2;
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
    root->right->left->right = new node(8);
    cout << distance(root, 4, 5);
    return 0;
