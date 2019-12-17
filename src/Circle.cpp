#include <cmath>
#include "Circle.h"

Circle::Circle(double newRadius) {
    radius = newRadius;
    area = PI * radius * radius;
    ference = 2 * PI * radius;
}

void Circle::setRadius(double newRadius) {
    radius = newRadius;
    area = PI * radius * radius;
    ference = 2 * PI * radius;
}

void Circle::setFerence(double newFerence) {
    ference = newFerence;
    radius = ference/(2*PI);
    area = PI*radius*radius;
}

void Circle::setArea(double newArea) {
    area = newArea;
    radius = sqrt(area/PI);
    ference = 2*PI*radius;
}

double Circle::getRadius() {
    return radius;
}

double Circle::getFerence() {
    return ference;
}

double Circle::getArea() {
    return area;
}

