#include <stdio.h>
/*вывести все цифры данного неотрицательного целого числа
через пробел с сохранением порядка*/

void digit(int n)
{
    if(n < 10)
        printf("%d ", n);
    else
    {
        digit(n / 10);
        printf("%d ", n % 10);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    digit(n);
    return 0;
}
