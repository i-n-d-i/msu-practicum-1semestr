#include <stdio.h>
/*вернуть максимальную цифру данного 
неотрицательного целого числа*/

int max_digit(int n)
{
    if(n < 10)
        return n;
    int m = max_digit(n / 10);
    if(m > n % 10)
        return m;
    else
        return n % 10;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", max_digit(n));
    return 0;
}

