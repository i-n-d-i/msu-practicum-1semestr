#include <stdio.h>
//дано пятизначное число. Вывести его цифру разряда тысяч.

int main()
{
    int m;
    scanf("%d", &m);
    printf("%d\n", m / 1000 % 10);
    return 0;
}

