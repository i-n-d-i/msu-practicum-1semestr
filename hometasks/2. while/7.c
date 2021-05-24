#include <stdio.h>
//дано целое n. вывести максимальную цифру n

int main()
{
    long long int n, max;
    scanf("%lld", &n);
    max = n % 10; 
    n /= 10;
    while(n > 0)
    {
        if(n % 10 > max)
            max = n % 10;
        n /= 10;
    }
    printf("%lld\n", max);
    return 0;
}

    
    
