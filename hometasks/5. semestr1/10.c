#include <stdio.h>
//продублировать каждую латинскую букву

int main()
{
    char m;
    do
    {
        m = getchar();
        if(m >= 'a' && m <= 'z' || m >= 'A' && m <= 'Z')
        {
            putchar(m);
            putchar(m);
        }
        else
            putchar(m);
    } while(m != '.');
    return 0;
}


