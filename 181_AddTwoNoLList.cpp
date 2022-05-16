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
node *NodeReverse(node *n)
{
    node *q = n;
    node *w = NULL;
    node *t = NULL;
    while (q != NULL)
    {
        w = q->ptr;
        q->ptr = t;
        t = q;
        q = w;
    }
    display(t);
    return t;
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

node *addee(node *n1, node *n2)
{
    vector<int> v1, v2;
    node *q1 = n1;
    node *q2 = n2;
    node *n3 = new node(-1);
    node *q = n3;
    while (q1 != NULL)
    {
        v1.push_back(q1->data);
        q1 = q1->ptr;
    }
    while (q2 != NULL)
    {
        v2.push_back(q2->data);
        q2 = q2->ptr;
    }
    int c = 0;
    int s1 = 0, s2 = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        s1 += v1[i] * (pow(10, i));
    }
    for (int i = 0; i < v2.size(); i++)
    {
        s2 += v2[i] * (pow(10, i));
    }
    int s3 = s1 + s2 + 2;
    int d;
    cout << s3 << endl;
    // display(n3);
    node *w;
    while (s3 != 0)
    {
        d = s3 % 10;
        cout << d << endl;
        q->data = d;
        w = q;
        q = q->ptr;
        // cout<<d << endl;
        s3 /= 10;
    }
    w->ptr=NULL;
    display(n3);
    return n3;
}
int main()
{
    node *head = new node(0);
    head = NULL;
    insertAtHead(&head, 2);
    append(&head, 4);
    append(&head, 3);
    display(head);
    node *head1 = new node(0);
    head1 = NULL;
    insertAtHead(&head1, 5);
    append(&head1, 6);
    append(&head1, 4);
    display(head1);
    node* u=(addee(head, head1));
    cout<<u->data<<endl;
    return 0;
}