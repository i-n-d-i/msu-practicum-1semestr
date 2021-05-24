#include <stdio.h>
//каждую цифру х заменить на 9 - х

int main()
{
    char x;
    do
    {
        x = getchar();
        if(x >= '0' && x <= '9')
        {
            x = '0' + '9' - x;
            putchar(x);
        }
        else
            putchar(x);
    } while(x != '.');
    return 0;
}
