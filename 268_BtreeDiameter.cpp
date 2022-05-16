#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left = NULL;
    node *right = NULL;
    node(int a) : data(a) {}
};
int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lheight = height(root->left);
    int rheight = height(root->right);
    if (lheight > rheight)
    {
        return lheight + 1;
    }
    else
    {
        return rheight + 1;
    }
}
int diameter(node *root)
{
    if (root == NULL)
        return 0;
    int lheight = height(root->left);
    int rheight = height(root->right);
    int ldiameter = diameter(root->left);
    int rdiameter = diameter(root->right);
    return max(1+lheight+rheight , max(ldiameter, rdiameter));
}
int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
 
    // Function Call
    cout << "Diameter of the given binary tree is " <<
        diameter(root);
    return 0;
}