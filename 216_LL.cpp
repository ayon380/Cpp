#include <stdio.h>
#include <stdlib.h>
struct node
{
    char data;
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
void insert(struct node **head, int index, char data)
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
        int c = 1;
        while (c < index && q->next != NULL)
        {
            q = q->next;
            c++;
        }
        struct node *w = q->next->next;
        free(q->next);
        q->next = w;
    }
}
void display(struct node *head)
{
    while (head != NULL)
    {
        printf("%c -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
void repeat(struct node *head)
{
    struct node *q;
    q = head;
    char s[256] = {0};
    while (q != NULL)
    {
        s[q->data - '0']++;
        q = q->next;
    }
    for (int i = 0; i < 256; i++)
    {
        if (s[i] > 1)
        {
            printf("%c", i + '0');
        }
    }
}
int main()
{
    struct node *head;
    head = NULL;
    int n;
    char a;
    printf("Enter the no of nodes : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &a);
        insert(&head, i, a);
    }
    display(head);
    repeat(head);
    return 0;
}
