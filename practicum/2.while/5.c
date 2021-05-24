#include <stdio.h>
/*даны натуральные a и b. не используя операций деления, вычислить 
остаток от деления a на b*/

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    while(a >= b)
    {
        a -= b;
    }
    printf("%d\n", a);
    return 0;
}
