#include <stdio.h>
/*дано n, далее n натуральных чисел. вывести все числа,
оканчивающиеся на ту же цифру, что и последняя*/

int main()
{
    int n, a[1000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 10 == a[n - 1] % 10)
            printf("%d ", a[i]);
    }
    return 0;
}
