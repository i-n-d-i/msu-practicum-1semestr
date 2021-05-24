#include <stdio.h>
/*написать функцию, возвращающую сумму квадратов цифр данного числа. 
используя ее, найти максимальное число, не превосходящее данного N, сумма
квадратов цифр которого равна данному K*/

int sum(int n)
{
    int m = 0;
    while(n != 0)
    {
        m += (n % 10) * (n % 10);
        n /= 10;
    }
    return m;
}

int main()
{
    int N, K, ans = -1;
    scanf("%d %d", &N, &K);
    for(int i = N; i >= 0; i--)
    {
        if(sum(i) == K)
        {
            ans = i;
            break;
        }
    }
    if(ans != -1)
        printf("%d\n", ans);
    else
        printf("No such number\n");
    return 0;
}

