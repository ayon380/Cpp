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
int height(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+max(height(root->left), height(root->right));
}
bool isbalanced(node* root)
{
    if(root==NULL)
    {
        return 1;
    }
    int lh,rh;
    lh=height(root->left);
    rh=height(root->right);
    if(abs(lh-rh)<=1 && isbalanced(root->left) && isbalanced(root->right))
    {
        return 1;
    }
    return 0;
}
int main()
{
   node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->left->left->left = new node(8);
    cout<<isbalanced(root)<< endl;
    return 0;
}
