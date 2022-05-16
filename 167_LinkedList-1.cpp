#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *ptr;
};
void push(node **p, int val)
{
    node* n=new node();
    n->data=val;
    n->ptr=*p;
    *p=n;
}
void append(node **p, int val)
{
    node* n=new node();
    n->data=val;
    n->ptr=NULL;
    node* last=*p;
    if(*p==NULL)
    {
        *p=n;
        return;
    }
    while((last->ptr)!=NULL)
    {
        last=last->ptr;
    }
    last->ptr=n;
}
void deleteNode(node** p,int key)
{
    if(*p==NULL)
    {
        cout<<"Linked List is empty"<<endl;
        return;
    }
    node*  a=*p;
    if((a)->data==key)
    {
        *p=a->ptr;
        delete a;
        cout<<"Successfully Deleted !";
        return;
    }
    node* q=NULL;
    while((a)->data!=key)
    {
        q=a;
        a=a->ptr;
    }
    if(a==NULL)
    {
        cout<<"Key not found ";
        return;
    }
    q->ptr=a->ptr;
    delete a;
}
void display(node* p)
{
    while(p!= NULL)
    {
        cout<<p->data<<" ";
        p=p->ptr;
    }
}
int main()
{
    node* a=NULL;
    push(&a,2);
    push(&a,3);
    append(&a,1);
    deleteNode(&a,3);
    display(a);
    return 0;
}