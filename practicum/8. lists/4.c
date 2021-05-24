#include <stdio.h>
#include <stdlib.h>

/*Сделать два новых списка, в одном должны быть все четные элементы 
начального списка, во втором все нечетные. Порядок сохранить.*/
  
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

int main()
{
    int n, x;
    printf("how many elements in list?\n");
    scanf("%d", &n);
    list head = NULL;
    list head1 = NULL;
    list head2 = NULL;
    printf("print this elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        pushback(&head, x);
    }
    while(head != NULL)
    {
        if((head -> el) % 2 == 0)
            pushback(&head1, head -> el);
        else
            pushback(&head2, head -> el);
        head = head -> next;
    }
    printlist(head1);
    printf("\n");
    printlist(head2);
    printf("\n");
    return 0;
}
 

