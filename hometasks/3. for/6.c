#include <stdio.h>
/*дано целое число n от 1 до 1000, далее n целых чисел от -1000 до 1000.
найти максимальный элемент и количество элементов, равных максимальному*/

int main()
{
    int n, a, i, m, max = -1000, k = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if(a > max)
        {
            max = a;
            k = 0;
        }
        if(a == max)
            k++;
    }
    printf("%d %d\n", max, k);
    return 0;
}
        

