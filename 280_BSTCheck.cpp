#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left = NULL;
    node *right = NULL;
    node(int a) : data(a)
    {
    }
};
bool check(node *root)
{
    static node *prev = NULL;
    if (root)
    {
        if (!check(root->left))
        {
            return true;
        }
        if (prev != NULL && root->data < prev->data)
        {
            return false;
        }
        prev = root;
        return check(root->right);
    }
    return true;
}
int main()
{
    node *root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);

    if (check(root))
        cout << "Is BST";
    else
        cout << "Not a BST";
    return 0;
}