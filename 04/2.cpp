#include <iostream>
using namespace std;

class Circle {
	public:
		// The radius of this circle
		double radius;
		
		// Construct a circle object
		Circle() {
			radius = 1;
		}
		
		// Construct a circle object
		Circle(double newRadius) {
			radius = newRadius;
		} 
		
		// Return the area of this circle
		double getArea() {
			return radius * radius * 3.14159;
		}
};

int main() {
	Circle circle1;
	Circle *pCircle = &circle1;
	
	cout << "The radius is " << (*pCircle).radius << endl;
	cout << "The area is " << (*pCircle).getArea() << endl;
	
	(*pCircle).radius = 5.5;
	
	cout << "The radius is " << pCircle->radius << endl;
	cout << "The area is " << pCircle->getArea() << endl;
	
	return 0; 
} 
