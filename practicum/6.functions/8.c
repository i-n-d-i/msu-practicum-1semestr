#include <stdio.h>
/*написать функцию, возвращающую первую цифру данного целого числа. используя ее,
найти, сколько элементов данного массива начинаются с той же цифры, что и первый элемент*/

int first(int n)
{
    int m;
    while(n != 0)
    {
        m = n % 10;
        n /= 10;
    }
    return m;
}

int main()
{
    int n, a[1000], m = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(first(a[0]) == first(a[i]))
            m++;
    }
    printf("%d\n", m);
    return 0;
}
