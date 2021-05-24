#include <stdio.h>
//даны два целых числа. вычислить наименьшее общее кратное данных чисел.

int main()
{
    int a, b, i, k;
    scanf("%d %d", &a, &b);
    k = a * b;
    i = k;
    while(i > 0)
    {
        if( i % a == 0 && i % b == 0)
            k = i;
        i--;
    }
    printf("%d\n", k);
    return 0;
}

