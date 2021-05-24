#include <stdio.h>
//дано натуральное число n. посчитать количество и сумму делителей числа n

int main()
{
    int n, i, k = 0, sum = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            k++;
            sum += i;
        }
    }
    printf("%d %d\n", k, sum);
    return 0;
}
