#include <stdio.h>
#include <math.h>


/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение, либо 0.0 в случае ошибки ввода
 */
double sendValue();


/**
 * @brief Вычисляет первую функцию по формуле  e ** ax - 2.5
 * @param x задает пользователь
 * @param a = 1.6 - константа 
 * @return Вычисленное значение 
 */
double Function1(const double x, const double a);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main() {
    double x = sendValue();
    const double a = 1.6;
    double F1 = Function1(x, a)
    double F2 = Function2(x, a)
  
    return 0;
}





double sendValue() {
    double x = 0.0;
    printf("Введите значение x: ");
    if (scanf("%lf", &height) != 1) {
        printf("Ошибка ввода! Будет использовано значение: 0.0\n");
        exit(1)
    }
