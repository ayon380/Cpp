#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
};
node *createnode(int a)
{
    node *n = new node;
    n->left = NULL;
    n->right = NULL;
    n->data = a;
    return n;
}
int search(int arr[], int strt, int end, int value)
{
	int i;
	for (i = strt; i <= end; i++)
	{
		if (arr[i] == value)
			return i;
	}
}
node *tree(int in[], int pre[], int start, int end)
{
    static int idx = 0;
    if (start > end)
    {
        return NULL;
    }
    node *n = createnode(pre[idx++]);
    if (start == end)
    {
        return n;
    }
    int i = search(in, start, end, n->data);

    // for (int i = start; i <= end; i++)
    // {
    //     if (pre[i] == n->data)
    //     {
    //         break;
    //     }
    // }
    n->left = tree(in, pre, start, i - 1);
    n->right = tree(in, pre, i + 1, end);
    return n;
}
void inorder(node *n)
{
    if (n == NULL)
    {
        return;
    }
    inorder(n->left);
    cout<<n->data<<" -> ";
    inorder(n->right);
}
int main()
{
    int pre[]={1,2,4,3,5};
    int in[]={4,2,1,5,3};
    node* root=tree(in,pre,0,4);
    inorder(root);
    return 0;
}