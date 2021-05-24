#include <stdio.h>
//дан текст, оканчивающийся точкой. вывести каждый третий символ.

int main()
{
    int m = 1;
    char x;
    do
    {
        x = getchar();
        if(m % 3 == 0)
            putchar(x);
        m++;
    } while(x != '.');
    return 0;
}

