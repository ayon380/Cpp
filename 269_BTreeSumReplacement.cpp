#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left=NULL;
    node* right=NULL;
    node(int a):data(a){}
};
int sumtree(node*  root)
{
    if(root==NULL)
    {
        return 0;
    }
    int val=root->data;
    root->data=sumtree(root->left)+sumtree(root->right);
    return root->data+val;
}
void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<< root->data <<endl;
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    node* root = new node(10);
    root->left = new node(-2);
    root->right = new node(6);
    root->left->left = new node(8);
    root->left->right = new node(-4);
    root->right->left = new node(7);
    root->right->right = new node(5);
    sumtree(root);
    preorder(root);
    return 0;
}