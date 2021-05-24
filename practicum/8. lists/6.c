#include <stdio.h>
#include <stdlib.h>
//найти максимальный элемент списка (рекурсивный вариант)
  
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
        if(head -> next == NULL)
            return head -> el;
        if((head -> el) > max(head -> next))
            return head -> el;
        else
            return max(head -> next);
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



