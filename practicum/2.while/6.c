#include <stdio.h>
/*данапоследовательность целых чисел, признаком конца которой служит ноль.
вывести количество положительных элементов последовательности*/

int main()
{
    int m, k = 0;
    scanf("%d", &m);
    while(m != 0)
    {
        if(m > 0)
            k++;
        scanf("%d", &m);
    }
    printf("%d\n", k);
    return 0;
}