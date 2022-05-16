#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left, *right;
};
node *createNode(int d)
{
    node *temp = new node;
    temp->data = d;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " -> ";
    inorder(root->right);
}
void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " -> ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " -> ";
}
int main()
{
    node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    inorder(root);
    cout << endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    return 0;
}