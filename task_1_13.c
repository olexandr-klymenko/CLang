// Words length hystogram
#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_LENGTH 40

int isWord(int c) {
    if (c != ' ' && c != '\n' && c != '\t')
        return 1;
    return 0;
}

int main()
{
    int i, j, c, nc, state;
    nc = 0;
    state = OUT;
    int ndigit[MAX_LENGTH];
    for (i = 0; i < MAX_LENGTH; ++i)
        ndigit[i]= 0;

    while ((c = getchar()) != EOF)
    {
        if (isWord(c) == 1 && state == OUT) {
            state = IN;
            nc = 1;
        }
        else if (isWord(c) == 1 && state == IN) {
            ++nc;
        }
        else if (state == IN)
        {
            state = OUT;
            ++ndigit[nc];
        }
    }
    for (i = 0; i < MAX_LENGTH; ++i) 
    {
        printf("\n%2d:", i);
        for (j = 0; j < ndigit[i]; ++j)
            printf("*");
    }

    return 0;
}
