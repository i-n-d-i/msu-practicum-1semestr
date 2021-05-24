#include <stdio.h>
//проверить находится ли точка с координатами x,y строго внутри квадрата с вершинами (1;1), (1;-1), (-1,-1), (-1,1)

int main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);
    if(((x > -1) && (x < 1)) && ((y > -1) && (y < 1)))
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
