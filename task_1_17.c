//Output all lines that longer than 8 chars
#include <stdio.h>
#define MAXLINE 10000
#define MINLINE 8

int getLine(char line[]);

int main()
{
    char line[MAXLINE+1];
    int len, inn;
    while((len=getLine(line)) > 0) {
        if (len > MINLINE) {
            for (inn=0;inn<len;inn++)
                putchar(line[inn]);
            putchar('\n');
        }
    }
    return 0;
}

int getLine(char line[])
{
    int c, i;
    for(i = 0; i < MAXLINE-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    return i;
}