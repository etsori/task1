#include <stdio.h>
#include <math.h>

int main()
{
    double x = 1.7;
    double y = 1.08;
    double z = 0.5;

    double a = sin(x) / sqrt(y * y + pow(sin(x), 2))
             - x * x * y * z;

    double b = pow(M_E, -z*x) * sqrt(x + 1) + pow(M_E, -y*x);
    printf("a = %f\n", a);
    printf("b = %f\n", b);

    return 0;


