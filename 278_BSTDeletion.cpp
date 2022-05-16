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
node *insert(node *root, int data)
{
    if (root == NULL)
    {
        return new node(data);
    }
    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
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
bool search(node *root, int data)
{
    if (root->data == data)
    {
        return true;
    }
    if (data < root->data)
    {
        search(root->left, data);
    }
    else if (data > root->data)
    {
        search(root->right, data);
    }
}
node *deleteBST(node *root, int data)
{
    if (root == NULL)
    {
        return root;
    }
    if (data < root->data)
    {
        root->left = deleteBST(root->left, data);
        return root;
    }
    else if (data > root->data)
    {
        root->right = deleteBST(root->right, data);
        return root;
    }
    if (root->left == NULL)
    {
        node *temp = root->right;
        delete root;
        return temp;
    }
    else if (root->right == NULL)
    {
        node *temp = root->left;
        delete root;
        return temp;
    }
    else
    {
        node *p1 = root;
        node *p2 = root->right;
        while (p2->left != NULL)
        {
            p1 = p2;
            p2 = p2->left;
        }
        if (p2 != p1)
        {
            p1->left = p2->right;
        }
        else
        {
            p1->right = p2->right;
        }
        root->data = p2->data;
        delete p2;
        return root;
    }
}
int main()
{
    node *root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    printf("Inorder traversal of the given tree \n");
    inorder(root);

    printf("\nDelete 20\n");
    root = deleteBST(root, 20);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);

    printf("\nDelete 30\n");
    root = deleteBST(root, 30);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);

    printf("\nDelete 50\n");
    root = deleteBST(root, 50);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);
    if (search(root, 80))
        cout << "yes" << endl;
    else
        cout << "no"<< endl;
    return 0;
}