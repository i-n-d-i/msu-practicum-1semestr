#include <stdio.h>
#include <stdlib.h>

//all functions for lists

struct node 
{
    int el;
    struct node *next;
};

typedef struct node Node;
typedef Node *list;

//в начало
void pushfront(list *headptr, int x)
{
    list p = malloc(sizeof(Node));
    p -> el = x;
    p -> next = *headptr;
    *headptr = p;
}

//в любое место
void insert(list *headptr, int x)
{
    list p = malloc(sizeof(Node));
    p -> el = x;
    if(*headptr == NULL || x < (*headptr) -> el)
    {
        p -> next = *headptr;
        *headptr = p;
        return;
    }
    list t = *headptr;
    while(t && t -> next && t -> next -> el < x)
    {
        t = t -> next;
    }
    list a = t -> next;
    t -> next = p;
    p -> next = a;
}

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

//удаление
void delete(list *headptr, int x)
{
    if(*headptr == NULL)
    {
        printf("list is empty\n");
        return;
    }
    if((*headptr) -> el == x)
    {
        list t = *headptr;
        *headptr = t -> next;
        free(t);
    }
    list t = *headptr;
    while(t -> next && t -> next -> el < x)
    {
        t = t -> next;
        if(t -> next -> el != x || t -> next == NULL)
        {
            printf("No element\n");
            return;
        }
        list q = t -> next;
        t -> next = q -> next;
        free(q);
    }
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
     
int main()
{
    int n, m;
    printf("how many elements in list?\n");
    scanf("%d",&n);
    list head = NULL;
    printf("enter this elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        insert(&head, m);
    }
    printlist(head);
    printf("\n");
    return 0;
}


