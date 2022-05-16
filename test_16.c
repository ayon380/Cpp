#include <stdio.h>
#include <stdlib.h>
struct node
{
    int a;
    struct node *next;
};
void creation(struct node **tail, int data)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->a = data;
    struct node *q = *tail;
    if (*tail == NULL)
    {
        ptr->next=NULL;
        *tail = ptr;
        return;
    }
    ptr->next = q;
    *tail = ptr;
}
void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ->", ptr->a);
        ptr = ptr->next;
    }
}
int main()
{
    struct node *tail = NULL;
    creation(&tail, 55);
    creation(&tail, 5);
    // creation(&tail, 6);
    display(tail);

    return 0;
}