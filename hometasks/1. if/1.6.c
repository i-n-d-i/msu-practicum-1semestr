#include <stdio.h>
//считает сумму цифр трехзначного числа

int main() 
{
    int a, b, c;
    scanf("%d", &a);
    b = a / 10;
    c = a / 100;
    printf("%d\n", c + b % 10 + a % 10);
    return 0;
}

