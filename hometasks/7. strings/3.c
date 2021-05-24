#include <stdio.h>
#include <string.h>
/*дано два целых числа a и b от 1 до 10^100 
(каждое на отдельной строке). сложить их.*/

int main()
{
    char a[10^100], b[10^100];
    long long int ans = 0, s1 = 0, s2 = 0, k = 1;
    fgets(a, 10^100, stdin);
    fgets(b, 10^100, stdin);
    int n = strlen(a) - 1;
    int m = strlen(b) - 1;
    for(int i = n - 1; i >= 0; i--)
    {
        s1 += (a[i] - '0') * k;
        k *= 10;
    }
    k = 1;
    for(int i = m - 1; i >= 0; i--)
    {
        s2 += (b[i] - '0') * k;
        k *= 10;
    }
    ans = s1 + s2;
    printf("%lld\n", ans);
    return 0;
}

