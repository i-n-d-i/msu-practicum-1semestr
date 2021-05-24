#include <stdio.h>
/*даны два целых положительных числа a и p от 1 до 10000. найти обратный элемент 
к а по модулю р, если р - простое(то есть такое число х, что х * а = 1 mod p)
иначе вывести empty*/

int isprime(int p)
{
    if(p == 1)
        return 0;
    for(int i = 2; i * i <= p; i++)
    {
        if(p % i == 0)
            return 0;
    }
    return 1;
}

int inverseElement(int a, int p)
{
    if(isprime(p) == 1)
    {
        int x = 1;
        while((a * x) % p != 1)
            x++;
        return x;
    }
    return 0;
}

int main()
{
    int a, p;
    scanf("%d %d", &a, &p);
    if(inverseElement(a, p) == 0)
        printf("Empty\n");
    else
        printf("%d\n", inverseElement(a, p));
    return 0;
}



