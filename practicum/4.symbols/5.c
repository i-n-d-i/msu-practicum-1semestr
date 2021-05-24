#include <stdio.h>
/*дан текст, оканчивающийся точкой. определить, является ли
он шестнадцатеричной записью некоторого неотрицательного целого
числа.*/

int main()
{
    char m; 
    int flag = 0;
    do
    {
        m = getchar();
        if(m >= 'a' && m <= 'f' || m >= '0' && m <= '9' || m == '.')
            flag = 1;
        else
        {
            printf("NO\n");
            return 0;
        }
    } while(m != '.');  
    if(flag == 1)
        printf("YES\n");
    return 0;
}


