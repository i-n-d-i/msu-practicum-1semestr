#include <stdio.h>
#include <stdlib.h>
//найти входит ли число k в список (не рекурсивный вариант)

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

//находит входит ли число k в список
void k_list(list head, int k)
{
    while(head != NULL)
    {
        if(head -> el == k)
        {
            printf("yes\n");
            return;
        }
        head = head -> next;
    }
    printf("no\n");
}


int main()
{
    int n, x;
    int k;
    scanf("%d", &n);
    list head = NULL;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        pushback(&head, x);
    }
    scanf("%d", &k);
    k_list(head, k);
    return 0;
}
