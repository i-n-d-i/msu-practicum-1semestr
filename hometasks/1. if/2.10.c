#include <stdio.h>
#include <math.h>
//вычислить среднее гармоническое, арифметическое, геометрическое и квадратическое 3-х чисел

int main()
{
    double a, b, c, harm, arith, geom, quad;
    scanf("%lf %lf %lf", &a, &b, &c);
    harm = 3 / (1 / a + 1 / b + 1 / c);
    arith = (a + b + c) / 3;
    geom = pow((a * b * c), 1.0 / 3);
    quad = sqrt((a * a + b * b + c * c) / 3);
    printf("%.2f %.2f %.2f %.2f\n", harm, arith, geom, quad);
    return 0;
}

