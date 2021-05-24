#include <stdio.h>
//даны два целых числа от -1000 до 1000. найти минимум

int min(int a, int b)
{
    if(a < b)
        return a;
    return b;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", min(a, b));
    return 0;
}
