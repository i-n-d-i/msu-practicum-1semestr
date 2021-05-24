#include <stdio.h>
//выводит все четные делители числа n

int main()
{
    int n, i = 2;
    scanf("%d", &n);
    if(n % 2 == 0)
    {
        while(i <= n)
        {
            if(n % i == 0)
                printf("%d ", i);
            i = i + 2;
        }
    printf("\n");
    }
    else
        printf("нет четных делителей\n");
    return 0;
}
