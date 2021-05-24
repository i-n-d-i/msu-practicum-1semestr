#include <stdio.h>
/*написать функцию, которая возвращает максимальный элемент массива и заменяет его на 0.
используя ее, вывести данный массив из положительных чисел в порядке убывания*/

int max_massive(int n, int massive[])
{
    int max = massive[0], max_pos = 0;
    for(int i = 0; i < n; i++)
    {
        if(massive[i] > max)
        {
            max = massive[i];
            max_pos = i;
        }
    }
    massive[max_pos] = 0;
    return max;
}

int main()
{
    int n;
    scanf("%d", &n);
    int massive[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &massive[i]);
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", max_massive(n, massive));
    }
    return 0;
}



