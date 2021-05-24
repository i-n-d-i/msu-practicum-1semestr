#include <stdio.h>
/*дано целое положительное число n от 1 до 100. вывести матрицу
размера n x n, где a ij = |i - j|*/

int main()
{
    int n, a;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            a = i - j;
            if(a < 0)
                a = -a;
            printf("%d ", a);
        }
        printf("\n");
    }
    return 0;
}

