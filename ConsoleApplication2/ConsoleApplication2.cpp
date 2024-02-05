#include <iostream>
#include <cmath>

const double PI = 3.14;  // Задаем значение PI вручную

// Функция для вычисления площади круга
double calculateCircleArea(double radius) {
    return PI * radius * radius;
}

// Функция для вычисления площади кольца
double calculateRingArea(double outerRadius, double innerRadius) {
    double outerCircleArea = calculateCircleArea(outerRadius);
    double innerCircleArea = calculateCircleArea(innerRadius);

    return outerCircleArea - innerCircleArea;
}

int main() {
    setlocale(LC_ALL, "Rus");
    double outerRadius, innerRadius;
    std::cout << "Введите внешний радиус кольца: ";
    std::cin >> outerRadius;
    std::cout << "Введите внутренний радиус кольца: ";
    std::cin >> innerRadius;

    if (outerRadius <= innerRadius) {
        std::cerr << "Ошибка: Внешний радиус должен быть больше внутреннего." << std::endl;
        return 1; // Возврат кода ошибки
    }

    double ringArea = calculateRingArea(outerRadius, innerRadius);
    std::cout << "Площадь кольца: " << ringArea << std::endl;

    return 0;
}