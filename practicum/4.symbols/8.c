#include <stdio.h>
/*даны целые p,q, причем 1 <= p <= q <= 26.
вывести все латинские буквы с номерами от p до q*/

int main()
{
    int p, q;
    scanf("%d %d", &p, &q);
    while(p <= q)
    {
        putchar('a' - 1 + p);
        p++;
    }
    return 0;
}
    



