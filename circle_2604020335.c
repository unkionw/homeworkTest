#include <stdio.h>
int main()
{
    float r;
    float pi = 3.14;
    float c, s;

    //5.67
    scanf("%f", &r);

    c = 2 * pi * r;
    s = pi * r * r;

    //
    printf("%.4f\n", c);
    printf("%.3f\n", s);

    return 0;
}