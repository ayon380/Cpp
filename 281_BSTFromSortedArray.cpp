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
node *build(int arr[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    int mid = (start + end) / 2;
    node *root = new node(arr[mid]);
    root->left = build(arr, start, mid - 1);
    root->right = build(arr, mid + 1, end);
    return root;
}
void preOrder(node* node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);
}
int main()
{
      int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    /* Convert List to BST */
    node *root = build(arr, 0, n-1);
    cout << "PreOrder Traversal of constructed BST \n";
    preOrder(root);
    return 0;
}