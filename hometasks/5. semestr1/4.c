#include <stdio.h>
/*посчитать количество заглавных и строчных литанских букв*/

int main()
{
    char m;
    int k = 0, z = 0;
    do
    {
        m = getchar();
        if(m >= 'A' && m <= 'Z')
            k++;
        if(m >= 'a' && m <= 'z')
            z++;
    } while(m != '.');
    printf("%d %d\n", k, z);
    return 0;
}
