#include <stdio.h>
#define MAXLINE 10000

int getReversedLine(char line[]);

int main()
{
    char line[MAXLINE+1];
    int len, head, tail, inn;
    while((len=getReversedLine(line)) > 0) {
        for (inn=0;inn<len;inn++)
            putchar(line[inn]);
        putchar('\n');
    }
    return 0;
}

int getReversedLine(char line[])
{
    int c, i;
    for(i = 0; i < MAXLINE-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;

    char reversed[i];
    for(int j=0;j<i;j++)
        reversed[j] = line[i-j];
    for(int j=0;j<i;j++)
        line[j] = reversed[j];
    return i;
}