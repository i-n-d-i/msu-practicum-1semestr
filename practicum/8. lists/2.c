#include <stdio.h>
#include <stdlib.h>
//переместить первый элемент списка в конец  

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

//перемещает первый элемент списка в конец
void displacement(list *headptr)
{   
    if(*headptr != NULL && (*headptr) -> next != NULL)
    {
	list tail = *headptr;
        while(tail -> next != NULL)
	{
            tail = tail -> next;
	}
        tail -> next = *headptr;
        list t = (*headptr) -> next;
        (*headptr) -> next = NULL;
        *headptr = t;
    }
}
    

int main()
{
    int n, x;
    printf("how many elements in list?\n");
    scanf("%d", &n);
    list head = NULL;
    printf("print this elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        pushback(&head, x);
    }
    displacement(&head);
    printlist(head);
    printf("\n");
    return 0;
}
                          

