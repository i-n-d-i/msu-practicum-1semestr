#include <stdio.h>
/*даны два целых числа a и b, причем a <= b. для каждого
числа от a до b вывести его квадрат, после чего вывести
сумму этих квадратов*/

int main()
{
    int a, b, i, k, sum = 0;
    scanf("%d %d", &a, &b);
    for(i = a; i <= b; i++)
    {
        k = i * i;
        sum += k;
        printf("%d ", k);
    }
    printf("%d ", sum);
    return 0;
}

