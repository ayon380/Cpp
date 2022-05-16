#include <stdio.h>
#include <stdlib.h>
struct node
{
    int stno;
    float freq;
    char name[50];
    struct node *prev;
    struct node *next;
};
void add(struct node **head, char namee[], int sno, float fre)
{
    struct node *q = *head;
    struct node *q1 = (struct node *)malloc(sizeof(struct node));
    q1->stno = sno;
    q1->freq = fre;
    int i = 0;
    for (int i = 0; i < 50; i++)
    {
        q1->name[i] = namee[i];
    }
    q1->next = NULL;
    if (*head == NULL)
    {
        q1->prev = NULL;
        *head = q1;
        return;
    }
    while (q->next != NULL)
    {
        q = q->next;
    }
    q->next = q1;
    q1->prev = q;
}
void printt(struct node *head)
{
    printf("Station %d %s  %.1f\n", head->stno, head->name,head->freq);
}
int main()
{
    struct node *head = NULL;
    int n;
    printf("Enter the no of stations : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        float fre;
        int sno;
        char a[50];
        printf("Enter the radio no : ");
        scanf("%d", &sno);
        printf("Enter the station name : ");
        scanf("%s", a);
        printf("Enter the frequency : ");
        scanf("%f", &fre);
        add(&head, a, sno, fre);
    }
    struct node *w = head;
    int c = 0;
    while (1)
    {
        int a;
        scanf("%d", &a);
        c++;
        if (a == 1)
        {
            if (w->next == NULL)
            {
                printf("No Next station to play\n");
                continue;
            }
            if (c == 1)
            {
                printt(w);
                continue;
            }
            w = w->next;
            printt(w);
        }
        else if (a == 2)
        {
            if (w->prev == NULL)
            {
                printf("No Previous station to play\n");
                continue;
            }
            w = w->prev;
            printt(w);
        }
        else if (a == 3)
        {
            w = head;
            printt(w);
        }
        else if (a == 4)
        {
            return 0;
        }
        else
        {
            printf("Wrong Choice!!");
        }
    }
    return 1;
}