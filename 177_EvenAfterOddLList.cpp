#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *ptr;
    node(int a)
    {
        this->data = a;
    }
};
bool isEmpty(node *head)
{
    if (head == NULL)
    {
        return true;
    }
    return false;
}
void insertAtHead(node **head, int a)
{
    node *q = new node(a);
    q->ptr = *head;
    *head = q;
}
void insertAtIndex(node **head, int a, int i)
{
    int c = 1;
    node *q = new node(a);
    node *w = *head;
    while (c < i - 1)
    {
        c++;
        cout << w->data << endl;
        w = (w)->ptr;
    }
    q->ptr = w->ptr;
    w->ptr = q;
}
int length(node *head)
{
    int l = 0;
    while (head != NULL)
    {
        l++;
        head = head->ptr;
    }
    // cout << "\nLength : " << l << endl;
    return l;
}
void append(node **head, int a)
{
    node *q = new node(a);
    q->ptr = NULL;
    node *w = *head;
    if (isEmpty(*head))
    {
        *head = q;
        return;
    }
    while (((w)->ptr) != NULL)
    {
        (w) = (w)->ptr;
    }
    (w)->ptr = q;
}
void display(node *head)
{
    cout << "\n";
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->ptr;
    }
    cout << "NULL";
}
void deleteKEY(node **head, int key)
{
    node *q = *head;
    if (q->data = key)
    {
        *head = q->ptr;
        delete (q);
        return;
    }
    node *w = NULL;
    while ((q->data) != key && q->ptr != NULL)
    {
        w = q;
        q = q->ptr;
        cout << q->data << endl;
    }
    w->ptr = q->ptr;
    delete (q);
}
void deleteIndex(node **head, int index)
{
    node *q = *head;
    int c = 1;
    if (index == 1)
    {
        *head = q->ptr;
        delete (q);
        return;
    }
    while (c < index - 1 && q->ptr != NULL)
    {
        q = q->ptr;
        c++;
    }
    node *w = q->ptr->ptr;
    delete (q->ptr);
    q->ptr = w;
}
void reverse(node **head)
{
    node *w = *head;
    node *e = NULL;
    node *f = NULL;
    while (w != NULL)
    {
        e = w->ptr;
        w->ptr = f;
        f = w;
        w = e;
    }
    *head = f;
}
node *reversenode(node *head, int k)
{
    int c = 0;
    node *q = head;
    node *prev = NULL;
    node *next = NULL;
    while (c < k && q != NULL)
    {
        next = q->ptr;
        q->ptr = prev;
        prev = q;
        q = next;
        c++;
    }
    if (next != NULL)
    {
        (head)->ptr = reversenode(next, k);
    }
    return prev;
}
bool iseven(int a)
{
    if (a % 2 == 0)
    {
        return true;
    }
    return false;
}
void reverseKnode(node **head, int k)
{
    *head = reversenode(*head, k);
}
node *evenafterodd(node *head)
{
    node *dummy = new node(0);
    node *q = dummy;
    node* e=head;
    node* r=head;
    display(head);
    while (r != nullptr)
    {
        if (!iseven(r->data))
        {
            dummy->ptr=r;
            dummy=dummy->ptr;
        }
        r = r->ptr;
    }
    display(head);
    display(e);
    while (e != nullptr)
    {
        if (iseven(e->data))
        {
            dummy->ptr=e;
            // cout<<"ff";
            dummy=dummy->ptr;
        }
        e =e->ptr;
    }
    // node* w=dummy;
    // dummy=dummy->ptr;
    // delete w;
    return q;
}
int main()
{
    node *head = new node(0);
    head = NULL;
    // append(&head,1);
    // append(&head,6);
    insertAtHead(&head, 3);
    insertAtHead(&head, 5);
    display(head);
    append(&head, 7);
    append(&head, 8);
    append(&head, 9);
    // display(head);
    insertAtIndex(&head, 10, 3);
    display(head);
    // length(head);
    // deleteKEY(&head, 5);
    // deleteIndex(&head, 1);
    // display(head);
    // reverse(&head);
    // display(head);
    // reverseKnode(&head, 3);
    // display(head);
    // cout<<"HEllo";*
    display(evenafterodd(head));
    return 0;
}