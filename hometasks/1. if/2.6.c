#include <stdio.h>
//если точка A(x;y) лежит между окружностями с радиусами 1 и 2, то вывести yes, иначе вывести no

int main()
{
    double x, y, m;
    scanf("%lf %lf", &x, &y);
    m = x * x + y * y;
    if(m > 1 && m < 4)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
