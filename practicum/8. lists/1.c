#include <stdio.h>
#include <stdlib.h>
//заменить каждый элемент списка на его квадрат

struct node
{   
    int el;
    struct node *next;
}; 

typedef struct node Node;
typedef Node *list;

//в конец
void pushback(list *headptr, int x)
{
    list p = malloc(sizeof(Node));
    p -> el = x;
    p -> next = NULL;
    list t = *headptr;
    if(*headptr == NULL)
    {
        *headptr = p;
            return;
    }
    while(t -> next != NULL)
    {
        t = t -> next;
    }
    t -> next = p;
}

//выведение на экран
void printlist(list head)
{
    if(head != NULL)
    {
        printf("%d ", head -> el);
        printlist(head -> next);
    }
}

//возведение в квадрат
void sqr(list head)
{
    if(head != NULL)
    {
        head -> el = (head -> el) * (head -> el);
        sqr(head -> next);
    }
}

int main()
{
    int n, x;
    scanf("%d", &n);
    list head = NULL;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        pushback(&head, x);
    }
    sqr(head);
    printlist(head);
    printf("\n");
    return 0;
}




