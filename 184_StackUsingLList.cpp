#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void push(Node **head)
{
    int a;
    cout << "Enter the value to be pushed : ";
    cin >> a;
    Node *q = new Node();
    Node *w = new Node();
    w = *head;
    q->data = a;
    q->next = NULL;
    if (*head == NULL)
    {
        *head = q;
        return;
    }
    while (w->next != NULL)
    {
        w = w->next;
    }
    (w)->next = q;
}
void pop(Node **head)
{
    if(*head == NULL)
    {
        cout<<"Stack is empty!"<<endl;
        return;
    }
    Node *q = new Node();
    q = *head;
    while (q->next->next != NULL)
    {
        q = q -> next;
    }
    Node* w=new Node();
    w=q->next;
    delete w;
    q->next= NULL;
}
void peek(Node * head){
    while (head->next != NULL)
    {
        head = head->next;
    }
    cout<<"The Peek Element: "<<head->data<<endl;
}
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL";
}
int main()
{
    Node *head = new Node();
    head = NULL;
    while (1)
    {
        int n;
        cout << "Enter 1 to push, 2 to pop, 3 to peek, 4 to display ,5 to exit \n";
        cin >> n;
        if (n == 1)
        {
            push(&head);
        }
        else if (n == 2)
        {
            pop(&head);
        }
        else if (n == 3)
        {
            peek(head);
        }
        else if (n == 4)
        {
            display(head);
        }
        else
        {
            return 1;
        }
    }
    return 0;
}