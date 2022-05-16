#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int a)
    {
        data = a;
        left = NULL;
        right = NULL;
    }
};
void inorder(node *root)
{
    node *curr = root;
    stack<node *> s;//first we initialize an empty stack
    while (curr != NULL || s.empty() == false)
    {
        while (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout << curr->data << endl;
        curr = curr->right;
    }
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    inorder(root);
    return 0;
}