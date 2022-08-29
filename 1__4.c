#include <stdio.h>

int main()
{
    int fahr, cels;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    cels = lower;
    while (cels <= upper)
    {
        fahr = cels * 1.8 + 32;
        printf("%5d %13d\n",cels, fahr);
        cels+=step;
    }

    return 0;   
}