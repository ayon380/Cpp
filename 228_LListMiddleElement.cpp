// { Driver Code Starts
// Initial template for C++

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
void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

// } Driver Code Ends
/* Link list Node
struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */
class Solution
{
public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        Node *q;
        q = head;
        int c = 0, m = 0;
        while (q != NULL)
        {
            c++;
            q = q->next;
        }
        int mid = 0;
        if (c % 2 == 0)
        {
            mid = c / 2;
            m = 1;
        }
        else
        {
            mid = (c + 1) / 2;
            m = 0;
        }
        int i = 1;
        q = head;
        while (q != NULL && i < mid && m == 0)
        {
            i++;
            q = q->next;
        }
        if (m == 1)
        {
            mid++;

            while (q != NULL && i < mid)
            {
                i++;
                q = q->next;
            }
        }
        return q->data;
    }
};

// { Driver Code Starts.

int main()
{
    // code
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int data;
        cin >> data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N - 1; ++i)
        {
            cin >> data;
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        cout << ob.getMiddle(head) << endl;
    }
    return 0;
}
// } Driver Code Ends