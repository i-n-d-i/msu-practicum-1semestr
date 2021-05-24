#include <stdio.h>
/*вывести последние n букв латинского алфавита*/

void alph(int n)
{
    if(n > 0)
    {
        putchar('z' + 1 - n);
        alph(n - 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    alph(n);
    return 0;
}



