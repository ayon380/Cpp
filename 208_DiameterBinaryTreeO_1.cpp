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
        this->data = a;
        left = NULL;
        right = NULL;
    }
};
int diameter(node *root,int *h)
{
    // int h = 0;
    int lh, rh = 0;
    int ld, rd = 0;
    if (root == NULL)
    {
        *h = 0;
        return 0;
    }
    ld = diameter(root->left,&lh);
    rd = diameter(root->right,&rh);
    *h = max(lh, rh) + 1;
    return max(lh + rh + 1, max(ld, rd));
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);int h=0;
    cout << diameter(root,&h) << endl;
    return 0;
}