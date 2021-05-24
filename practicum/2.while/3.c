#include <stdio.h>
/*дано целое число. вывести максимальную степень тройки,
не превосходящую данное число*/

int main()
{
    int n, k = 1;
    scanf("%d", &n);
    while(k <= n)
    {
        k *= 3;
    }   
    printf("%d\n", k / 3);
    return 0;
}

