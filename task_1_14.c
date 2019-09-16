// Chars freq hystogram
#include <stdio.h>

#define ASCII_NUMBER 128


int main()
{
    int i, j, c;
    int charFreq[ASCII_NUMBER];
    for (i = 0; i < ASCII_NUMBER; ++i)
        charFreq[i]=0;

    while ((c = getchar()) != EOF)
    {
        ++charFreq[c];
    }

    for (i = 0; i < ASCII_NUMBER; ++i) {
        if (charFreq[i] > 0) {
            printf("\n");
            putchar(i);
            printf(":");
            for (j = 0; j < charFreq[i]; ++j) {
                printf("*");
        }
        }
    }
        
    return 0;
}
