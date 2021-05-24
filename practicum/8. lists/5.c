#include <stdio.h>
#include <stdlib.h>
//найти максимальный элемент списка(не рекурсивный вариант)

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
 
//находит максимальный элемент
int max(list head)
{
    if(head != NULL)
    {
        int max = head -> el;
        while(head != NULL)
        {
            if((head -> el) > max)
                max = head -> el;
            head = head -> next;
        }
        return max;
    }
    return -1;
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
    printf("%d\n", max(head));
    return 0;
}
