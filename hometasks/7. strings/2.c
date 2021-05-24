#include <stdio.h>
#include <string.h>
/*дана строка длиной не более 100 символов. посчитать длину
первого и последнего слова (слово ограничено пробелом)*/

int main()
{
    char a[100];
    int n, m_first = 0, m_last = 0;
    fgets(a, 100, stdin);
    n = strlen(a) - 1;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == ' ')
            break;
        m_first++;
    }
    for(int i = n - 1; i >= 0; i--)
    {
        if(a[i] == ' ')
            break;
        m_last++;
    }
    printf("%d %d\n", m_first, m_last);
    return 0;
}
