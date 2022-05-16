#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left=NULL;
    node *right=NULL;
    node(int a) : data(a) {}
};
int search(int in[], int start, int end, int d)
{
    for (int i = start; i <= end; i++)
    {
        if (in[i] == d)
        {
            return i;
        }
    }
}
node *buildtree(int in[], int post[], int start, int end, int *prein)
{
    if (start > end)
    {
        return NULL;
    }
    node *q = new node(post[*prein]);
    (*prein)--;
    if (start == end)
    {
        return q;
    }
    int index=search(in,start,end,q->data);
    q->right=buildtree(in,post,index+1,end,prein);
    q->left=buildtree(in,post,start,index-1,prein);
    return q;
}
node *build(int in[], int pos[], int n)
{
    int prein = n - 1;
    return buildtree(in, pos, 0, n - 1, &prein);
}
void preorder(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    int in[] = {4, 8, 2, 5, 1, 6, 3, 7};
    int post[] = {8, 4, 5, 2, 6, 7, 3, 1};
    int n = sizeof(in) / sizeof(in[0]);
    node *root = build(in, post, n);
    preorder(root);
    // cout<<root->left->right->data;
    return 0;
}