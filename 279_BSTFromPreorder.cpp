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
node *build(int arr[], int size)
{
    stack<node *> s;
    node *root = new node(arr[0]);
    s.push(root);
    node *temp = NULL;
    for (int i = 1; i < size; i++)
    {
        while (!s.empty() && arr[i] > s.top()->data)
        {
            temp = s.top();
            s.pop();
        }
        if (temp != NULL)
        {
            temp->right = new node(arr[i]);
            s.push(temp->right);
        }
        else
        {
            s.top()->left = new node(arr[i]);
            s.push(s.top()->left);
        }
    }
    return root;
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
}
int main()
{
    int pre[] = {10, 5, 1, 7, 40, 50};
    int size = sizeof(pre) / sizeof(pre[0]);

    node *root = build(pre, size);

    cout << "Inorder traversal of the constructed tree: \n";
    inorder(root);

    return 0;
}