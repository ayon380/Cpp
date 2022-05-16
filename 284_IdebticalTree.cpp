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
bool isidentical(node *a, node *b)
{
    if (a == NULL && b == NULL)
    {
        return true;
    }
    else if (a == NULL && b != NULL)
    {
        return false;
    }
    else if (a != NULL && b == NULL)
    {
        return false;
    }
    else
    {
        if(isidentical(a->left,b->left) && isidentical(a->right,b->right) && a->data == b->data)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    
    node* root1 = new node(5);
    node* root2 = new node(5);
    root1->left = new node(3);
    root1->right = new node(8);
    root1->left->left = new node(2);
    root1->left->right = new node(4);
 
    root2->left = new node(3);
    root2->right = new node(8);
    root2->left->left = new node(2);
    root2->left->right = new node(4);
 
    if (isidentical(root1, root2))
        cout << "Both BSTs are identical";
    else
        cout << "BSTs are not identical";
 
    return 0;
}