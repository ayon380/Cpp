#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;
    node()
    {
        prev = NULL;
        next = NULL;
    }
    node(int data) : data(data)
    {
        prev = nullptr;
        next = nullptr;
    }
};
bool isEmpty(node *head)
{
    if (head == nullptr)
    {
        return true;
    }
    return false;
}
void insertAtHead(node **head, int a)
{
    node *q = new node(a);
    q->prev = nullptr;
    q->next = *head;
    if (!isEmpty(*head))
        (*head)->prev = q;
    *head = q;
}
void append(node **head, int a)
{
    node *q = new node(a);
    q->next = nullptr;
    node *w = *head;
    while (w->next != nullptr)
    {
        w = w->next;
    }
    w->next = q;
    q->prev = w;
}
void insertAtIndex(node **head, int a, int index)
{
    node *q = new node(a);
    node *w = *head;
    int c = 2;
    while (w->next != nullptr)
    {
        c++;
        w = w->next;
        if (c == index)
        {
            break;
        }
    }
    q->next = w->next;
    // w->next->next->prev=q;
    w->next = q;
    q->prev = w;
    if (q->next != NULL)
        q->next->prev = q;
}
void displayNext(node *head)
{
    cout << "NULL -> ";
    while (head != nullptr)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
    cout << endl;
}
void displayprev(node *head)
{
    node *q;
    while (head != nullptr)
    {
        q = head;
        head = head->next;
    }
    cout << "NULL -> ";
    while (q != nullptr)
    {
        cout << q->data << " -> ";
        q = q->prev;
    }
    cout << "NULL";
    cout << endl;
}
void deleteKey(node **head, int key)
{
    node* q=*head;
    node*w;
    while (q->next != nullptr)
    {
        // w=q;
        q=q->next;
        if(q->next->data == key)
        {
            break;
        }
    }
    // w=q;
    // q->next=q->next->next;
    
    // w=q->next;
    // w->prev=q;
    w=q->next;
    q->next=w->next;
    w->next->prev=q;
    free(w);
    cout<<q->data<<endl;
}
int length(node* head)
{
    int c=0;
    while(head!=nullptr)
    {
        c++;
        head=head->next;
    }
    return c;
}
void KnodesEndAppend(node **head,int k)
{
    int c=0;
    node *q=*head;
    node *w;
    node*e=*head;
    int l=length(*head);
    while(q->next!=nullptr)
    {
        c++;
        w=q;
        q=q->next;
        if(c==(l-k))
        {
            break;
        }
    }
    w->next=nullptr;
    q->prev=nullptr;
    *head=q;
    cout<<(*head)->data<<endl;
    while(q->next!=nullptr)
    {
        q=q->next;
    }
    q->next=e;
    e->prev=q;
}
int main()
{
    node *head = nullptr;
    insertAtHead(&head, 6);
    displayNext(head);
    insertAtHead(&head, 9);
    displayprev(head);
    append(&head, 8);
    append(&head, 1);
    append(&head, 7);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    displayNext(head);
    insertAtIndex(&head, 4, 3);
    insertAtIndex(&head, 6, 4);
    displayNext(head);
    // displayprev(head);
    deleteKey(&head,7);
    displayNext(head);
    // displayprev(head);
    cout<<length(head)<<endl;
    KnodesEndAppend(&head,8);
    displayNext(head);
    return 0;
}