#include <stdio.h>
/*вернуть максимальный показатель степени тройки, на
которую делится данное число*/

int degree(int n)
{
    if(n == 0)
        return -1;
    if(n % 3 == 0)
        return 1 + degree(n / 3);
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", degree(n));
    return 0;
}
