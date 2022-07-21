#include <iostream>
#include "Shape.h"

void Shape::printParams(Shape* shape) {
    std::cout << "Type: " << shape->type() << std::endl;
    std::cout << "Square: " << shape->square() << std::endl;

    BoundingBoxDimensions bbox = shape->dimensions();
    std::cout << "Width: " << bbox.width << std::endl;
    std::cout << "Height: " << bbox.height << std::endl;
};