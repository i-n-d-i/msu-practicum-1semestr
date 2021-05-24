#include <stdio.h>
//выводит в две строки разряд единиц и разряд десятков

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n", a % 10);
    a = a / 10;
    printf("%d\n", a % 10);
    return 0;
}

