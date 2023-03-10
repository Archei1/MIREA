#include <iostream>
#include "figure.h"

int main() {

    float x1, x2, x3, x4, y1, y2, y3, y4;
    std::cout << "Enter the x and y coordinates of the four vertices of the first quadrilateral: ";
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    Figure quadrilateral1(x1, x2, x3, x4, y1, y2, y3, y4);

    std::cout << "Quadrilateral 1:\n";
    quadrilateral1.show();
    std::cout << "Is rectangle? " << std::boolalpha << quadrilateral1.is_Prug() << '\n';
    std::cout << "Is square? " << std::boolalpha << quadrilateral1.is_Square() << '\n';
    std::cout << "Is rhombus? " << std::boolalpha << quadrilateral1.is_Romb() << '\n';
    std::cout << "Can be inscribed? " << std::boolalpha << quadrilateral1.is_In_Circle() << '\n';
    std::cout << "Can inscribe? " << std::boolalpha << quadrilateral1.is_Out_Circle() << '\n';


    std::cout << "\nEnter the x and y coordinates of the four vertices of the second quadrilateral: ";
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    Figure quadrilateral2(x1, x2, x3, x4, y1, y2, y3, y4);

    std::cout << "Quadrilateral 2:\n";
    quadrilateral2.show();
    std::cout << "Is rectangle? " << std::boolalpha << quadrilateral2.is_Prug() << '\n';
    std::cout << "Is square? " << std::boolalpha << quadrilateral2.is_Square() << '\n';
    std::cout << "Is rhombus? " << std::boolalpha << quadrilateral2.is_Romb() << '\n';
    std::cout << "Can be inscribed? " << std::boolalpha << quadrilateral2.is_In_Circle() << '\n';
    std::cout << "Can inscribe? " << std::boolalpha << quadrilateral2.is_Out_Circle() << '\n';


    std::cout << "\nEnter the x and y coordinates of the four vertices of the third quadrilateral: ";
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    Figure quadrilateral3(x1, x2, x3, x4, y1, y2, y3, y4);

    std::cout << "Quadrilateral 3:\n";
    quadrilateral3.show();
    std::cout << "Is rectangle? " << std::boolalpha << quadrilateral3.is_Prug() << '\n';
    std::cout << "Is square? " << std::boolalpha << quadrilateral3.is_Square() << '\n';
    std::cout << "Is rhombus? " << std::boolalpha << quadrilateral3.is_Romb() << '\n';
    std::cout << "Can be inscribed? " << std::boolalpha << quadrilateral3.is_In_Circle() << '\n';
    std::cout << "Can inscribe? " << std::boolalpha << quadrilateral3.is_Out_Circle() << '\n';
}
