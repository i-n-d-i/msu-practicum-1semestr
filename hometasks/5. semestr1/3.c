#include <stdio.h>
/*количество чисел(не считать числа, являющиеся
подстроками больших чисел)*/

int main()
{
    char m;
    int k = 0;
    do
    {
        m = getchar();
        if(m >= '0' && m <= '9')
        {
            while(m >= '0' && m <= '9')
            {
                m = getchar();
            }
            k++;
        }
    } while(m != '.');
    printf("%d\n", k);
    return 0;
}


