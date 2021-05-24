#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//find the value of polynominal, if 'x' is given

struct node
{
    int coef;
    int degree;
    struct node *next;
};

typedef struct node Node;
typedef Node* list;


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
            coef = (-1) * coef;
        insert(head, coef, degree);
    }
    return 0;
}

int value(list head, int x)
{
    int ans = 0, d = 1, flag = 0;
    while(head != NULL)
    {
        if(head -> coef < 0)
            flag = 1;
        else
            flag = 0;
        for(int m = 1; m <= head -> degree; m++)
        {
            d *= x;
        }
        if(flag == 1)
            ans -= (head -> coef) * d;
        else
            ans += (head -> coef) * d;
        head = head -> next;
        flag = 0;
        d = 1;
    }
    return ans;
}


int main() {
    int x;
    printf("print polynominal:\n");
    list head = NULL;
    if(read_one(&head))
        return 0;
    printf("print x:\n");
    scanf("%d", &x);
    printf("answer: %d\n", value(head, x));
    free(head);
    return 0;
}

