// { Driver Code Starts
#include <iostream>

#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node *head1, struct Node *head2);

Node *inputList(int size)
{
    if (size == 0)
        return NULL;

    int val;
    cin >> val;

    Node *head = new Node(val);
    Node *tail = head;

    for (int i = 0; i < size - 1; i++)
    {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

/* Driver program to test above function*/
int main()
{
    int T, n1, n2, n3;

    cin >> T;
    while (T--)
    {
        cin >> n1 >> n2 >> n3;

        Node *head1 = inputList(n1);
        Node *head2 = inputList(n2);
        Node *common = inputList(n3);

        Node *temp = head1;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL)
            temp->next = common;

        temp = head2;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL)
            temp->next = common;

        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}

// } Driver Code Ends

/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

// Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node *head1, Node *head2)
{
    // Your Code Here
       Node *q1 = head1;
    Node *q2 = head2;
    int c1=0,c2=0;
    while(q1)
    {
        c1++;
        q1=q1->next;
    }
    while(q2)
    {
        c2++;
        q2=q2->next;
    }
    
    int dif=abs(c1-c2);
    if(c1>c2)
    {
        q1=head1;
        q2=head2;
    }
    else
    {
        q1=head2;
        q2=head1;
    }
    while(dif--)
    {
        q1=q1->next;
    }
    while(q1 and q2)
    {
        if(q1==q2)
        {
            return q1->data;
        }
        q1=q1->next;
        q2=q2->next;
    }
    return -1;
    
}
