#include <stdio.h>
//вычисляет координаты вершины параболы

int main()
{
    double a, b, c, x, y;
    scanf("%lf %lf %lf", &a, &b, &c);
    x = -b / (2 * a);
    y = x * x * a + b * x + c;
    printf("%.2f %.2f\n", x, y);
    return 0;
}

