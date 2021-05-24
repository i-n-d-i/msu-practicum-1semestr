#include <stdio.h>
//определяет где лежит точка А(х;у) относительного единичного круга

int main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);
    if(x * x + y * y > 1)
        printf("out\n");
    else
        if(x * x + y * y < 1)
            printf("in\n");
        else
            printf("boundary\n");
    return 0;
}
