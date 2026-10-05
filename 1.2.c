#include <stdio.h>
#include <math.h>


/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double sendValue();

/**
 * @brief Считывает площадь круга по формуле S = C**2/4pi
 * @return Считанное значение
 */
double Square_Circle(double l_circle);

/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main() {
    double length_circle = sendValue();
    double S_circle = Square_Circle(length_circle);
    printf("Площадь круга: %.4f\n", S_circle);
    return 0;
}

double Square_Circle(double l_circle) {
    return (l_circle * l_circle) / (4 * M_PI);
}


double sendValue() {
    double length_circle = 0.0;
    printf("Введите длину круга: ");
    scanf("%lf", &length_circle);
    return length_circle;
}
