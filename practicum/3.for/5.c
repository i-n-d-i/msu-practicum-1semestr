#include <stdio.h>
#include <stdlib.h>
/*дано n, далее n натуральных чисел. вывести ближайшее к 400 число
и его номер в последовательности*/

int main()
{
    int n, num, i, out_pos = 1, out_num;
    scanf("%d %d", &n, &num);
    out_num = num;
    for(i = 2; i <= n; i++)
    {
        scanf("%d", &num);
        if(abs(num - 400) < abs(out_num - 400))
        { 
            out_num = num;
            out_pos = i;
        }
            
    }
    printf("%d %d\n", out_num, out_pos);
    return 0;
}
