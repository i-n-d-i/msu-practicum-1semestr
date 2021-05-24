#include <stdio.h>
/*дано n, далее n целых чисел. определить, является ли
эта последовательность перестановкой чисел (1, 2 ... n)*/

int main()
{
    int n, a[1000] = {}, k;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &k);
        a[k]++;
    }
    for(int i = 1; i <= n; i++)
    {
        if(a[i] != 1)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}

