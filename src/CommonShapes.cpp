#include "CommonShapes.h"
#include <cmath>

//// Circle

Circle::Circle(double _radius) {
    radius = _radius;
}

std::string Circle::type() const {
    return "Circle";
}

double Circle::square() const {
    return M_PI * radius * radius;
}

BoundingBoxDimensions Circle::dimensions() const {
    BoundingBoxDimensions result = {.width = radius * 2, .height = radius * 2};
    return result;
}

//// Rectangle

Rectangle::Rectangle(double _sideA, double _sideB) {
    sideA = _sideA;
    sideB = _sideB;
}

std::string Rectangle::type() const {
    return "Rectangle";
}

double Rectangle::square() const {
    return sideA * sideB;
}

BoundingBoxDimensions Rectangle::dimensions() const {
    BoundingBoxDimensions result = {.width = sideA, .height = sideB};
    return result;
}

//// Triangle

Triangle::Triangle(double _sideA, double _sideB, double _sideC) {
    sideA = _sideA;
    sideB = _sideB;
    sideC = _sideC;
}

std::string Triangle::type() const {
    return "Triangle";
}

double Triangle::square() const {
    double p = (sideA + sideB + sideC) / 2;
    return std::sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));
}

BoundingBoxDimensions Triangle::dimensions() const {
    double p = (sideA + sideB + sideC) / 2;
    double r = sideA * sideB * sideC / (4 * std::sqrt(p * (p - sideA) * (p - sideB) * (p - sideC)));
    BoundingBoxDimensions result = {.width = r * 2, .height = r * 2};
    return result;
}