// { Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
// } Driver Code Ends


/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/


Node *findIntersection(Node *head1, Node *head2)
{
    // Your Code Here
    Node *q = head1;
    Node *q2 = head2;
    Node *root = NULL;
    Node *r1 = root;
    int arr1[1000000] = {0};
    int arr2[1000000] = {0};
    while (q != NULL)
    {
        arr1[q->data]++;
        q = q->next;
    }
    while (q2 != NULL)
    {
        arr2[q2->data]++;
        q2 = q2->next;
    }
    for (int i = 0; i < 1000000; i++)
    {
        if (arr1[i] >= 1 && arr2[i] >=1)
        {
            cout<<i<<" ";
        }
    }
    return NULL;
}