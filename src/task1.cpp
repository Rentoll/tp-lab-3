#include <cmath>
#include "task1.h"
#include "Circle.h"

double calcDelta() {
	double oldRadius = 6378100.0;
	Circle Earth(oldRadius);
	Earth.setFerence(Earth.getFerence() + 1);
	return Earth.getRadius() - oldRadius;
}

double calcCost() {
	double radiusOfPool = 3.0;
	Circle SwimmingPool(radiusOfPool);
	Circle Track(radiusOfPool + 1);
	return (Track.getArea() - SwimmingPool.getArea()) * 1000 + Track.getFerence() * 2000;
}

