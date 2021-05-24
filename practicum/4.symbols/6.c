#include <stdio.h>
//дан текст, оканчивающийся точкой. вывести его последний символ.

int main()
{
    char x_prev, x_now;
    x_prev = getchar();
    do
    {
        x_now = getchar();
        if(x_now != '.')
            x_prev = x_now;
    } while(x_now != '.');
    putchar(x_prev);
    return 0;
}


