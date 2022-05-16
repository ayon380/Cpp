#include <stdio.h>
#include <stdlib.h>
struct node
{
    int a;
    struct node *next;
};

void insert_head(struct node **head, int data)
{
    struct node *ptr, *tmp;

    ptr = (struct node *)malloc(sizeof(struct node));
    // if (ptr == NULL)
    // {
    //     printf(" overflow\n");
    // }
    // else
    // {
    ptr->a = data;
    if (*head == NULL)
    {
        *head = ptr; // ptr = *head;
        ptr->next = NULL;
    }
    else
    {
        ptr->next=*head;
        *head=ptr;
        tmp=*head;
        tmp=tmp->next;
        while(tmp!=*head)
        {
            tmp=tmp->next;
        }
        tmp->next
    }
}
void display(struct node *head)
{
    struct node *ptr;
    ptr = head;
    if (head == NULL)
    {
        printf("nothing to display");
    }
    else
    {

        while (ptr->next != head)
        {
            printf("%d->", ptr->a);
            ptr = ptr->next;
        }
    }
}

int main()
{
    struct node *head = NULL;
    insert_head(&head, 44);
    insert_head(&head, 4);
    insert_head(&head, 94);
    display(head);
}