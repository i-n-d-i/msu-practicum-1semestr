#include <stdio.h>
/*даны целые числа от 1 до 100, ввод заканчивается нулем. 
вывести числа в обратном порядке*/

void reverse(int a)
{
    scanf("%d", &a);
    if(a == 0)
        printf("\n");
    else
    {
        reverse(a);
        printf("%d ", a);
    }
}


int main()
{
    int a;
    reverse(a);
    return 0;
}
    
