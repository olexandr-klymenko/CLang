//Output the longest line employing external variables
#include <stdio.h>
#define MAXLINE 10000

char line[MAXLINE];
char maxLine[MAXLINE];
int len;

int getLine();
void copyLine();

int main()
{
    // extern char line[], maxLine[];
    // extern int len;
    int inn;
    int maxLen = 0;
    while((len=getLine()) > 0) {
        if (len > maxLen) {
            copyLine();
            maxLen = len;
        }
    }
    printf("%s\n", maxLine);
    return 0;
}

int getLine(void)
{
    int c, i;
    // extern char line[];
    for(i = 0; i < MAXLINE-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    return i;
}

void copyLine(void)
{
    // extern char line[], maxLine[];
    // extern int len;
    for (int i=0; i<len; i++)
        maxLine[i] = line[i];
}