#include <stdio.h>
/*дано целое ненулевое число. вывести максимальную степень тройки,
на которую делится это число*/

int main()
{
    int n, i = 1;
    scanf("%d", &n);
    while(n % 3 == 0)
    {
        i *= 3;
        n /= 3;
    }
    printf("%d\n", i);
    return 0;
}
