#include <stdio.h>
/*дано n, далее n целых чисел. вывести все позиции 
вхождений максимального элемента*/

int main()
{
    int n, a[1000], max = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] > max)
            max = a[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] == max)
            printf("%d ", i);
    }
    return 0;
}

