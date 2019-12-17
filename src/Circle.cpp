#include <cmath>
#include "Circle.h"

Circle::Circle(double newRadius) {
    radius = newRadius;
    area = PI * radius * radius;
    ference = 2 * PI * radius;
}

Circle::setRadius(double newRadius) {
    radius = newRadius;
    area = PI * radius * radius;
    ference = 2 * PI * radius;
}

Circle::setFerence(double newFerence) {
    ference = newFerence;
    radius = ference/(2*PI);
    area = PI*radius*radius;
}

Circle::setArea(double newArea) {
    area = newArea;
    radius = sqrt(area/PI);
    ference = 2*PI*radius;
}

Circle::getRadius() {
    return radius;
}

Circle::getFerence() {
    return ference;
}

Circle::getArea() {
    return area;
}

