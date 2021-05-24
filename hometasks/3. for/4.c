#include <stdio.h>
/*дано целое число n от 1 до 1000. далее n целых чисел от -1000
до 1000. найти сумму всех положительных и произведение всех
отрицательных чисел*/

int main()
{
    int n, num, i, sum = 0, mult = 1;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        if(num < 0)
            mult *= num;
        else
            sum += num;
    }
    printf("%d %d\n", sum, mult);
    return 0;
}


