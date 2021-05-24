#include <stdio.h>
/*написать функцию, возвращающую максимальный показатель степени двойки, на которую
делится данное число. используя ее, вывести все элементы данного массива, кратные 64*/

int two(int n)
{
    int k = 0;
    if(n != 0)
    {
        while(n % 2 == 0)
        {
            k++;
            n = n / 2;
        }
        return k;
    }
    return 0;
}

int main()
{
    int n, a[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(two(a[i]) >= 6 || a[i] == 0) {
            printf("%d ",a[i]);
        }
    }
    return 0;
}



