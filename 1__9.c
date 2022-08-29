#include <stdio.h>

int main()
{
    int c, lastc;

    while ((c = getchar()) != '\n')
    {
        if (c != ' ')
            putchar(c);
        if (c == ' ')
            if (lastc != ' ')
                putchar(c);
        lastc=c;
    }
    
    return 0;
}