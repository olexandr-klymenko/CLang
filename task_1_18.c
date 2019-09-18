#include <stdio.h>
#define MAXLINE 10000

int getLine(char line[]);

int main()
{
    char line[MAXLINE+1];
    int len, head, tail, inn;
    while((len=getLine(line)) > 0) {
        for(head = 0; line[head] == ' ' || line[head] == '\t'; head++);
        for(tail = len; line[tail] == ' ' || line[tail] == '\t' || line[tail] == '\n' || line[tail] == '\0';tail--);
        if(tail - head >= 0 && line[0]!='/' && line[1]!='/')
        {
            for(inn = head; inn <= tail; inn++)
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
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}