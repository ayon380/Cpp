#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left=NULL;
    node *right=NULL;
    node(int a) : data(a) {}
};
int height(node *root)
{
    if (root == NULL)
        return -1;
    int lheight=height(root->left);
    int rheight=height(root->right);
    if(lheight>rheight)
    {
        return lheight+1;
    }
    else
    {
        return rheight+1;
    }
}
int main()
{
    node *root = new node(1);
 
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
     
    cout << "Height of tree is " << height(root);
    return 0;
}