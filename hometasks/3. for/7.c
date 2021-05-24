#include <stdio.h>
#include <math.h>
/*дано целое число n от 2 до 1000. далее n целых чисел от 1 до 1000. 
найти среднее геометрическое и гармоническое этих чисел*/

int main()
{ 
    double n, num, m = 0, geom = 1, harm;
    scanf("%lf", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%lf", &num);
        m += 1 / num;
        geom *= pow(num, 1 / n);
    }
    harm = n / m;
    printf("%.2f %.2f\n", geom, harm);
    return 0;
}

