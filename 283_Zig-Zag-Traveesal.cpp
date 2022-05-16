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
vector<int> zigzag(node *root)
{
    vector<int> ans;
    queue<node *> q;
    q.push(root);
    bool flag = false;
    while (!q.empty())
    {
        vector<int> t;
        int size = q.size();
        node *temp;
        for (int i = 0; i < size; i++)
        {
            temp = q.front();
            q.pop();
            t.push_back(temp->data);

            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
        flag = !flag;
        if (flag == false)
        {
            reverse(t.begin(), t.end());
        }
        for (int i = 0; i < t.size(); i++)
        {
            ans.push_back(t[i]);
        }
    }
    return ans;
}
int main()
{
        vector<int> v;
   
    // create tree
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(7);
    root->left->right = new node(6);
    root->right->left = new node(5);
    root->right->right = new node(4);
    cout << "ZigZag Order traversal of binary tree is \n";
 
    v = zigzag(root);
 
    for (int i = 0; i < v.size();
         i++) { // to print the order
        cout << v[i] << " ";
    }
    return 0;
}