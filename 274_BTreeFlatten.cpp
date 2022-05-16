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
void flatten(node *root)
{
    if (root == nullptr || root->left == nullptr && root->right == nullptr)
    {
        return;
    }
    if (root->left != nullptr)
    {
        flatten(root->left);  
        node *temp = root->right;
        root->right = root->left;
        root->left = nullptr;
        node *t = root->right;
        while (t->right != nullptr)
        {
            t = t->right;
        }
        t->right = temp;
    }
    flatten(root->right);
}
void inorder(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(3);
    root->left->right = new node(4);
    root->right->right = new node(6);
    flatten(root);
    cout << "The Inorder traversal after flattening binary tree "<<endl;
    inorder(root);
    return 0;
}               