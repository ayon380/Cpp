#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *ptr;
};
void push(node **list)
{
    int n;
    cout << "Enter the value : ";
    cin >> n;
    node *s = new node();
    s->data = n;
    s->ptr = *list;
    *list = s;
}
void display(node *list)
{
    while (list != NULL)
    {
        cout << (list)->data << "->";
        list = list->ptr;
    }
}
void reverse(node **list)
{
    node *prev = NULL;
    node *curr = *list;
    node *next;  
    while (curr != NULL)
    {
        next = curr->ptr;
        curr->ptr = prev;
        prev=curr;
        curr = next;
    }
    *list = prev;
}
int main()
{
    node *list = NULL;
    while (1)
    {
        int n;
        cout << "Enter 1 to push , 2 to display , 3 to reverse , 4 to exit  : ";
        cin >> n;
        if (n == 1)
        {
            push(&list);
        }
        if (n == 2)
        {
            display(list);
        }
        if (n == 3)
        {
            reverse(&list);
        }
        if (n == 4)
        {
            return 0;
        }
    }
    return 0;
}