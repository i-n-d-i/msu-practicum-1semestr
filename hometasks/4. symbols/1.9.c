#include <stdio.h>
/*дана отсечка времени в формате hh:mm:ss и целое число от 1 до 86399.
необходимо вывести время через данное количество секунд*/

int main()
{
    char h1, h2, m1, m2, s1, s2;
    int n, h, m, s;
    scanf("%c%c:%c%c:%c%c", &h1, &h2, &m1, &m2, &s1, &s2);
    scanf("%d", &n);
    h = ((h1 - '0') * 10 + (h2 - '0')) * 3600;
    m = ((m1 - '0') * 10 + (m2 - '0')) * 60;
    s = (s1 - '0') + (s2 - '0') + h + m + n;
    h = s / 3600;
    s %= 3600;
    m = s / 60;
    s %= 60;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}
    

