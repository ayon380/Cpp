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
void flatten(node *root)
{
    if (root == NULL || root->left==NULL && root->right==NULL)
    {
            return ;
    }
    if (root->left != NULL)
    {
        flatten(root->left);
        node *temp = root->right;
        root->right = root->left;
        root->left = NULL;
        node *t = root->right;
        while (t->right != NULL)
        {
            t = t->right;
        }
        t->right = temp;
    }
    flatten(root->right);
}
void inorder(node *head)
{
    if (head == NULL)
    {
        return;
    }
    inorder(head->left);
    cout << head->data << " -> ";
    inorder(head->right);
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
    inorder(root);
    return 0;
}