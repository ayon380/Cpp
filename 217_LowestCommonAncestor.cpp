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
    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
bool check(node *root, vector<int> &v, int k)
{
    if (root == NULL)
    {
        return false;
    }
    v.push_back(root->data);
    if (root->data == k)
    {
        return true;
    }
    if ((root->left && check(root->left, v, k)) || (root->right && check(root->right, v, k)))
    {
        return true;
    }
    v.pop_back();
    return false;
}
int lca(node *root, int n1, int n2)
{
    vector<int> v1, v2;
    if (!check(root, v1, n1) || !check(root, v2, n2))
    {
        return -1;
    }
    int i;
    for (i = 0; i < v1.size() && i < v2.size(); i++)
    {
        if (v1[i] != v2[i])
            break;
    }
    return v1[i - 1];
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
    cout << lca(root, 4, 6);
    return 0;
}