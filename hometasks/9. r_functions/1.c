#include <stdio.h>
/*дано целое число n от 1 до 10^9. найти произведение ненулевых цифр*/

int digits(int n)
{
    if(n < 10)
        return n;
    if(n % 10 == 0)
        return digits(n / 10);
    else
        return (n % 10) * digits(n / 10);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", digits(n));
    return 0;
}
