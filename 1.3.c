#include <stdio.h>
#include <math.h>


/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double sendValue();

/**
 * @brief Считает давление воды на дно цистерны по формуле : P = p * g *h
 * где P - это давление воды на дно цистерны
* p - плотность жидкости (для чистой воды 1000 кг/м**3)
* g - ускорение свободного падения(9.81)
* h -  высота столба жидкости / глубина наполнения цистерны
 * @return Считанное значение
 */
double Pressure_Water(double height, double rho, double g);

/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main() {
    double height = sendValue();
    const double rho = 1000;
    const double g = 9.81;

    double P = Pressure_Water(height, rho, g);
    printf("P =  %.4f\n", P);
    return 0;
}

double Pressure_Water(double height, double rho, double g) {
    return height * g * rho;
}


double sendValue() {
    double height = 0.0;
    printf("Введите высоту столба: ");
    scanf("%lf", &height);
    return height;
}
