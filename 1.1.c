#include <stdio.h>
#include <math.h>
/**
 * @brief вычисляет значение функции по заданной формуле
 * @param x - значение переменной х
 * @param y - значение переменной y
 * @param z - значение переменной z
 * @return рассчитанное значение
 */
double A(const double x, const double y, const double z);

/**
 * @brief вычисляет значение функции по заданной формуле
 * @param x - значение переменной х
 * @param y - значение переменной y
 * @param z - значение переменной z
 * @return рассчитанное значение
 */
double B(const double x, const double y, const double z);

/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
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
