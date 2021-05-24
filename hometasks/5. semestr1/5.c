#include <stdio.h>
//посчитать количество четных и нечетных цифр

int main()
{
    char m;
    int k = 0, n = 0;
    do
    {
        m = getchar();
        if(m >= '0' && m <= '9')
        {
            if(m % 2 == 0)
                k++;
            if(m % 2 == 1)
                n++;
        }
    } while(m != '.');
    printf("%d %d\n", k, n);
    return 0;
}
