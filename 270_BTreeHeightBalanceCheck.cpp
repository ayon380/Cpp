#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left=NULL;
    node* right=NULL;
    node(int a):data(a){}
};
int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return (1+max(height(root->left), height(root->right)));
}
int isbalanced(node* root)
{
    if(root==NULL){
        return 1;
    }
    int lh=height(root->left);
    int rh=height(root->right);
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
    root->right->right = new node(5);
    root->left->right = new node(8);
 
    if (isbalanced(root))
        cout << "Tree is balanced";
    else
        cout << "Tree is not balanced";
    return 0;
}