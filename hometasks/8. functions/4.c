#include <stdio.h>
/*дано целое положительное n от 1 до 10000. найти количество 
чисел, меньших n взаимно простых с n*/

int gcd(int a, int b)
{
    while(a != b)
    {
        if(a > b)
            a = a - b;
        if(b > a)
            b = b - a;
    }
    return a;
}

int phi(int n)
{
    int m = 0;
    for(int a = 1; a < n; a++)
    {
        if(gcd(a, n) == 1)
            m++;
    }
    return m;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", phi(n));
    return 0;
}

