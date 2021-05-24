#include <stdio.h>
/*дано n, далее n натуральных чисел. для каждого из них вывести, есть 
ли в его шестнадцатеричной записи цифра "F" = 15*/

int main()
{
    int n, a, i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        int flag = 0;
        while(a > 0)
        {
            if(a % 16 == 15)
            {
                flag = 1;
                break;
            }
        a /= 16;
        }
        if(flag)
            printf("YES ");
        else 
            printf("NO ");
    }
    return 0;
}
