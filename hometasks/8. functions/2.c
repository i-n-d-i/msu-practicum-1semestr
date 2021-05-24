#include <stdio.h>
#include <math.h>
/*даны 3 вещественных числа a, b, c. проверить можно ли
составить треугольник с такими сторонами. Если можно, то
найти его площадь, иначе вывести ноль*/

double square(double a, double b, double c)
{
    double p, s;
    if(a < b + c && c < a + b && b < a + c)
    {
        p = (a + b + c) / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        return s;
    }
    return 0;
}
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%.1lf\n", square(a, b, c));
    return 0;
}

