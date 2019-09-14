#include <stdio.h>

int main()
{
    int c, last_char;
    last_char = getchar();
    putchar(last_char);
    while ((c=getchar())!=EOF)
    {
        if (c != ' ' || last_char != ' ') {
            putchar(c);
        }
        last_char = c;
    }
    
    return 0;
}
