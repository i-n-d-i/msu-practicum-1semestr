#include <stdio.h>
//удаление последнего символа

int main()
{
    char m_prev, m_now;
    m_prev = getchar();
    do
    {
        m_now = getchar();
        if(m_now != '.')
        {
            putchar(m_prev);
        }
        m_prev = m_now;
    } while(m_now != '.');
    return 0;
}

