// You are using GCC
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        next=NULL;
    }
    // friend istream & operator >> (istream &a,node* root);
    // friend ostream & operator << (ostream &a,const node* root);
};
    istream& operator >> (istream &a, node*& root)
    {
        // int a=INT_MIN;
        while(1)
        {
            int c;
            a>>c;
            if(c==-1)
            {
                break;
            }
            node* q=new node(c);
            if(root==NULL)
            {
                root=q;
                continue;
            }
            else{
                node* e=root;
                while(e->next!=NULL)
                {
                    e=e->next;
                }
                e->next=q;
            }
        }
        return a;
    }
    ostream & operator << (ostream & a, node* root)
    {
        while(root!=NULL)
        {
            if(root->next!=NULL)
            {
                cout<<root->data<<"->";
            }
            else
            {
                cout<<root->data;
            }
            root=root->next;
        }
        return a;
    }

int main()
{
    node* head=NULL;
    cin>>head;
    cout<<head;
}