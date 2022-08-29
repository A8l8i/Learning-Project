#include <stdio.h>

int main()
{
    float fahr, cels;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr <= upper)
    {
        cels = (5.0/9.0) * (fahr-32);
        printf("%3.0f %13.3f\n",fahr, cels);
        fahr+=step;
    }

    return 0;
}

/*
{
    int fahr, cels;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr <= upper)
    {
        cels = 5* (fahr-32) / 9;
        printf("%d\t%d\n",fahr, cels);
        fahr+=step;
    }

    return 0;
}
*/