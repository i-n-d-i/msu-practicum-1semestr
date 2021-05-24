#include <stdio.h>
//дано целое положительное n от 1 до 20. напечатать n!

int main()
{
    int n, i;
    long long int fact = 1;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("%lld\n", fact);
    return 0;
}

