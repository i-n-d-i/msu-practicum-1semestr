#include <stdio.h>
/*написать функцию, которая возвращает сумму делителей данного натурального числа.
испоьзуя ее, проверить, является ли данная пара различных чисел дружественной*/

int sum(int n)
{
    int k = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            k += i;
    }
    return k;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if(n == sum(m) - m && sum(n) - n == m)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
