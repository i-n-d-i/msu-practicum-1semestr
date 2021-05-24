#include <stdio.h>
//заменить каждую латинскую букву на ее номер в алфавите

int main()
{
    char m;
    int number;
    do
    {
        m = getchar();
        if(m >= 'a' && m <= 'z')
        {
            number = m - 'a' + 1;
            printf("%d", number);
        }
        else
            if(m >= 'A' && m <= 'Z')
            {
                number = m - 'A' + 1;
                printf("%d", number);
            }
            else
                putchar(m);
    } while(m != '.');
    return 0;
}
