#include <stdio.h>
#include <math.h>

int main()
{
    float a = 5.0, b = 10.0, c = 1.0;
    float x0, x1;

    x0 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    x1 = (-b - sqrt(b*b - 4*a*c)) / (2*a);

    printf("Roots are %f and %f\n", x0, x1);

    return 0;
}
