#include <stdio.h>
#include <string.h>
/*дано целое положительное n от 1 до 100, далее n целых чисел
от -1000 до 1000. найти максимальный элемент*/

int maxArray(int n, int a[])
{
    scanf("%d", &a[0]);
    int max = a[0];
    for(int i = 1; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] > max)
            max = a[i];
    }
    return max;
}

int main()
{
    int n, a[100];
    scanf("%d", &n);
    printf("%d\n", maxArray(n, a));
    return 0;
}

