#include <stdio.h>
/*дана последовательность целых чисел,
которая заканчивается нулем. 
Найти количество положительных нечетных чисел*/

int main()
{
    int number, k = 0;
    scanf("%d", &number);
    while(number != 0)
    { 
        if(number % 2 == 1)
            k++;
        scanf("%d", &number);
    }
    printf("%d\n", k);
    return 0;
}



