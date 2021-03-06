#include "Rectangle2.h"

// Construct a default rectangle object
Rectangle::Rectangle() {
	width_ = 1;
	height_ = 1;
}

// Construct a rectangle object with specified width and height
Rectangle::Rectangle(double width, double height) {
	width_ = width;
	height_ = height;
}

// Return the width of this rectangle
double Rectangle::getWidth() {
	return width_;
}

// Set a new radius
void Rectangle::setWidth(double width) {
	width_ = (width >= 0) ? width : 0;
} 

// Return the height of this rectangle
double Rectangle::getHeight() {
	return height_;
}

// Set a new height
void Rectangle::setHeight(double height) {
	height_ = (height >= 0) ? height : 0;
}

// Return the perimeter of this rectanble
double Rectangle::getPerimeter() {
	return 2 * (width_ + height_); 
}

double Rectangle::getArea() {
	return width_ * height_;
}
