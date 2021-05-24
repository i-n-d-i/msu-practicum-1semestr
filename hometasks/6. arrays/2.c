#include <stdio.h>
/*дано n, далее n вещественых чисел. вывести,
сколько элементов больше среднего арифметического*/

int main()
{
    int n, m = 0;
    double a[1000], arifm = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%lf", &a[i]);
        arifm += a[i];
    }
    arifm /= n;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > arifm)
            m++;
    }
    printf("%d\n", m);
    return 0;
}

