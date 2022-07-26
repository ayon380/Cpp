// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* Link list node */
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

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}

// } Driver Code Ends
// User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
public:
	void insert(Node **root, int item)
	{
		Node *temp = (struct Node *)malloc(sizeof(struct Node));
		Node *ptr;
		temp->data = item;
		temp->next = NULL;

		if (*root == NULL)
			*root = temp;
		else
		{
			ptr = *root;
			while (ptr->next != NULL)
				ptr = ptr->next;
			ptr->next = temp;
		}
	}

	Node *insertionSort(struct Node *head_ref)
	{
		// code here
		struct Node *q = head_ref;
		int min = q->data;
		vector<int> v;
		while (q != NULL)
		{
			v.push_back(q->data);
			q = q->next;
		}
		sort(v.begin(), v.end());
		for (auto i : v)
		{
			cout << i << " ";
		}
		struct Node *res = NULL;
		for (int i = 0; i < v.size(); i++)
		{
			insert(&res, v[i]);
		}
		return res;
	}
};

// { Driver Code Starts.
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < n; i++)
		{
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		Solution ob;

		head = ob.insertionSort(head);
		printList(head);

		cout << "\n";
	}
	return 0;
} // } Driver Code Ends