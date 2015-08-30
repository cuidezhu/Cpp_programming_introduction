#include "Circle6.h"

int Circle::numberOfObjects = 0;

// Constructor a circle object
Circle::Circle() {
	radius = 1;
	numberOfObjects++;
}

// Constructor a circle object
Circle::Circle(double radius) {
	this->radius = radius;
	numberOfObjects++;
}

//Return the area of the circle
double Circle::getArea() {
	return radius * radius * 3.14159;
}

// Return the radius of this circle
double Circle::getRadius() {
	return radius;
}

// Set a new radius
void Circle::setRadius(double radius) {
	this->radius = (radius >= 0) ? radius : 0;
}

// Return the number of the circle objects
int Circle::getNumberOfObjects() {
	return numberOfObjects;
}

// Destructor a circle object
Circle::~Circle() {
	numberOfObjects--;
}
