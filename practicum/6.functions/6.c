#include <stdio.h>
/*написать функцию, которая возвращает позицию максимального элемента
на данном отрезке массива. используя ее, найти второй максимальный
элемент массива*/

int posmax(int a[], int l, int r) 
{
    int max = a[l], maxpos = l;
    for(int i = l; i <= r; i++)
    {
        if(a[i] > max)
            maxpos = i;
    }
    return maxpos;
}

int main()
{
    int n, first, secondleft, secondright, second;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    first = posmax(a, 0, n - 1);
    if(first == 0)
    {
        printf("%d\n", a[posmax(a, 1, n - 1)]);
        return 0;
    }
    if(first == n - 1)
    {
        printf("%d\n", a[posmax(a, 0, n - 2)]);
        return 0;
    }
    secondleft = posmax(a, 0, first - 1);
    secondright = posmax(a, first + 1, n - 1);
    if(a[secondleft] > a[secondright])
        second = secondleft;
    else
        second = secondright;
    printf("%d\n", a[second]);
    return 0;
}
