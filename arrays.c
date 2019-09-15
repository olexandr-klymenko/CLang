#include <stdio.h>

/* подсчет цифр, символов-разделителей и прочих символов */
int main()
{
    int c, i, nwhite, nother;
    int ndigit[10];
    nwhite = nother = 0;

    for (i = 0; i < 10; ++i)
        ndigit[i]= 0;

    while ((c= getchar())!= EOF)
        if (c >='0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;

    printf("цифры =\n");
    for (i = 0; i < 10; ++i)
        printf("%d\n", ndigit[i]);
    printf(", символы-разделители =%d, прочие =%d\n", nwhite, nother);

    return 0;
}
