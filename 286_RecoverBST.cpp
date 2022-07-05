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
void swap(node *root, int a, int b)
{
    if (!root)
    {
        return;
    }
    swap(root->left, a, b);
    if (root->data == a)
    {
        root->data = b;
    }
    else if (root->data ==b)
    {
        root->data = a;
    }
    swap(root->right, a, b);
}
void inorder(vector<int> &v, node *root)
{
    if (!root)
    {
        return;
    }
    inorder(v, root->left);
    v.push_back(root->data);
    inorder(v, root->right);
}
node *vectorr(node *root)
{
    vector<int> v, v1;
    inorder(v, root);
    v1 = v;
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != v1[i])
        {
            swap(root, v1[i], v[i]);
            break;
        }
    }
    return root;
}
void inorder(node *root)
{
    if (!root)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    node *root = new node(6);
    root->left = new node(10);
    root->right = new node(2);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right->right = new node(12);
    root->right->left = new node(7);

    printf("Inorder Traversal of the");
    printf("original tree \n");

    inorder(root);

    vectorr(root);

    printf("\nInorder Traversal of the");
    printf("fixed tree \n");

    inorder(root);

    return 0;
}