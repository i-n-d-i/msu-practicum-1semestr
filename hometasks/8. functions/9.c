#include <stdio.h>
/*дано целое положительное число n от 1 до 100. далее
матрица n х n целых чисел от -1000 до 1000. найти след матрицы*/

int trace(int n, int a[100][100])
{
    int k = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if(i == j)
                k += a[i][j];
        }
    return k;
}

int main()
{
    int n, a[100][100];
    scanf("%d", &n);
    printf("%d\n", trace(n, a));
    return 0;
}
