#include <stdio.h>
/*даны целые числа от -100 до 100, ввод заканчивается нулем.
найти сумму чисел*/

int sum()
{
    int a;
    scanf("%d", &a);
    if (a == 0)
        return 0;
    int i = 0;
    i += a + sum();
    return i;
}

int main() 
{
    int a;
    printf("%d\n", sum());
    return 0;
}
