#include <stdio.h>
/*дано целое положительное n от 1 до 100. построить все простые 
числа, которые не превосходят n с помощью решета Эратосфена.*/

int Eratosphen(int n, int massive[])
{
    int i = 2;
    int k;
    while(i * i <= n) 
    {
        if(massive[i] == 1)
        {
            k = i * i;
            while(k <= n)
            {
                massive[k] = 0;
                k += i;
            }
        }
        i++;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int massive[n];
    for(int i = 2; i < n; i++)
    {
        massive[i] = 1;
    }
    Eratosphen(n, massive);
    for(int i = 0; i < n; i++)
    {
        if(massive[i] == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
