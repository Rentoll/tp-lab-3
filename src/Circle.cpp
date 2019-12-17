#include <cmath>
#include "Circle.h"

Circle::Circle(double newRadius) {
    this->radius = newRadius;
    this->area = PI * this->radius * this->radius;
    this->ference = 2 * PI * this->radius;
}

Circle::setRadius(double newRadius) {
    this->radius = newRadius;
    this->area = PI * this->radius * this->radius;
    this->ference = 2 * PI * this->radius;
}

Circle::setFerence(double newFerence) {
    this->ference = newFerence;
    this->radius = this->ference/(2*PI);
    this->area = PI*this->radius*this->radius;
}

Circle::setArea(double newArea) {
    this->area = newArea;
    this->radius = sqrt(this->area/PI);
    this->ference = 2*PI*this->radius;
}

Circle::getRadius() {
    return this->radius;
}

Circle::getFerence() {
    return this->ference;
}

Circle::getArea() {
    return this->area;
}

