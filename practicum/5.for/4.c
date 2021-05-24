#include <stdio.h>
/*дан текст, оканчивающийся точкой. вывести все символы,
встречающиеся хотя бы раз в этом тексте*/

int main()
{
    char m;
    char a[256] = {};
    do
    {
        m = getchar();
        a[m] = 1;
    } while(m != '.');
    for(int i = 0; i < 256; i++)
    {
        if(a[i] == 1)
            putchar(i);
    }
    printf("\n");
    return 0;
}



