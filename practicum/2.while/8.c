#include <stdio.h>
#include <math.h>
/*дано натуральное n и вещественное х. найти х + х:3/3 + x^5/5 + ... + 
x^(2n+1)/(2n+1)*/

int main()
{
    int n;
    double x, sum = 0;
    scanf("%d %lf", &n, &x);
    while(n != 0)
    {
        sum += pow(x, 2 * n + 1) / (2 * n + 1);
        n--;
    }
    sum += x;
    printf("%lf\n", sum);
    return 0;
}
