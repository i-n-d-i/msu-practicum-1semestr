#include <stdio.h>
//если х принадлежит множеству [0;10)U(20;30], то вывести на экран yes, иначе вывести no 

int main()
{
    int x;
    scanf("%d", &x);
    if((x >= 0) && (x < 10) || (x > 20) && (x <= 30))
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
