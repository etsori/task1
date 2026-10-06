#include <stdio.h>
#include <math.h>


/**
 * @brief Считывает с клавиатуры значение трех сторон треуголька
 * @return Считанное значение, либо 0.0, 0.0, 0.0 в случае ошибки ввода
 */
double sendValue();

/**
 * @brief Вычисляет периметр треугольника по формуле: P = side1 + side2 + side3
 * @param side1 - первая сторона треуголька
 * @param side2 -  вторая сторона треуголька
 * @param side3 - третья сторона треугольника
 * @return Вычисленный периметр
 */
double Perimetr_triangle(const double side1, const double side2, const double side3);

/**
 * @brief Вычисляет площадь треугольника по формуле: P = side1 * side2 * side3
 * @param side1 - первая сторона треуголька
 * @param side2 -  вторая сторона треуголька
 * @param side3 - третья сторона треугольника
 * @return Вычисленная площадь
 */
double Square_triangle(const double side1, const double side2, const double side3);



/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main() {
    const double side1 = sendValue();
    const double side2 = sendValue();
    const double side3 = sendValue();

    double P = Perimetr_triangle(side1, side2, side3);
    double S = Perimetr_triangle(side1, side2, side3);
    printf("P =  %.4f\nS =  %.4f\n", P, S);
    return 0;
}
