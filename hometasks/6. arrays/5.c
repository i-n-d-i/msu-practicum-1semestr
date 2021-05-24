#include <stdio.h>
/*дано n, далее n целых чисел. вывести сумму всех чисел,
больших последнего элемента*/

int main()
{
    int n, sum = 0, a[1000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] > a[n - 1])
            sum += a[i];
    }
    printf("%d\n", sum);
    return 0;
}

    
