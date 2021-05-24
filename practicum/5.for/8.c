#include <stdio.h>
/*дано n, далее n целых чисел. вывести второй максимум*/

int main()
{
    int n, a[1000], max, m, pos = 0;
    scanf("%d %d", &n, &a[0]);
    max = a[0];
    for(int i = 1; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] > max)
        {
            max = a[i];
            pos = i;
        }
    }
    m = a[1];
    for(int i = 0; i < n; i++)
    {
            if(i != pos && a[i] > m)
                m = a[i];
    }
    printf("%d\n", m);
    return 0;
}

