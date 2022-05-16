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
node *lca(int key, int key1, node *root)
{
    if (root == nullptr)
    {
        return NULL;
    }
    if (root->data == key || root->data == key1)
    {
        return root;
    }
    node *left = lca(key, key1, root->left);
    node *right = lca(key, key1, root->right);
    if (left && right)
    {
        return root;
    }
    if (left == nullptr)
    {
        return right;
    }
    return left;
}
int main()
{
    // Let us create binary tree given in the above example
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout << "LCA(4, 5) = " << lca(4, 5, root)->data;
    cout << "\nLCA(4, 6) = " << lca(4, 6, root)->data;
    cout << "\nLCA(3, 4) = " << lca(3, 4, root)->data;
    cout << "\nLCA(2, 4) = " << lca(2, 4, root)->data;
    return 0;
}