#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
    double radius, ference, area;
public:
    const double PI = 3.14;

    Circle(double newRadius);

    void setRadius(double newRadius);
    void setFerence(double newFerence);
    void setArea(double newArea);

    int getRadius();
    int getFerence();
    int getArea();
};

#endif

