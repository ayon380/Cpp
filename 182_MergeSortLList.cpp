#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL"<< endl;
}
void insert(Node **head, int a)
{
    Node *q = new Node();
    q->data = a;
    q->next = *head;
    *head = q;
}
Node *merge(Node *a, Node *b)
{
    Node *q = new Node();
    Node *q2 = new Node();
    q2 = q;
    while (a != NULL && b != NULL)
    {
        if (a->data <= b->data)
        {
            q->next = a;
            a = a->next;
        }
        else
        {
            q->next = b;
            b = b->next;
        }
        q = q->next;
    }
    while (a != NULL)
    {
        q->next = a;
        a = a->next;
        q = q->next;
    }
    while (b != NULL)
    {
        q->next = b;
        b = b->next;
        q = q->next;
    }
    return q2->next;
}
Node *middle(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;

    while (slow->next != NULL && (fast != NULL && fast->next != NULL))
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
Node *sort(Node *head)
{
    if(head->next == NULL)
    {
        return head;
    }
    Node *mid = new Node();
    Node *last = new Node();
    mid = middle(head);
    last=mid->next;
    mid->next= NULL;
    return (merge(sort(head),sort(last)));
}
int main()
{
    Node *head = NULL;
    insert(&head, 4);
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    insert(&head, 5);
    display(head);
    display(sort(head));
    return 0;
}