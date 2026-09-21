#include <stdio.h>
#include <math.h>

double A(const double x, const double y, const double z);

double B(const double x, const double y, const double z);

int main() {
    const double x = 1.7;
    const double y = 1.08;
    const double z = 0.5;

    printf("a = %.3f\nb = %.3f\n", A(x, y, z), B(x, y, z));
    return 0;
}

double A(const double x, const double y, const double z) {
    return (sin(x) / (sqrt(y * y + pow(sin(x), 2)))) - (x * x * y * z);
}

double B(const double x, const double y, const double z) {
    return exp(-z * x) * sqrt(x + 1)
           + exp(-y * x);
}

