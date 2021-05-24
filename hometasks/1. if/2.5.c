#include <stdio.h>
//вывести количество корней квадратного уравнения. если уравнение не имеет корней, то вывести infinity

int main()
{
    double a, b, c, D;
    scanf("%lf %lf %lf", &a, &b, &c);
    D = b * b - 4 * a * c;
    if(a == 0 && b == 0 && c == 0)
        printf("infinity\n");
    else
        if((a == 0 && b == 0) || D < 0)
            printf("0\n");
        else
            if(a == 0 || D == 0)
                printf("1\n");
            else
                printf("2\n");    
    return 0;
}
