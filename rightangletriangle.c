#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main()
{
    float H = 14, angle = 32;

    float L = H / cos(angle * PI / 180);

    printf("The length of the hypotenuse is %f\n", L);

    return 0;
}
