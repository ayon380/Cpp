#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int length(struct node *head)
{
    int c = 0;
    while (head != NULL)
    {
        c++;
        head = head->next;
    }
    return c;
}
void insert(struct node **head, int index, int data)
{
    int l = length(*head);
    if (index == 0)
    {
        struct node *q = (struct node *)malloc(sizeof(struct node));
        q->data = data;
        q->next = *head;
        *head = q;
    }
    else if (index > 0 && index < l)
    {
        struct node *q = (struct node *)malloc(sizeof(struct node));
        q->data = data;
        struct node *q2 = (struct node *)malloc(sizeof(struct node));
        q2 = *head;
        for (int i = 0; i < index - 1; i++)
        {
            q2 = q2->next;
        }
        q->next = q2->next;
        q2->next = q;

        // printf("jllh");
    }
    else if (index == l)
    {
        struct node *q = (struct node *)malloc(sizeof(struct node));
        q->data = data;
        struct node *q2 = (struct node *)malloc(sizeof(struct node));
        q2 = *head;
        // printf("jkh");
        while (q2->next != NULL)
        {
            q2 = q2->next;
        }
        // printf("%d", q2->data);
        q2->next = q;
        q->next = NULL;
    }
}
void deletee (struct node **head, int index)
{
    int l = length(*head);
    if (index == 0)
    {
        struct node *q;
        q = *head;
        *head = (*head)->next;
        free(q);
    }
    else if (index > 0 && index < l)
    {
        struct node *q;
        q = *head;
        int c=1;
        while (c < index && q->next != NULL)
        {
            q = q->next;
            c++;
        }
        struct node *w = q->next->next;
        free(q->next);
        q->next= w;
    }
}
void display(struct node *head)
{
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
int main()
{
    struct node *head;
    head = NULL;
    insert(&head, 0, 4);
    insert(&head, 0, 5);
    // display(head);
    insert(&head, 1, 6);
    insert(&head, 2, 8);
    // printf("%d", length(head));
    // display(head);
    insert(&head, 4, 9);
    insert(&head, 5, 1);
    insert(&head, 3, 5);
    display(head);
    deletee (&head, 0);
    display(head);
    deletee (&head, 5);
    deletee(&head,4);
    display(head);
    return 1;
}
