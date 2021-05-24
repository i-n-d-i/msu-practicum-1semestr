#include <stdio.h>
/*дано n, далее n целых чисел. записать числа в массив, сдвинуть этот
массив циклически на одну позицию вправо и вывести его*/

int main()
{
    int n, a[1000], m, k;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    m = a[0];
    a[0] = a[n - 1];
    for(int i = 1; i < n; i++)
    {
        k = a[i];
        a[i] = m;
        m = k;
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}




