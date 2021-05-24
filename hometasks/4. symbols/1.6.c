#include <stdio.h>
/*вводится буква от 'a' до 'z' и положительное целое
число n. вывести символ, циклически сдвинутый на n позиций
по алфавиту*/

int main()
{
    
    char ch;
    int n;
    ch = getchar();
    scanf("%d", &n);
    n = n % 26;
    if(ch + n > 'z')
        ch = 'a' + n - 1 - ('z' - ch);
    else
        ch = ch + n;
    putchar(ch);
    printf("\n");
    return 0;
}
    
