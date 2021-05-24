#include <stdio.h>
#include <stdlib.h>
//вывести элементы списка через один, начиная с первого

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

//выводит элементы 
void print(list head)
{
    if(head != NULL)
    {
        printf("%d ", head -> el);
            head = head -> next;
        if(head != NULL)
            print(head -> next);
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
    print(head);
    printf("\n");
    return 0;
}
