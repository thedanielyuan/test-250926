#include <stdio.h>
#include <math.h>

int main()
{
    float x,y,z;

    x = 2.0;
    y = sin(x);
    z = asin(y);

    printf("%f and %f should be the same\n", x, z);

    return 0;
}