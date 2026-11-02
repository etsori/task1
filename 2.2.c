#include <stdio.h>
#include <math.h>
#include <stdlib.h> 

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double sendValue();

/**
 * @brief Вычисляет первую функцию по формуле e ** ax - 2.5
 * @param x задает пользователь
 * @param a константа
 * @return Вычисленное значение
 */
double Function1(const double x, const double a);

/**
 * @brief Вычисляет вторую функцию по формуле a/x + sin(x)
 * @param x задает пользователь
 * @param a константа
 * @return Вычисленное значение
 */
double Function2(const double x, const double a);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно
 */
int main() {
    double x = sendValue();
    const double a = 1.6;

    if (x == a) {
        printf("x равен a. Такое невозможно\n");
        return 0;
    }

    if (x > a) {
        double F1 = Function1(x, a);
        printf("Результат: %lf\n", F1);
    } else if (x < a) {
        double F2 = Function2(x, a);
        printf("Результат: %lf\n", F2);
    }

    return 0;
}

double sendValue() {
    double x = 0.0;
    printf("Введите значение x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Ошибка ввода!\n");
        exit(1);
    }
    return x;
}

double Function1(const double x, const double a) {
    return exp(a * x) - 2.5;
}

double Function2(const double x, const double a) {
    return a / x + sin(x);
}
