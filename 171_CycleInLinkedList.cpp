#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *ptr;
    node(int data) : data(data) {}
};
bool isEmpty(node **head)
{
    if (head == nullptr)
        return true;
    return false;
}
void insertAtHead(node **head, int a)
{
    node *q = new node(a);
    q->ptr = *head;
    *head = q;
}
void append(node **head, int a)
{
    node *q = new node(a);
    node *q2 = new node(0);
    q2 = *head;
    while (q2->ptr != nullptr)
    {
        q2 = q2->ptr;
    }
    q2->ptr = q;
    q->ptr = nullptr;
}
void addCycle(node **head, int index)
{
    node *q = new node(0);
    node *w = new node(0);
    int c = 1;
    q = *head;
    w = *head;
    while (c < index)
    {
        q = q->ptr;
        c++;
    }
    while (w->ptr != nullptr)
    {
        w = w->ptr;
    }
    w->ptr = q;
}
void display(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " -> ";
        head = head->ptr;
    }
    cout << "NULL";
}
int detectCycle(node *head)
{
    node *fast = head;
    node *slow = head;
    while (1)
    {
        slow = slow->ptr;
        fast = fast->ptr->ptr;
        if (slow == fast)
        {
            break;
        }
    }
    fast = head;
    while (1)
    {
        slow = slow->ptr;
        fast = fast->ptr;
        if (slow->ptr == fast->ptr)
        {
            break;
        }
    }
    return slow->data;
}
void removeCycle(node **head)
{
    node *fast = *head;
    node *slow = *head;
    while (1)
    {
        slow = slow->ptr;
        fast = fast->ptr->ptr;
        if (slow == fast)
        {
            break;
        }
    }
    fast = *head;
    while (1)
    {
        slow = slow->ptr;
        fast = fast->ptr;
        if (slow->ptr == fast->ptr)
        {
            break;
        }
    }
    slow->ptr = nullptr;
}
void displayCycle(node *head, int index)
{
    int c = 1;
    while (c < index)
    {
        c++;
        cout << head->data << " -> ";
        head = head->ptr;
    }
    cout << "NULL";
}
int main()
{
    node *head = new node(0);
    head = nullptr;
    insertAtHead(&head, 6);
    insertAtHead(&head, 9);
    append(&head, 4);
    append(&head, 7);
    append(&head, 8);
    append(&head, 1);
    append(&head, 2);
    append(&head, 4);
    display(head);
    cout << endl;
    addCycle(&head, 3);
    // display(head);
    displayCycle(head, 20);
    cout << detectCycle(head);
    cout<< endl;
    removeCycle(&head);
    cout<<endl;
    display(head);
    return 0;
}