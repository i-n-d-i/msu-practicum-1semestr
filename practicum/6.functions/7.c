#include <stdio.h>
#include <string.h>
/*написать функцию, возвращающую количество вхождений данного символа
в данной строке. Используя ее, вывести количество цифр в данной строке*/

int quantity(char n, char a[100])
{
    int len_s = strlen(a), k = 0;
    for(int i = 0; i < len_s; i++)
    {
        if(a[i] == n)
            k++;
    }
    return k;
}
int main()
{
    int sum = 0;
    char a[100];
    fgets(a, 100, stdin);
    for(char i = '0'; i <= '9'; i++)
    {
        sum += quantity(i, a);
    }
    printf("%d", sum);
    return 0;
}
    
