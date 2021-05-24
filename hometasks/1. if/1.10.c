#include <stdio.h>
#include <math.h>
//находит отношение радиуса описанной и вписанной в треугольник окружностей

int main()
{
    double a, b, c, p, r, R, S;
    scanf("%lf %lf %lf", &a, &b, &c);
    p = (a + b + c) / 2;
    S = p * (p - a) * (p - b) * (p - c);
    S = sqrt(S);
    R = a * b * c / (4 * S);
    r = S / p;
    printf("%.2f\n", R / r);
    return 0;
}
    
