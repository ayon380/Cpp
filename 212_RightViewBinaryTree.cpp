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
void right_view(node *root)
{
    if(root==NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        while (n--)
        {
            node *w = q.front();
            q.pop();
            if (n == 0)
            {
                cout << w->data << " ";
            }
            if (w->left)
            {
                q.push(w->left);
            }
            if (w->right)
            {
                q.push(w->right);
            }
        }
    }
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
    root->right->left->right = new node(8);
    right_view(root);
    return 0;
}