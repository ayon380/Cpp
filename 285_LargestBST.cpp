// C++ program to find largest BST in a
// Binary Tree.
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data,
pointer to left child and a
pointer to right child */
struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
};

/* Helper function that allocates a new
node with the given data and NULL left
and right pointers. */
struct Node* newNode(int data)
{
	struct Node* node = new Node;
	node->data = data;
	node->left = node->right = NULL;

	return(node);
}

// Information to be returned by every
// node in bottom up traversal.
struct Info
{
	int sz; // Size of subtree
	int max; // Min value in subtree
	int min; // Max value in subtree
	int ans; // Size of largest BST which
	// is subtree of current node
	bool isBST; // If subtree is BST
};

// Returns Information about subtree. The
// Information also includes size of largest
// subtree which is a BST.
Info largestBSTBT(Node* root)
{
	if(root==NULL)
    {
        return {0,INT_MIN,INT_MAX,0,true};
    }
    else if(root->left==NULL && root->right==NULL)
    {
        return {1,root->data,root->data,1,true};
    }
    Info left=largestBSTBT(root->left);
    Info right=largestBSTBT(root->right);
    Info curr;
    curr.sz=left.sz +right.sz +1;
    if(left.isBST && right.isBST && left.max<root->data && right.min > root->data)
    {
        curr.min=min(left.min,min(right.min, root->data ));
        curr.max=max(right.max,max(left.max,root->data));
        curr.isBST=true;
        curr.ans=max(left.ans,right.ans)+1;
        return curr;
    }
    curr.isBST=false;
    curr.ans=max(left.ans,right.ans);
    return curr;
}

/* Driver program to test above functions*/
int main()
{
	/* Let us construct the following Tree
		60
	/ \
	65 70
	/
	50 */

	struct Node *root = newNode(60);
	root->left = newNode(65);
	root->right = newNode(70);
	root->left->left = newNode(50);
	printf(" Size of the largest BST is %d\n",
		largestBSTBT(root).ans);
	return 0;
}

// This code is contributed by Vivek Garg in a
// comment on below set 1.
// www.geeksforgeeks.org/find-the-largest-subtree-in-a-tree-that-is-also-a-bst/
// This code is updated by Naman Sharma
