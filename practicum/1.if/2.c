#include <stdio.h>
//вывести максимальное трехзначное число, кратное k

int main()
{
    int k;
    scanf("%d", &k);
    printf("%d\n", k * (999 / k));
    return 0;
}
