#include <stdio.h>
//найти наибольшую степень тройки, на которую делится число n

int main()
{
    int n, k = 0;
    scanf("%d", &n);
    while(n % 3 == 0)
    {
        k++;
        n /= 3;
    }
    printf("%d\n", k);
    return 0;
}
