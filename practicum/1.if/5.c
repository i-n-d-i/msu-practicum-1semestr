#include <stdio.h>

int main()
{
    int k, m;
    scanf("%d", &k);
    m = k % 10;
    if(m == 1)
        printf("%d\n", k * 3);
    else
        if(m == 3)
            printf("%d\n", k);
        else
            if(m == 7)
                printf("%d\n", k * 9);
            else
                if(m == 9)
                    printf("%d\n", k * 7);
                else
                    printf("-1\n");
    return 0;
}

