#include <stdio.h>

int isWord(int c) {
    if (c != ' ' && c != '\n' && c != '\t')
        return 1;
    return 0;
}

int main()
{
    int c;
    int lastChar;
    while ((c = getchar()) != EOF)
    {
        if (isWord(c) == 1)
            putchar(c);
        else if (isWord(lastChar) == 1)
        {
            putchar('\n');
        }
        lastChar = c;
    }
    
    return 0;
}
