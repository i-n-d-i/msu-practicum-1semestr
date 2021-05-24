#include <stdio.h>
#include <math.h>
/*a,b,c - стороны треугольника. если такой треугольник существует, то найти радиус вписанной и описанной окружности,
иначе вывести incorrect*/

int main()
{
    double a, b, c, p, S, r, R;
    scanf("%lf %lf %lf", &a, &b, &c);
    p = (a + b + c) / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));
    R = a * b * c / (4 * S);
    r = S / p;
    if((a + b < c) || (b + c < a) || (c + a < b))
        printf("incorrect\n");
    else
        printf("%.2f %.2f", r, R);
    return 0;
}

