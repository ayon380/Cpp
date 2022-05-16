#include <stdio.h>
#include <stdlib.h>

//declaring the visited arrays
int visited_bfs[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
int visited_dfs[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
//creating the adjacency representation of graph
int Graph[9][9] = {{0, 1, 0, 1, 0, 0, 0, 0, 1},
               {1, 0, 0, 0, 0, 0, 0, 1, 0},
               {0, 0, 0, 1, 0, 1, 0, 1, 0},
               {1, 0, 1, 0, 1, 0, 0, 0, 0},
               {0, 0, 0, 1, 0, 0, 0, 0, 1},
               {0, 0, 1, 0, 0, 0, 1, 0, 0},
               {0, 0, 0, 0, 0, 1, 0, 0, 0},
               {0, 1, 1, 0, 0, 0, 0, 0, 0},
               {1, 0, 0, 0, 1, 0, 0, 0, 0}};

//creating the queue
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

//function to check if queue is empty
int isEmpty(struct queue *q)
{
    //if front equal to rear
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

//function to check if queue is full
int isFull(struct queue *q)
{
    //if rear has reached the end
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

//function to enqueue in the queue
void enqueue(struct queue *q, int val)
{
    q->r++;
    q->arr[q->r] = val;
}

//function to dequeue from the queue
int dequeue(struct queue *q)
{
    int a;
    q->f++;
    a = q->arr[q->f];
    return a;
}

//function for BFS Traversal
void BFS()
{
    //creating the queue
    struct queue *q;
    //allocating the memory for the queue and initializing the values
    q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 100;
    q->f = q->r = 0;
    q->arr = (int *)malloc(q->size * sizeof(int));
    int node;
    //setting the initial node as 0
    int i = 0;
    //printing the first node
    printf("%d, ", i);
    //putting the nodes in visited array
    visited_bfs[i] = 1;
    
    enqueue(q, i);
    while (!isEmpty(q))
    {
        int node = dequeue(q);
        for (int j = 0; j < 9; j++)
        {
            if (Graph[node][j] == 1 && visited_bfs[j] == 0)
            {
                printf("%d, ", j);
                visited_bfs[j] = 1;
                enqueue(q, j);
            }
        }
    }
}

//function for DFS Traversal
void DFS(int i)
{
    printf("%d, ", i);
    visited_dfs[i] = 1;
    for (int j = 0; j < 9; j++)
    {
        if (Graph[i][j] == 1 && !visited_dfs[j])
        {
            DFS(j);
        }
    }
}

int main()
{
    int ch;
    while (1)
    {
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("DFS Traversal: ");
            DFS(0);
            printf("\n");
            break;
        case 2:
            printf("BFS Traversal: ");
            BFS();
            printf("\n");
            break;
        case 3:
            exit(0);
            break;
        case 4:
            printf("Wrong choice!! Please enter correct choice");
            break;

        default:
            break;
        }
        printf("\n");
    }
    return 0;
}