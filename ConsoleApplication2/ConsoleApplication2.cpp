#include <iostream>
#include <cmath>

const double PI = 3.14;  // Задаем значение PI вручную

// Функция для вычисления площади круга
double Area(double radius) {
    return PI * radius * radius;
}

// Функция для вычисления площади кольца
double calculateArea(double vneshniRadius, double vnutriRadius) {
    double vneshniRadius = Area(vneshniRadius);
    double vnutriRadius = Area(vnutriRadius);

    return vneshniRadius - vnutriRadius;
}

int main() {
    setlocale(LC_ALL, "Rus");
    double vneshniRadius, vnutriRadius;
    std::cout << "Введите внешний радиус кольца: ";
    std::cin >> vneshniRadius;
    std::cout << "Введите внутренний радиус кольца: ";
    std::cin >> vnutriRadius;

    

    double ringArea = calculateArea(vneshniRadius, vnutriRadius);
    std::cout << "Площадь кольца: " << ringArea << std::endl;

    return 0;
}