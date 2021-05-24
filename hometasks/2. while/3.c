#include <stdio.h>
//перевести число в двоичную систему с обратной записью цифр

int main()
{
    int n, k;
    scanf("%d", &n);
    while(n >= 1)
    {
        k = n % 2;
        n /= 2;
        printf("%d", k);
    }
    printf("\n");
    return 0;
}
        
