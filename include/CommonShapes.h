#pragma once

#include "Shape.h"

//// Circle

class Circle: public Shape {
    double radius;

public:
    explicit Circle(double _radius);
    std::string type() const override;
    double square() const override;
    BoundingBoxDimensions dimensions() const override;
};

//// Rectangle

class Rectangle: public Shape {
    double sideA;
    double sideB;

public:
    Rectangle(double _sideA, double _sideB);
    std::string type() const override;
    double square() const override;
    BoundingBoxDimensions dimensions() const override;
};

//// Trinagle

class Triangle: public Shape {
    double sideA;
    double sideB;
    double sideC;

public:
    Triangle(double _sideA, double _sideB, double _sideC);
    std::string type() const override;
    double square() const override;
    BoundingBoxDimensions dimensions() const override;
};