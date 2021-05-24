#include <stdio.h>
//выводит вторую цифру после запятой

int main()
{
    double a;
    int b;
    scanf("%lf", &a);
    b = (int)(a * 100);
    printf("%d\n", b % 10);
    return 0;
}
