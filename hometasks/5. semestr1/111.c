#include <stdio.h>
#include <string.h>
//все семестровые задания через функции

void input(char massive[1000])
{
    fgets(massive, 1000, stdin);
}

void first_s(char massive[1000])
{
    int amount = 0, pos = 1;
    int n = strlen(massive) - 1;
    for(int i = 0; i < n; i++)
    {
        if(massive[i] == massive[0])
        {   
            amount++;
            printf("%d ", pos);
        }
        pos++;
    }
    printf("%d\n", amount);
}

void length(char massive[1000])
{
    int k = 1, max = 0;
    int n = strlen(massive) - 1;
    char m = massive[0];
    for(int i = 1; i < n; i++)
    {
        if(massive[i] == m)
        {
            k++;
            if(k > max)
                max = k;
        }
        else
            k = 1;
        m = massive[i];
    } 
    printf("%d\n", max);
}

void amount_of_digit(char massive[1000])
{
    int amount = 0, i = 0, n = strlen(massive) - 1;
    do
    {
        if(massive[i] >= '0' && massive[i] <= '9')
        {
            while(massive[i] >= '0' && massive[i] <= '9')
            {
                i++;
            }
            amount++;
        }
        i++;
    } while(i != n);
    printf("%d\n", amount);
}

void amount_of_letters(char massive[1000])
{
    int A = 0, a = 0;
    int n = strlen(massive) - 1;
    for(int i = 0; i < n; i++)
    {
        if(massive[i] >= 'A' && massive[i] <= 'Z')
            A++;
        if(massive[i] >= 'a' && massive[i] <= 'z')
            a++;
    }
    printf("%d %d\n", A, a);
}

void even_odd(char massive[1000])
{
    int even = 0, odd = 0;
    int n = strlen(massive) - 1;
    for(int i = 0; i < n; i++)
    {
        if(massive[i] >= '0' && massive[i] <= '9')
        {
            if(massive[i] % 2 == 0)
                even++;
            if(massive[i] % 2 == 1)
                odd++;
        }
    }
    printf("%d %d\n", even, odd);
}

void amount_of_ab(char massive[1000])
{
    int amount = 0, n = strlen(massive) - 1;
    char m = massive[0];
    for(int i = 1; i < n; i++)
    {
        if(m == 'a' && massive[i] == 'b')
            amount++;
        m = massive[i];
    }
    printf("%d\n", amount);
}

void letter_num(char massive[1000])
{
    int number;
    int n = strlen(massive) - 1;
    for(int i = 0; i < n; i++)
    {
        if(massive[i] >= 'a' && massive[i] <= 'z')
        {
            number = massive[i]- 'a' + 1;
            printf("%d", number);
        }
        else
            if(massive[i] >= 'A' && massive[i] <= 'Z')
            {
                number = massive[i] - 'A' + 1;
                printf("%d", number);
            }
            else
                putchar( massive[i]);
    }
}

void letter_even(char massive[1000])
{
    int n = strlen(massive) - 1;
    for(int i = 0; i < n; i++)
    {
        if(massive[i] >= 'a' && massive[i] <= 'z')
        {
            if((massive[i] - 'a' + 1) % 2 == 0)
                massive[i] += 'A' - 'a';
        }
        else
            if(massive[i] >= 'A' && massive[i] <= 'Z')
            {   
                if((massive[i] - 'A' + 1) % 2 == 0)
                    massive[i] += 'a' - 'A';
            }
        putchar(massive[i]);
    }
}

void x(char massive[1000])
{
    int n = strlen(massive) - 1;
    for(int i = 0; i < n; i++)
    {
        if(massive[i] >= '0' && massive[i] <= '9')
        {
            massive[i] = '0' + '9' - massive[i];
            putchar(massive[i]);
        }
        else
            putchar(massive[i]);
    }
}

void second_digit(char massive[1000])
{
    int k = 0;
    int amount = 0, n = strlen(massive) - 1;
    for(int i = 0; i < n; i++)
    {
        if(massive[i] >= '0' && massive[i] <= '9')
        {
            k++;
            if(k == 2)
                k = 0;
            else
                putchar(massive[i]);
        }
        else
            putchar(massive[i]);
    }
}

void doub(char massive[1000])
{
    int n = strlen(massive) - 1;
    for(int i = 0; i < n; i++)
    {
        if(massive[i] >= 'a' && massive[i] <= 'z' || massive[i] >= 'A' && massive[i] <= 'Z')
        {
            putchar(massive[i]);
            putchar(massive[i]);
        }
        else
            putchar(massive[i]);
    }
}

void last_symbol(char massive[1000])
{
    int n = strlen(massive) - 1;
    int m = massive[0];
    for(int i = 1; i < n; i++)
    {
        if(massive[i] != '.')
            putchar(m);
        m = massive[i];
    }
}

void print()
{
    printf("Варианты статистики:\n"); 
    printf(" 1) вывести количество вхождений первого символа и позиции, на которых он встречается\n");
    printf(" 2) вывести длину наибольшей подпоследовательности из одинаковых символов\n");
    printf(" 3) вывести количество чисел (не считая числа, являющиеся подстроками больших чисел)\n");
    printf(" 4) посчитать количество заглавных и строчных латинских букв\n");
    printf(" 5) посчитать количество четных и нечетных цифр\n");
    printf(" 6) вывести на экран количество вхождений ab\n");
    printf("Варианты преобразования\n");
    printf(" 1) заменить каждую латинскую букву на ее номер в алфавите\n");
    printf(" 2) изменить регистр каждой латинской буквы, имеющей четный номер в алфавите\n");
    printf(" 3) каждую цифру х заменить на 9 - х\n");
    printf(" 4) удалить каждую вторую цифру\n");
    printf(" 5) продублировать каждую латинскую букву\n");
    printf(" 6) удалить последний символ последовательности\n");
}
    
void act(char massive[1000],int s, int p)
{
    if(s == 1)
        first_s(massive);
    if(s == 2) 
        length(massive);
    if(s == 3)
        amount_of_digit(massive);
    if(s == 4)
        amount_of_letters(massive);
    if(s == 5)
        even_odd(massive);
    if(s == 6)
        amount_of_ab(massive);
    if(p == 1)
        letter_num(massive);
    if(p == 2)
        letter_even(massive);
    if(p == 3)
        x(massive);
    if(p == 4)
        second_digit(massive);
    if(p == 5)
        doub(massive);
    if(p == 6)
        last_symbol(massive);
}

int main()
{
    char massive[1000];
    input(massive);
    int s, p;
    print();
    printf("Выберите вариант статистики:");
    scanf("%d", &s);
    printf("Выберите вариант преобразования:");
    scanf("%d", &p);
    act(massive, s, p);
    return 0;
}
