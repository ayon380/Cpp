// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
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

// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution
{
public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        // Your code here
        stack<int> s1;
        Node *q1 = head;
        Node *q2 = head;
        while (q1 != NULL)
        {
            q1 = q1->next;
            s1.push(q1->data);
        }
        int c = 0;
        while (q2->next != NULL)
        {
            q2 = q2->next;
            if (q2->data == s1.top())
            {
                s1.pop();
            }
            else
            {
                c = 1;
            }
        }
        if (c == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
    int T, i, n, l, firstdata;
    cin >> T;
    while (T--)
    {

        struct Node *head = NULL, *tail = NULL;
        cin >> n;
        // taking first data of LL
        cin >> firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for (i = 1; i < n; i++)
        {
            cin >> l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        Solution obj;
        cout << obj.isPalindrome(head) << endl;
    }
    return 0;
}

// } Driver Code Ends