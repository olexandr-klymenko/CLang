//Output the longest line
#include <stdio.h>
#define MAXLINE 10000

int getLine(char line[]);
void copyLine(char fromLine[], char toLine[], int len);

int main()
{
    char line[MAXLINE];
    char maxLine[MAXLINE];
    int len, inn;
    int maxLen = 0;
    while((len=getLine(line)) > 0) {
        if (len > maxLen) {
            copyLine(line, maxLine, len);
            maxLen = len;
        }
    }
    printf("%s\n", maxLine);
    return 0;
}

int getLine(char line[])
{
    int c, i;
    for(i = 0; i < MAXLINE-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    return i;
}

void copyLine(char fromLine[], char toLine[], int len)
{
    for (int i=0; i<len; i++)
        toLine[i] = fromLine[i];
}