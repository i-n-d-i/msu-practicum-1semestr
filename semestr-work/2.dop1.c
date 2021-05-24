#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//additional task one: how many pairs of equal polynoms?

struct node
{
    int coef;
    int degree;
    struct node *next;
};

typedef struct node Node;
typedef Node* list;


void printlist(list head)
{
    if(head != NULL)
    {
        if(head -> coef != 1)
        {
            if(head -> coef > 0)
                printf("+");
            printf("%d", head -> coef);
        }
        if(head -> degree != 0)
        {
            printf("x");
            if(head -> degree > 1)
                printf("^%d", head -> degree);
        }
        printlist(head -> next);
    }
}

void insert(list *headptr, int c, int d)
{
    list p = malloc(sizeof(Node));
    p-> coef = c;
    p -> degree = d;
    if(*headptr == NULL || d > (*headptr) -> degree)
    {
        p -> next = *headptr;
        *headptr = p;
        return;
    }
    list t = *headptr;
    while(t && t -> next && t -> next -> degree > d)
        t = t -> next;
    list a = t -> next;
    t -> next = p;
    p -> next = a;
}

//check for extra symbols
int check(char ch)
{
    if((ch >= '!' && ch <= '*') || ch == ',' || ch == '.' || ch == '/')
    {
        printf("Error: not correct input\n");
        return 1;
    }
    if((ch >= ':' && ch <= ']') || (ch >= '_' && ch <= 'w') || (ch >= 'y' && ch <= '~'))
    {
        printf("Error: not correct input\n");
        return 1;
    }
    return 0;
}

//reads polynominal
int read_one(list* head)
{
    char ch;
    int flag, coef, degree;
    while(ch != ' ')
    {
        coef = degree = flag = 0;
        if(ch == '-')
        {
            flag = 1;
        }
        ch = getchar();
        if(check(ch))
            return 1;
        if(ch == '\n')
        {
            ch = getchar();
            if(check(ch))
                return 1;
        }
        if(ch == '-')
        {
            flag = 1;
            ch = getchar();
            if(check(ch))
                return 1;
        }
        if(ch == '+')
        {
            ch = getchar();
            if(check(ch))
                return 1;
        }
        if(ch >= '0' && ch <= '9')
        {
            do {
                coef = (coef * 10) + (ch - '0');
                ch = getchar();
                if(check(ch))
                    return 1;
            } while(ch >= '0' && ch <= '9');
        }
        if(coef == 0)
            coef = 1;
        if(ch == 'x')
        {
            ch = getchar();
            if(check(ch))
                return 1;
            if(ch == '^')
            {
                ch = getchar();
                if(check(ch))
                    return 1;
                do {
                    degree = degree * 10 + (ch - '0');
                    ch = getchar();
                    if(check(ch))
                        return 1;
                } while(ch >= '0' && ch <= '9');
            }
            else
                degree = 1;
        }
        else
            degree = 0;
        if(flag == 1)
            coef = -coef;
        insert(head, coef, degree);
    }
    return 0;
}

int compare_all(list head1, list head2)
{
    while(head1 != NULL && head2 != NULL)
    {
        if((head1 -> coef != head2 -> coef) || (head1 -> degree != head2 -> degree))
            return 0;
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
    if(head1 == NULL && head2 == NULL)
        return 1;
    else
        return 0;
}

//check for identical degrees
int check_degrees(list head)
{
    for(head; head != NULL; head = head -> next)
    {
        for(head -> next; head -> next != NULL; head -> next = head -> next -> next)
        {
            if(head -> degree == head -> next -> degree)
            {
                printf("Error: not correct input\n");
                    return 1;
            }
        }
    }
    return 0;
}


int main() {
    int n, ans = 0;
    printf("How many polynom do we have to check?\n");
    scanf("%d", &n);
    list head[100];
    for(int i = 0; i < n; i++)
    {
        printf("Print polynominal:\n");
        head[i] = NULL;
        if(read_one(&head[i]))
            return 0;
    }
    for(int i = 0; i < n; i++) 
    {
        for(int j = i + 1; j < n; j++) 
        {
            if((compare_all(head[i], head[j])) == 1)
                ans++;
        }
    }
    printf("answer:%d\n", ans);
    return 0;
}

