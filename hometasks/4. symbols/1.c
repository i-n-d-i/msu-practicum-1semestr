#include <stdio.h>
//вводится текст. считать текст до точки, и посчитать количество цифр в нем

int main()
{
    int i = 0, m = 0;
    char x;
    do
    { 
        x = getchar();
        if(x >= '0' && x <= '9')
            m++;
    } while(x != '.');
    printf("%d", m);
    return 0;
}
