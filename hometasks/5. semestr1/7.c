#include <stdio.h>
/*изменить регистр каждой латинской буквы, 
имеющей четный номер в алфавите*/

int main()
{
    char m;
    do
    {
        if(m >= 'a' && m <= 'z')
        {
            if((m - 'a' + 1) % 2 == 0)
                m += 'A' - 'a';
        }
        else
            if(m >= 'A' && m <= 'Z')
            {
                if((m - 'A' + 1) % 2 == 0)
                    m += 'a' - 'A';
            }
        putchar(m);
        m = getchar();
    } while(m != '.');
    return 0;
}
        
