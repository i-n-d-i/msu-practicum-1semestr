#include <stdio.h>
/*дан символ. определить является ли он латинской буквой,
цифрой или чем-то другим*/

int main()
{
    char x;
    x = getchar();
    if(x >= 'a' && x <= 'z' || x >= 'A' && x <= 'Z')
        printf("letter\n");
    else
        if(x >= '0' && x <= '9')
            printf("digit\n");
        else
            printf("other\n");
    return 0;
}


