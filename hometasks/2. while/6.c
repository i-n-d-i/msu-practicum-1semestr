#include <stdio.h>
/*дано целое число n от 1 до 1000. Далее n целых различных 
чисел от 1 до 1000. Найти минимум, позицию минимума, максимум и 
позицию максимума*/

int main()
{
    int n, number, i = 0, min = 1000, min_pos, max = 0, max_pos;
    scanf("%d", &n);
    while(i < n)
    {
        i++;
        scanf("%d", &number);
        if(number < min) 
        {
            min = number;
            min_pos = i;
        }
        if(number > max)
        {
            max = number;
            max_pos = i;
        }
    }
    printf("%d %d\n ", min, min_pos);
    printf("%d %d\n ", max, max_pos);
    return 0;
}
