#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
    double radius, ference, area;
public:
    const double PI = 3.14;

    Circle(double);

    int setRadius(double);
    int setFerence(double);
    int setArea(double);

    int getRadius();
    int getFerence();
    int getArea();
};

#endif

