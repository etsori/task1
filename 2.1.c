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
