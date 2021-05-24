#include <stdio.h>
//найти произведение цифр данного трехзначного числа

int main()
{
    int k;
    scanf("%d", &k);
    printf("%d\n", (k % 10) * (k / 10 % 10) * (k / 100));
    return 0;
}
