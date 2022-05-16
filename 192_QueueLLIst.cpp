#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void enqueue(node** head)
{
    int q;
    cout << "Enter the data to be inserted :";
    cin >> q;
    node* w= new node();
    node * e=new node();
    w->data=q;
    e=*head;
    w->next=e;
    *head=w;
}
void dequeue(node** head)
{
    if(head==NULL)
    {
        cout<<"Queue Underflow"<<endl;
        return;
    }
    node* w=new node();
    w=*head;
    while(w->next->next!=NULL)
    {
        w=w->next;
    }
    node* e=new node();
    node* r=new node();
    r=w;
    e=r->next;
    cout<<"The Data Deleted  : "<<e->data<<endl;
    delete e;
    w->next=NULL;
}
void display(node * head)
{
    cout<<"Start -> ";
    while(head!=NULL)
    {
        cout<<head->data<<" -> ";
        head=head->next;
    }
    cout<<" End "<<endl;
}
void peek(node * head)
{
    while(head->next!=NULL)
    {
        head=head->next;
    }
    cout<<"The Peek Element : "<<head->data<<endl;
}
int main()
{
    node *head = new node();
    head = NULL;
    cout << "*********QUEUE OPERATIONS************" << endl;
    while (1)
    {
        int q;
        cout << "Enter 1 to enqueue,\n 2 to dequeue,\n 3 to peek,\n 4 to display,\n 5 to exit" << endl;
        cin >> q;
        if (q == 1)
        {
            enqueue(&head);
        }
        else if (q == 2)
        {
            dequeue(&head);
        }
        else if (q == 3)
        {
            peek(head);
        }
        else if (q == 4)
        {
            display(head);
        }
        else if (q == 5)
        {
            return 1;
        }
        else
        {
            cout << "Wrong Input !!!!!!!!!!!!!" << endl;
            continue;
        }
    }
    return 0;
}