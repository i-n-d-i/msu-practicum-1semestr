#include <stdio.h>
/*если в последовательности есть хоть одно четное число,
вывести yes, иначе вывести no*/

int main()
{
    int i = 0, n, a;
    scanf("%d", &n);
    while(i < n)
    {
        scanf("%d", &a);
        if(a % 2 == 0)
        {
            printf("yes\n");
            return 0;
        }
        i++;
    }
}
