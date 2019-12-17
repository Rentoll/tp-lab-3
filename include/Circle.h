#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
    double radius, ference, area;
public:
    const double PI = 3.14;

    Circle(double newRadius);

    int setRadius(double newRadius);
    int setFerence(double newFerence);
    int setArea(double newArea);

    int getRadius();
    int getFerence();
    int getArea();
};

#endif

