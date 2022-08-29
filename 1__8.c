#include <stdio.h>

int main()
{
    int c,nl,t,bs;

    nl = t = bs = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++t;
        else if (c == ' ')
            ++bs;
    }
    
    printf("New LIne %d\t Tab %d\t Blank Space %d", nl, t, bs);
    
    return 0;
}