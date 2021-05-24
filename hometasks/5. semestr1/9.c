#include <stdio.h>
//удалить каждую вторую цифру

int main()
{
    char m;
    int k = 0;
    do
    {
        m = getchar();
        if(m >= '0' && m <= '9')
        {
            k++;
            if(k == 2)
                k = 0;
            else
                putchar(m);
        }
        else
            putchar(m);
    } while(m != '.');
    return 0;
}
