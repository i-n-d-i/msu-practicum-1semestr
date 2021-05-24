#include <stdio.h>
/*дана последовательность букв с точкой в конце.
вывести все символы, кроме цифр*/

int main()
{
    char x;
    do
    {
        x = getchar();
        if(x < '0' || x > '9')
            putchar(x);
    } while(x != '.');
    return 0;
}
