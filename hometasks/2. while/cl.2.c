#include <stdio.h>
//найти значение y = 1+ x/1! + x^2/2! + x^3/3! + x^4/4! + ... + x^n/n!

int main()
{
    double x;
    int n;
    scanf("%lf %d", &x, &n);
    double y = 1, i = 1, a = 1;
    while(i <= n)
    {
        a *= x/i;
        y += a;
        i++;
    }
    printf("%lf\n", y);
    return 0;
}
