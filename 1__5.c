#include <stdio.h>

int main()
{
    float fahr, cels;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = upper;
    while (fahr >= lower)
    {
        cels = (5.0/9.0) * (fahr-32);
        printf("%.0f\t%.1f\n",fahr, cels);
        fahr-=step;
    }

    return 0;    
}