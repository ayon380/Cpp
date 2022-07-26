#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left=NULL;
    node* right=NULL;
    node(int a):data(a){}
};
void order(node* root,map<int,vector<int>> &m,int h)
{
    if(root==NULL)
    {
        return;
    }
    m[h].push_back(root->data);
    order(root->left,m,h-1);
    order(root->right,m,h+1);
}
void print(node* root)
{
    map<int, vector<int>> m;
    int h=0;
    order(root,m,h);
    map<int,vector<int>> :: iterator i;
    for(i = m.begin(); i!=m.end();i++)
    {
        for(int j=0; j < i->second.size() ; j++)
        {
            cout<<i->second[j]<<" ";
        }
        cout<<endl;
    }
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
    root->right->right->right = new node(9);
    cout << "Vertical order traversal is n";
    print(root);
    return 0;
    return 0;
}