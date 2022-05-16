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
        left = NULL;
        right = NULL;
        data = a;
    }
};
int height(node *node);
void printtree(node *n, int i);
void print(node *n)
{
    int h = height(n);
    cout<<h;
    for (int i = 1; i <= h; i++)
    {
        printtree(n, i);
    }
    // cout<<h;
}
void printtree(node *n, int i)
{
    if (n ==NULL)
    {
        return;
    }
    if (i == 1)
    {
        cout << n->data << endl;
    }
    else if(i >1)
    {
        printtree(n->left, i - 1);
        printtree(n->right, i - 1);
    }
}
int height(node *node)
{
    if (node == NULL)
    {
        return 0;
    }
    else
    {
        int l = height(node->left);
        int r = height(node->right);
        if (l > r)
        {
            return l + 1;
        }
        else
        {
            return r + 1;
        }
    }
}
void inorder(node *node)
{
    if(node == NULL)
    {
        return;
    }
    inorder(node->left);
    cout<<node->data<<endl;
    inorder(node->right);
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    cout<<height(root);
    print(root);
    inorder(root);
    return 0;
}