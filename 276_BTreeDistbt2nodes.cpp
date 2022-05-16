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
node *lca(node *root, int key1, int key2)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key1 || root->data == key2)
    {
        return root;
    }
    node *left = lca(root->left, key1, key2);
    node *right = lca(root->right, key1, key2);
    if (left && right)
    {
        return root;
    }
    if (left == NULL)
    {
        return right;
    }
    return left;
}
int distance(node *root, int key1, int level)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == key1)
    {
        return level;
    }
    int left = distance(root->left, key1, level + 1);
    if (left == -1)
    {
        return distance(root->right, key1, level + 1);
    }
    return left;
}
int findDistance(node *root, int key1, int key2)
{
    node *l = lca(root, key1, key2);
    int d1 = distance(root, key1, 0);
    int d2 = distance(root, key2, 0);
    return d1 + d2;
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
    cout << "Dist(4, 5) = " << findDistance(root, 4, 5);
    cout << "\nDist(4, 6) = " << lca(root, 4, 5)->data;
    cout << "\nDist(3, 4) = " << findDistance(root, 3, 4);
    cout << "\nDist(2, 4) = " << findDistance(root, 2, 4);
    cout << "\nDist(8, 5) = " << findDistance(root, 8, 5);
    return 0;
}