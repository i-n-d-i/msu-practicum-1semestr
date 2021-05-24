#include <stdio.h>
//дано n, далее n натуральных чисел. вывести последнюю цифру каждого из них

int main()
{
    int n, a, i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        printf("%d\n", a % 10);
    }
    return 0;
}
