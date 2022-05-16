// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

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

/* Function to get the middle of the linked list*/
struct Node *deleteMid(struct Node *head);
void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int data;
        cin >> data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n - 1; ++i)
        {
            cin >> data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        head = deleteMid(head);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends

/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
int length(Node *head)
{
    int c = 0;
    while (head != NULL)
    {
        c++;
        head = head->next;
    }
    return c;
}
Node *deleteMid(Node *head)
{
    // Your Code Here
    if (head == NULL or head->next == NULL)
    {
        return NULL;
    }
    int l=length(head);
    int mid;
    if(l%2==0)
    {
        mid=(l/2)+1;
    }
    else
    {
        mid=(l+1)/2;
    }
    Node* q=head;
    int c=0;
    while(c<mid)
    {
        c++;
        q=q->next;
    }
    Node* w=q->next;
    q->next=q->next->next;
    delete w;
    return head;
}