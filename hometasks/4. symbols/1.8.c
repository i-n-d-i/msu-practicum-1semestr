#include <stdio.h>
/*дано четырехзначное шестнадцатиричное число.
перевести его в десятичное число.*/

int main()
{
    char m;
    int ans = 0, n = 4096, i = 0;
    do
    {
        m = getchar();
        if(m >= '0' && m <= '9')
            ans += n * (m - '0');
        if(m >= 'A' && m <= 'F')
            ans += n * (m - '0' - 7);
        n /= 16;
        i++;
    } while(i != 4);
    printf("%d\n", ans);
}

