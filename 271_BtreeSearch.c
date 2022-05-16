#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
struct node
{
    char data[10];
    struct node *left;
    struct node *right;
};
struct node *newnode(char name[])
{
    struct node *q = (struct node *)malloc(sizeof(struct node));
    strcpy(q->data, name);
    q->left = NULL;
    q->right = NULL;
    return q;
}
void build(struct node *root)
{
    char names[15][10] = {"rahul", "ajay", "amit", "riya", "naina", "zovi", "aru",
                          "rohit", "ashiya", "heena", "virat", "navya", "yogesh", "suresh"};
    root->left = newnode(names[0]);
    root->left->left = newnode(names[1]);
    root->left->right = newnode(names[2]);
    root->left->left->left = newnode(names[3]);
    root->left->left->right = newnode(names[4]);
    root->left->right->left = newnode(names[5]);
    root->left->right->right = newnode(names[6]);
    root->right = newnode(names[7]);
    root->right->left = newnode(names[8]);
    root->right->right = newnode(names[9]);
    root->right->left->left = newnode(names[10]);
    root->right->left->right = newnode(names[11]);
    root->right->right->left = newnode(names[12]);
    root->right->right->right = newnode(names[13]);
}
void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%s\n", root->data);
    preorder(root->left);
    preorder(root->right);
}
static bool flag = false;
void search(struct node *root, char name[])
{
    if (root == NULL)
    {
        printf("Name is not present");
    }
    else
    {
        if (strcmp(root->data, name) == 0)
        {
            flag = true;
            return;
        }
        if (flag == false && root->left != NULL)
        {
            search(root->left, name);
        }
        if (flag == false && root->right != NULL)
        {
            search(root->right, name);
        }
    }
}
int main()
{
    char c[] = "sonam";
    char name[10];
    scanf("%s", name);
    struct node *root = newnode(c);
    build(root);
    printf("Printing tree preorder traversal:\n");
    preorder(root);
    search(root, name);
    if (flag)
    {
        printf("Yes, name is present");
    }
    else
    {
        printf("Name is not present");
    }
    return 0;
}
