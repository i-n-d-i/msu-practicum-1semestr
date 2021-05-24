#include <stdio.h>
/*дано целое число n от 1 до 1000, далее n целых чисел от -1000
до 1000. найти минимальный элемент и его позицию*/

int main()
{
    int n, i, num, min, min_pos = 1;
    scanf("%d %d", &n, &num);
    min = num;
    for(i = 2; i <= n; i++)
    {
        scanf("%d", &num);
        if(num < min)
        {
            min = num;
            min_pos = i;
        }
    }
    printf("%d %d\n", min, min_pos);
    return 0;
}

