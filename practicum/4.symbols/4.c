#include <stdio.h>
/*дан текст, оканчивающийся точкой.
вывести номера символов, являющихся цифрами*/

int main()
{
    int m = 1;
    char x;
    do
    {
        x = getchar();
        if(x >= '0' && x <= '9')
            printf("%d\n", m);
        m++;
    } while(x != '.');
    return 0;
}

