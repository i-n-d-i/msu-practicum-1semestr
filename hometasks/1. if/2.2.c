#include <stdio.h>
//если числа разной четности,то вывести yes, иначе вывести no

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if ((x + y) % 2 == 0)
        printf("no\n");
    else
        printf("yes\n");
    return 0;
}
