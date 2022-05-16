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
int count(node *root)
{
    static int c = 0;
    if (root == NULL)
    {
        return c;
    }
    c++;
    count(root->left);
    count(root->right);
    return c;
}
int sum(node *root)
{
    static int s = 0;
    if (root == NULL)
    {
        return s;
    }
    s+=root->data;
    sum(root->left);
    sum(root->right);
}
int main()
{
    node *root = new node(5);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->left->right->right = new node(100);
    cout << count(root) << endl;
    cout<<sum(root) << endl;
    return 0;
}