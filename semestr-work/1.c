#include <stdio.h>
/*вывести на экран количество вхождений ab. 
удалить последний символ*/

int main()
{
    int amount = 0;
    char ch_prev, ch_now;
    ch_prev = getchar();
    do
    {
        ch_now = getchar();
        if(ch_prev == 'a' && ch_now == 'b')
            amount++;
        if(ch_now != '.')
            putchar(ch_prev);
        ch_prev = ch_now;
    } while(ch_now != '.');
    printf(" %d\n", amount);
    return 0;
}
