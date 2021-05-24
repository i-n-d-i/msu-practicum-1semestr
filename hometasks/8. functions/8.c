#include <stdio.h>
/*даны две строки s1 и s2 длиной не более 100 символов.
найти длину общего префикса(строки оканчиваются нулевым символом)*/

int prefix(char a[], char b[])
{
    int i = 0;
    while(a[i] != '\0' && b[i] != '\0' && a[i] == b[i])
    {
        i++;
    }
    return i;
}

int main()
{
    char s1[100], s2[100];
    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);
    printf("%d\n", prefix(s1, s2));
    return 0;
}





