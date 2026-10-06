#include <stdio.h>
#include <math.h>

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение, либо 0.0 в случае ошибки ввода
 */
double sendValue();

/**
 * @brief Вычисляет давление воды на дно цистерны по формуле: P = rho * g * h
 * @param height Высота столба жидкости / глубина наполнения цистерны (м)
 * @param rho Плотность жидкости (кг/м³)
 * @param g Ускорение свободного падения (м/с²)
 * @return Вычисленное значение давления (Па)
 */
double Pressure_Water(const double height, const double rho, const double g);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main() {
    double height = sendValue();
    const double rho = 1000.0;
    const double g = 9.81;

    double P = Pressure_Water(height, rho, g);
    printf("P =  %.4f\n", P);
    return 0;
}

double Pressure_Water(const double height, const double rho, const double g) {
    return height * g * rho;
}

double sendValue() {
    double height = 0.0;
    printf("Введите высоту столба: ");
    if (scanf("%lf", &height) != 1) {
        printf("Ошибка ввода! Будет использовано значение: 0.0\n");
    }

    return height;
}
