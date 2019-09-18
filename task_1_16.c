//Output all lines that longer than 8 chars
#include <stdio.h>
#define MAXLINE 100

int getLine();

int main()
{
    int len, inn;
    while((len=getLine(line)) > 0) {
        for (inn=0;inn<len;inn++)
            putchar(line[inn]);
        putchar('\n');
    }
    return 0;
}

int getLine()
{
    char line[MAXLINE];
    int c, i;
    for(i = 0; i < MAXLINE-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    return i;
    while ((c=getchar()) != EOF && c != '\n')
    {
        /* code */
    }
    
}