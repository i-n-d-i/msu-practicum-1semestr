#include <stdio.h>
/*дан текст оканчивающийся точкой.
вывести, сколько различных цифр в этом тексте*/

int main()
{
    char m, k = 0;
    int a[9] = {};
    do
    {
        m = getchar();
        if(m >= '0' && m <= '9')
            a[m - '0'] = 1;
    } while(m != '.');
    for(int i = 0; i <= 9; i++)
    {
        if(a[i] == 1)
            k++;
    }
    printf("%d\n", k);
    return 0;
}


