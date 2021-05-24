#include <stdio.h>
/*вернуть последние три цифры a^b, a,b - натуральные. ведущие нули
результата можно опустить*/

int three_digits(int a, int b)
{
    if(b == 0)
        return 1;
    else
        return a* three_digits(a, b - 1) % 1000;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", three_digits(a, b));
    return 0;
}


