#include <stdio.h>
//считает среднее арифметическое и среднее гармоническое 3 чисел с точностью 2 знака после запятой

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%.2f %.2f\n", (a + b + c) / 3, 3 / (1 / a + 1 / b + 1 / c));
    return 0;
}
