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
struct tree
{
    int size;
    int max;
    int min;
    int ans;
    bool flag;
};
tree largest(node *root)
{
    if (root == NULL)
    {
        return { 0, INT_MIN ,INT_MAX ,0,true};
    }
    if(root->left==NULL && root->right==NULL)
    {
        return {1,r}
    } 
}
int main() { return 0; }