#include <iostream>
#include <cmath>

const double PI = 3.14;  // Задаем значение PI вручную

// Функция для вычисления площади круга
double Area(double radius) {
    return PI * radius * radius;
}

// Функция для вычисления площади кольца
double calculateArea(double outerRadius, double innerRadius) {
    double vneshniRadius = Area(vneshniRadius);
    double vnutriRadius = Area(vnutriRadius);

    return outerCircleArea - innerCircleArea;
}

int main() {
    setlocale(LC_ALL, "Rus");
    double vneshniRadius, vnutriRadius;
    std::cout << "Введите внешний радиус кольца: ";
    std::cin >> vneshniRadius;
    std::cout << "Введите внутренний радиус кольца: ";
    std::cin >> vnutriRadius;

    if (vneshniRadius <= vnutriRadius) {
        std::cerr << "Ошибка: Внешний радиус должен быть больше внутреннего." << std::endl;
        return 1; // Возврат кода ошибки
    }

    double ringArea = Area(vneshniRadius, vnutriRadius);
    std::cout << "Площадь кольца: " << ringArea << std::endl;

    return 0;
}