#include <stdio.h>

int main()
{
    float fahr, cels;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("Convert Fahrenhite to Celsius\n");
    while(fahr <= upper)
    {
        cels = (5.0/9.0) * (fahr-32);
        printf("%13.0f %13.1f\n",fahr, cels);
        fahr+=step;
    }

    return 0;
}
