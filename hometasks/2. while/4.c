#include <stdio.h>
/*дана последовательность целых положительных чисел,
которая заканчивается нулем. Найти произведение
нечетных чисел*/

int main()
{
    int number, k = 1;
    scanf("%d", &number);
    while(number != 0)
    {
        if(number % 2 != 0)
            k *= number;
        scanf("%d", &number);
    }
    printf("%d\n", k);
    return 0;
}

