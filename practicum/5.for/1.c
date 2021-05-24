#include <stdio.h>
/*дано n, далее n целых чисел. вывести в обратном порядке
все четные числа*/

int main()
{
    int n, a[1000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = n - 1; i >= 0; i--)
    {
        if(a[i] % 2 == 0)
            printf("%d ", a[i]);
    }
    return 0;
}

