#include <stdio.h>
//дано натуральное число. определить, есть ли в его десятичной записи цифра 3

int main()
{
    int n;
    scanf("%d", &n);
    while(n > 0)
    {
        if(n % 10 == 3)
        {
            printf("yes\n");
            return 0;
        }
        n /= 10;
    }
    printf("no\n");
    return 0;
}
