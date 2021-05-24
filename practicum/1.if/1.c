#include <stdio.h>
//вывести являются ли числа попарно различными

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a == b || a == c || b == c)
        printf("no\n");
    else
        printf("yes\n");
    return 0;
}
