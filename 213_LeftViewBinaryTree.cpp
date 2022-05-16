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
void leftview(node *root)
{
    if (!root)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 1; i <= n; i++)
        {
            node *x = q.front();
            q.pop();
            if (i == 1)
            {
                cout << x->data << " ";
            }
            if (x->left)
            {
                q.push(x->left);
            }
            if (x->right)
            {
                q.push(x->right);
            }
        }
    }
}
int main()
{
    node *root = new node(10);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(7);
    root->left->right = new node(8);
    root->right->right = new node(15);
    root->right->left = new node(12);
    root->right->right->left = new node(14);
    // root->right->left->right = new node(8);
    leftview(root);
    return 0;
}