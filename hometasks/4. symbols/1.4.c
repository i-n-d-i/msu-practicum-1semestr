#include <stdio.h>
/*дана последовательность букв с точкой в конце.
заменить все заглавные буквы на строчные*/

int main()
{
    char x;
    do
    {
        x = getchar();
        if(x >= 'A' && x <= 'Z')
            x += 'a' - 'A';
        putchar(x);
    } while(x != '.');
    return 0;
}
