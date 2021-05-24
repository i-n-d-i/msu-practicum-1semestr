#include <stdio.h>
//находит деление двух челых чисел с точностью 2 знака после запятой

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.2lf\n", a / b);
    return 0;
}
