#include <stdio.h>
/*дано n, далее n целых чисел. вывести позиции всех нечетных 
элементов и сумму всех четных элементов*/

int main()
{
    int a[1000], n, sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
            printf("%d ", i);
        else
            sum += a[i];
    }
    printf("%d\n", sum);
    return 0;
}

