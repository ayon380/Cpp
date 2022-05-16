#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left = nullptr;
    node *right = nullptr;
    node(int a) : data(a){};
};
void rightview(node *root, int level, int *max)
{
    if (root == nullptr)
    {
        return;
    }
    if (*max < level)
    {
        cout << root->data << endl;
        *max = level;
    }
    rightview(root->right, level+1, max);
    rightview(root->left, level+1, max);
}
void right(node* root)
{
    int max=0;
    rightview(root,1,&max);
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
    root->right->right->right = new node(8);
 
    right(root);
    return 0;
}