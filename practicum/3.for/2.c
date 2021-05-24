#include <stdio.h>
//дано n, далее n натуральных чисел. вывести первую цифру каждого из них.

int main()
{
    int n, a, i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        while(a > 9)
        {
            a /= 10; 
        }
        printf("%d\n", a);
    }
    return 0;
}

