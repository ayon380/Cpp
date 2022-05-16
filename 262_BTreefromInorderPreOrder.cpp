#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int a)
    {
        data = a;
        left = NULL;
        right = NULL;
    }
};
int search(int arr[], int start, int end, int data)
{
    for (int i = start; i <= end; i++)
    {
        if (arr[i] == data)
        {
            return i;
        }
    }
}
Node *buildTree(int pre[], int in[], int start, int end)
{
    static int idx = 0;
    if (start > end)
    {
        return NULL;
    }
    Node *root = new Node(pre[idx++]);
    if (start == end)
    {
        return root;
    }
    int inf = search(in, start, end, root->data);
    root->left = buildTree(pre, in, start, inf - 1);
    root->right = buildTree(pre, in, inf + 1, end);
    return root;
}
void printInorder(Node* node)
{
    if (node == NULL)
        return;
 
    /* first recur on left child */
    printInorder(node->left);
 
    /* then print the data of node */
    cout<<node->data<<" ";
 
    /* now recur on right child */
    printInorder(node->right);
}
int main()
{
    int pre[] = {1, 2, 4, 5, 3, 6};
    int in[] = {4, 2, 5, 1, 6, 3};
    int len = sizeof(in) / sizeof(in[0]);
    Node *root = buildTree(pre,in, 0, len - 1);
    cout << "Inorder traversal of the constructed tree is \n";
    printInorder(root);
    return 0;
}