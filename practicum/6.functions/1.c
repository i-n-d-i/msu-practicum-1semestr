#include <stdio.h>
/*написать функцию, которая выводит все буквы латинского алфавита
от p до q. Используя ее, вывести весь латинский алфавит*/

void alph(int p, int q)
{
    for(char i = 'a' + p - 1; i <= q + 'a' - 1; i++)
        putchar(i);
}

int main()
{
    alph(1, 26);
    printf("\n");
    return 0;
}

