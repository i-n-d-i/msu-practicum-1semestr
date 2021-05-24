#include <stdio.h>
//дано целое число n. разложить его на простые множители

int main()
{
    int n, i;
    scanf("%d", &n);
    for(i = 2; i <= n; i++)
    {
        while(n % i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
    }
    return 0;
}

