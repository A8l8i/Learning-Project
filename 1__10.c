#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t' || c == 'b' || c == '\\')
            printf("\\\\");
        else 
            putchar(c);
            
    }

    return 0;
}