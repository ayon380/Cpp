#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *ptr;
    node()
    {
        ptr = NULL;
    }
    node(int a)
    {
        ptr=NULL;
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
void reverseKnode(node **head, int k)
{
    *head = reversenode(*head, k);
}
node *Merge(node *ptr1, node *ptr2)
{
    node *dummy=new node(-1);
    node *ptr3 =dummy;
    // dummy.ptr=NULL;
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data < ptr2->data)
        {
            ptr3->ptr = ptr1;
            
            ptr1 = ptr1->ptr;
        }
        else
        {
            ptr3->ptr = ptr2;
            ptr2 = ptr2->ptr;
        }
        // cout<<ptr3->data<<endl;
        ptr3 = ptr3->ptr;
    }
    // cout<<ptr3->data<<endl;
    // display(dummy->ptr);
    while(ptr1!=NULL)
    {
        ptr3->ptr=ptr1;
        ptr1=ptr1->ptr;
        ptr3=ptr3->ptr;
    }
    while(ptr2!=NULL)
    {
        ptr3->ptr=ptr2;
        ptr2=ptr2->ptr;
        ptr3=ptr3->ptr;
    }
    node*q=dummy;
    dummy=dummy->ptr;
    delete q;
    return dummy;
}
int main()
{
    node *ptr1 = NULL;
    node *ptr2 = NULL;
    node *ptr3 = NULL;
    append(&ptr1, 1);
    append(&ptr1, 3);
    append(&ptr1, 5);
    append(&ptr1, 7);
    append(&ptr1, 9);
    append(&ptr2, 2);
    append(&ptr2, 4);
    append(&ptr2, 6);
    append(&ptr2, 8);
    append(&ptr2, 10);
    append(&ptr2, 11);
    display(ptr1);
    display(ptr2);

    display(Merge(ptr1, ptr2));
    return 0;
}