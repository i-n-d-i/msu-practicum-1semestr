#include <stdio.h>
/*вывести количество вхождений первого символа и позиции,
на которых он встречался*/

int main()
{
    char first, now;
    int k = 1, pos = 1;
    first = getchar();
    printf("%d ", pos);
    do
    {
        now = getchar();
        pos++;
        if(now == first)
        {
            k++;
            printf("%d ", pos);
        }
    } while(now != '.');
    printf("%d\n", k);
    return 0;
}


