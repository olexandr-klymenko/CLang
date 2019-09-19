//Replace tabs with spaces (4 spaces per tab)
#include <stdio.h>
#define MAXLINE 10000
#define SPACES_PER_TAB 4

int getLine(char line[]);
void replaceTabs(char line[], int len);
void copyLine(char fromLine[], char toLine[], int len);

int main()
{
    char line[MAXLINE];
    int len;
    while((len=getLine(line)) > 0) {
        replaceTabs(line, len);
        printf("%s\n", line);
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

void replaceTabs(char line[], int len)
{
    char newLine[MAXLINE];
    int idx=0;
    int newIdx=0;
    while (idx < len)
    {
        if (line[idx] == '\t') {
            int spaces = SPACES_PER_TAB - (newIdx % SPACES_PER_TAB);
            for (int i=0;i<spaces;i++) 
            {
                newLine[newIdx] = ' ';
                newIdx++;
            }
        } else
        {
            newLine[newIdx] = line[idx];
            newIdx++;
        }
        idx++;
    }
    copyLine(newLine, line, newIdx+1);
}

void copyLine(char fromLine[], char toLine[], int len)
{
    for (int i=0; i<len; i++)
        toLine[i] = fromLine[i];
}