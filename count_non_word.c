#include <stdio.h>

int main()
{
    int c, num_of_spaces, num_of_tabs, num_of_eol;
    num_of_spaces = num_of_tabs = num_of_eol = 0;
    while ((c=getchar())!=EOF)
    {
        if (c=='\n') {
            ++num_of_eol;
        }
        if (c==' ') {
            ++num_of_spaces;
        }
        if (c=='\t') {
            ++num_of_tabs;
        }
    }
    printf("%d\n", num_of_spaces);
    printf("%d\n", num_of_tabs);
    printf("%d\n", num_of_eol);
    
    return 0;
}
