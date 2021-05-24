#include <stdio.h>
#include <stdlib.h>
/*четыре числа задают две клетки шахматного поля. вывести knight, если
из первой клетки можно попасть во вторую ходом коня. вывести queen, если 
ходом ферзя, иначе вывести nothing*/

int main()
{
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    if((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) == 5)
        printf("knight\n");
    else
        if(((x2 - x1) == 0 && (y2 - y1) != 0) || ((x2 - x1) != 0 && (y2 - y1) == 0) || (abs(x2 - x1) == abs(y2 - y1)))
            printf("queen\n");
        else
            printf("nothing\n");
    return 0;
}

