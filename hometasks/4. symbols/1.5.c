#include <stdio.h>
/*дано целое n. далее n координат шахматных позиций.
надо вывести цвет каждой клетки(клетка А1 - черная)*/

int main()
{
    int n;
    char x, y;
    scanf("%d", &n);
    while(n != 0)
    {
        getchar();
        x = getchar();
        y = getchar();
        if((x + y) % 2 == 0)
            printf("black\n");
        else
            printf("white\n");
        n--;
    } 
    return 0;
}

