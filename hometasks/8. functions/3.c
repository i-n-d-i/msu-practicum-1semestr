#include <stdio.h>
/*дано целое положительное число n от 1 до 1000000. найти
количество простых чисел, не превосходящих n*/

int isprime(int n)
{
    if(n == 1)
        return -1;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return 1;
    }
    return 0;
}
int quan(int n)
{
    int m = 0;
    for(int i = 2; i <= n; i++)
    {
        if(isprime(i) == 0)
            m++;
    }
    return m;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", quan(n));
    return 0;
}

