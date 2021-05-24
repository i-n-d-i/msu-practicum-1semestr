#include <stdio.h>
//если среди чисел есть хоть одно отрицательное, то найти их сумму, иначе найти их произведение

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if(x < 0 || y < 0 || z < 0)
        printf("%d\n", x + y + z);
    else
        printf("%d\n", x * y * z);
    return 0;
}
