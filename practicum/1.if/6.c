#include <stdio.h>
/*даны три целых числа. вывести их сумму, если среди них есть 
хотя бы одно, кратное 10, и их произведение иначе*/

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a % 10 == 0 || b % 10 == 0 || c % 10 == 0)
        printf("%d\n", a + b + c);
    else
        printf("%d\n", a * b * c);
    return 0;
}
