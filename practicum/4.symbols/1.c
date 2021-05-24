#include <stdio.h>
/*дан текст, оканчивающийся точкой. вывести его, 
исключив все вхождения буквы 'a'*/

int main()
{
    char x;
    do
    {
        x = getchar();
        if(x != 'a')
            putchar(x);
    } while(x != '.');
    return 0;
}


