#include <stdio.h>
/*дан текст, оканчивающийся точкой. вывести длины всех
подстрок из одинаковых символов*/

int main()
{
    int m = 1, max = 0;
    char x_prev, x_now;
    x_prev = getchar();
    do
    {
        x_now = getchar();
        if(x_now == x_prev)
        {    
            m++;
            if(m > max)
                max = m;
        }
        else
        {
            printf("%d ", m);
            m = 1;
        }
        x_prev = x_now;
    } while(x_prev != '.');
    printf(" %d\n", max);
    return 0;
}


