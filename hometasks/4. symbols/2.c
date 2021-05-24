#include <stdio.h>
//посчитать количество вхождений ab

int main()
{
    int  m = 0;
    char x;
    do
    {
        x = getchar();
        if(x == 'a')
        {
            x = getchar();
            if(x == 'b')
                m++;
        } 
    } while(x != '.');
    printf("%d\n", m);
    return 0;
}
