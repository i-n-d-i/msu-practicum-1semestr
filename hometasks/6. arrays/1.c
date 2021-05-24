#include <stdio.h>
/*дано n, далее n различных целых чисел. вывести все элементы
находящиеся правее максимального элемента*/

int main()
{
    int n, m, max;
    int a[1000];
    scanf("%d %d", &n, &a[0]);
    max = a[0];
    for(int i = 1; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] > max)
        {
            max = a[i];
            m = i;
        }
    }
    for(int i = m + 1; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
