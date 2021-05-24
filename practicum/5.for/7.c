#include <stdio.h>
/*дано n, далее n целых чисел. определить есть ли среди
этих чисел пары равных*/

int main()
{
    int n, a[1000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}

