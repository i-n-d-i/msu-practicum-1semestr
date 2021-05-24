#include <stdio.h>
/*дано n, далее n целых чисел. если среди них есть пара таких,
что в сумме дают 100, то вывести одну любую такую пару, если нет,
то вывести два нуля*/

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
            if(a[i] + a[j] == 100)
            {
                printf("%d %d\n", a[i], a[j]);
                return 0;
            }
        }
    }
    printf("0 0\n");
    return 0;
}
