#include <iostream>
#include "CommonShapes.h"

int main() {
    Triangle triangle(3, 4, 5);
    Shape::printParams(&triangle);

    std::cout << std::endl;
    Rectangle rect(3, 4);
    Shape::printParams(&rect);

    std::cout << std::endl;
    Circle circle(3);
    Shape::printParams(&circle);
}
