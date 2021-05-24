#include <stdio.h>
/*вернуть число, получающееся в результате приписывания
цифры 1 слева к данному неотрицательному целому числу*/

int write(int n)
{
    if(n < 10)
        return n + 10;
    else
        return write(n / 10) * 10 + (n % 10);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", write(n));
    return 0;
}
