#include <stdio.h>
/*дано n, далее n натуральных чисел. вывести максимальное 
двузначное число из введенных или -1, если в последовательности 
нет двузначных чисел*/

int main()
{
    int n, a, i, max = -1;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if(a > 9 && a < 100 && a > max)
                max = a;
    }
    printf("%d\n", max);
    return 0;
}
        

