#include <stdio.h>
//даны натуральные n и k. вывести n первых степеней числа k, начиная с единицы

int main()
{
    int n, k, i, m = 1;
    scanf("%d %d", &n, &k);
    for(i = 0; i < n; i++)
    {
        printf("%d ", m);
        m *= k;
    }
    return 0;
}


