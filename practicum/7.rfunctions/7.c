#include <stdio.h>
/*вернуть количество единиц в двоичной записи данного
неотрицательного целого числа*/

int onebinary(int n)
{
    if(n == 0)
        return 0;
    if(n % 2 == 1)
        return 1 + onebinary(n / 2);
    else
        return onebinary(n / 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", onebinary(n));
    return 0;
}

