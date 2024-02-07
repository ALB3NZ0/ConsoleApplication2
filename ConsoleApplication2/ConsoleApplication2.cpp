#include <iostream>
#include <cmath>

const double PI = 3.14;  

// вычисления площади круга
int Area(int radius) {
    return PI * radius * radius;
}

//  вычисления площади кольца
int calculateArea(int vneshniRadius, int vnutriRadius) {
    int vneshniArea = Area(vneshniRadius);
    int vnutriArea = Area(vnutriRadius);

    return vneshniArea - vnutriArea;
}

int main() {
    setlocale(LC_ALL, "Rus");
    int vneshniRadius, vnutriRadius;
    std::cout << "Введите внешний радиус кольца: ";
    std::cin >> vneshniRadius;
    std::cout << "Введите внутренний радиус кольца: ";
    std::cin >> vnutriRadius;

    int ringArea = calculateArea(vneshniRadius, vnutriRadius);
    std::cout << "Площадь кольца: " << ringArea << std::endl;

    return 0;
}