#include <stdio.h>
/*Дано натуральное число, меньшее 256 определить 
есть ли в шестнадцатеричной записи цифра "А"*/

int main()
{
    int m;
    scanf("%d", &m);
    if(m / 16 == 10 || m % 16 == 10)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}

