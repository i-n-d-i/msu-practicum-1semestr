#include <stdio.h>
/*дано n, далее n различных целых чисел. поменять местами
в этом массиве минимальный и максимальный элементы*/

int main()
{
    int n, max = 0, min = 1001, k, a[1000];
    int min_pos, max_pos;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] >= max)
        {
            max = a[i];
            max_pos = i;
        }
        if(a[i] <= min)
        {
            min = a[i];
            min_pos = i;
        }
    }
    k = a[min_pos];
    a[min_pos] = a[max_pos];
    a[max_pos] = k;
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}


