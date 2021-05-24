#include <stdio.h>
/*даны целые положительные числа a и b(a <= b). 
найти сумму цифр у всех чисел от a до b*/

int main()
{
    int a, b, i;
    scanf("%d %d", &a, &b);
    for(i = a; i <= b; i++)
    {
        int sum = 0;
        int k = i;
        while(k > 0)
        {
            sum += k % 10;
            k /= 10;
        }
        printf("%d ", sum);
    }
    return 0;
}

