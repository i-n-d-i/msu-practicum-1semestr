#include <stdio.h>
/*вернуть неотрицательное целое к такое, что 2^k равно
данному числу. если такого нет, вернуть -1*/

int k_degree(int n)
{
    if(n == 0)
        return -1;
    if(n == 1)
        return 0;
    int t = k_degree(n / 2);
    if(n % 2 == 0 && t != -1)
        return 1 + t;
    if(t == -1)
        return -1;
    return -1;
}
        

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", k_degree(n));
    return 0;
}

