#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newNode(int data)
{
    struct node *temp = new struct node;
    temp->data = data;
    temp->left = nullptr;
    temp->right = nullptr;
    return temp;
};

int sum(node *node, int k)
{
    if (node == nullptr)
    {
        return 0;
    }
    int level = 0;
    int sum = 0;
    int flag = 0;
    queue<struct node *> root;
    root.push(node);
    while (!root.empty())
    {
        int size = root.size();
        while (size--)
        {
            struct node *ptr = root.front();
            root.pop();
            if (level == k)
            {
                flag = 1;
                sum += ptr->data;
            }
            else
            {
                if (ptr->left)
                {
                    root.push(ptr->left);
                }
                if (ptr->right)
                {
                    root.push(ptr->right);
                }
            }
        }
        level++;
        if (flag == 1)
        {
            break;
        }
    }
    return sum;
}
int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    int k;
    cout << "Enter the level : ";
    cin >> k;
    cout << sum(root, k);
    return 0;
}