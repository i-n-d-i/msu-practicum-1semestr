#include <stdio.h>
//вывести длину наибольшей последовательности из одинаковых символов

int main()
{
    char prev, now;
    int k = 1, max = 0;
    prev = getchar();
    do
    {
        now = getchar();
        if(now == prev)
        {
            k++;
            if(k > max)
                max = k;
        }
        else
            k = 1;
        prev = now;
    } while(prev != '.');
    printf("%d\n", max);
    return 0;
}
