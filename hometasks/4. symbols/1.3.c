#include <stdio.h>
/*дано k. вывести все буквы латинского алфавита
с номерами кратными k*/

int main()
{
    int k;
    char x = 'a';
    scanf("%d", &k);
    while(x <= 'z')
    {
        if(x % k == 0)
            putchar(x);
        x++;
    }
    return 0;
}

