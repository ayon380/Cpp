#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int c)
    {
        data = c;
        left = NULL;
        right = NULL;
    }
};
Node *insertBST(Node *root, int x)
{
    if (root == NULL)
    {
        return new Node(x);
    }
    if (x > root->data)
    {
        root->right = insertBST(root->right, x);
    }
    else
    {
        root->left = insertBST(root->left, x);
    }
    return root;
}
Node *BinarySearch(Node *root, int key)
{
    if (root == NULL || root->data == key)
    {
        return root;
    }
    if (root->data > key)
    {
        return BinarySearch(root->left, key);
    }
    return BinarySearch(root->right, key);
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
Node *minvaluenode(Node *head)
{
    Node* root = head;
    while (root  and root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
Node *Delete(Node *root, int x)
{
    if (root == NULL)
    {
        return root;
    }
    if (x > root->data)
    {
        root->right=Delete(root->right, x);
    }
    else if (x < root->data)
    {
        root->left=Delete(root->left, x);
    }
    else
    {
        if (root->left == NULL and root->right == NULL)
        {
            return NULL;
        }
        else if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }
        Node *temp = minvaluenode(root->right);
        root->data = temp->data;
        root->right = Delete(root->right, temp->data);
    }
    return root;
}
int main()
{
    Node *root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 6);
    insertBST(root, 10);
    insertBST(root, 65);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 11);
    inorder(root);
    cout << endl;
    if (BinarySearch(root, 3) == NULL)
    {
        cout << "Node doesn't exist" << endl;
    }
    else
    {
        cout << "Node exists  " << endl;
    }
    cout<< endl;
    inorder(Delete(root,5));
    return 0;
}