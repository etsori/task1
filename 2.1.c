#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 * @brief Перечисление доступных операций для работы с треугольником.
 * @brief Операция для вычисления только периметра треугольника
 * @brief Операция для вычисления только площади треугольника
 * @brief Операция для одновременного вычисления и периметра, и площади
 * Используется в главном меню программы для управления логикой switch-case.
 */
enum TriangleOperation {
    PERIMETER = 1,
    AREA,
    BOTH
};

/**
 * @brief Считывает одно число с клавиатуры
 * @return Введенное число типа double (при ошибке завершает программу)
 */
double input_coordinate();

/**
 * @brief Вычисляет расстояние между двумя точками (длину стороны) по их координатам
 * @param x1 Координата X первой точки
 * @param y1 Координата Y первой точки
 * @param x2 Координата X второй точки
 * @param y2 Координата Y второй точки
 * @return Расстояние между точками в виде double
 */
double get_side_length(double x1, double y1, double x2, double y2);

/**
 * @brief Вычисляет периметр треугольника по длинам трех сторон
 * @param a Длина первой стороны
 * @param b Длина второй стороны
 * @param c Длина третьей стороны
 * @return Вычисленный периметр
 */
double perimeter(const double a, const double b, const double c);

/**
 * @brief Вычисляет площадь треугольника по формуле Герона
 * @param a Длина первой стороны
 * @param b Длина второй стороны
 * @param c Длина третьей стороны
 * @return Вычисленная площадь
 */
double area(const double a, const double b, const double c);

/**
 * @brief Проверяет существование треугольника по трем сторонам
 * @param a Длина первой стороны
 * @param b Длина второй стороны
 * @param c Длина третьей стороны
 * @return 1, если треугольник существует, иначе 0
 */
int is_triangle_valid(const double a, const double b, const double c);

/**
 * @brief Точка входа в программу
 * @return 0 при успешном завершении, иначе 1
 */
int main() {
    int choice = 0;

    printf("Введите x1: ");
    double x1 = input_coordinate();

    printf("Введите y1: ");
    double y1 = input_coordinate();

    printf("Введите x2: ");
    double x2 = input_coordinate();

    printf("Введите y2: ");
    double y2 = input_coordinate();

    printf("Введите x3: ");
    double x3 = input_coordinate();

    printf("Введите y3: ");
    double y3 = input_coordinate();

    double a = get_side_length(x1, y1, x2, y2);
    double b = get_side_length(x2, y2, x3, y3);
    double c = get_side_length(x3, y3, x1, y1);

    if (is_triangle_valid(a, b, c) == 0) {
        printf("Ошибка: Треугольник с такими координатами не существует (точки лежат на одной линии).\n");
        return 1;
    }

    printf("\nВыберите операцию:\n");
    printf("%d - Найти периметр\n", PERIMETER);
    printf("%d - Найти площадь\n", AREA);
    printf("%d - Найти и периметр, и площадь\n", BOTH);
    printf("Ваш выбор: ");

    if (scanf("%d", &choice) != 1) {
        printf("Ошибка: Неверный ввод пункта меню.\n");
        return 1;
    }

    switch ((enum TriangleOperation) choice) {
        case PERIMETER:
            printf("\nПериметр треугольника: P = %.4f\n", perimeter(a, b, c));
            break;
        case AREA:
            printf("\nПлощадь треугольника: S = %.4f\n", area(a, b, c));
            break;
        case BOTH:
            printf("\nПериметр: P = %.4f\nПлощадь: S = %.4f\n", perimeter(a, b, c), area(a, b, c));
            break;
        default:
            printf("\nОшибка: Неверный пункт меню.\n");
            return 1;
    }

    return 0;
}


double get_side_length(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int is_triangle_valid(const double a, const double b, const double c) {
    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        return 0;
    }
    return 1;
}

double perimeter(const double a, const double b, const double c) {
    return a + b + c;
}

double area(const double a, const double b, const double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double input_coordinate() {
    double value = 0.0;
    if (scanf("%lf", &value) != 1) {
        printf("Ошибка ввода! Завершение программы.\n");
        exit(1);
    }
    return value;
}
