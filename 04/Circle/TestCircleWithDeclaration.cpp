#include <iostream>
#include "Circle.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	Circle circle1;
	Circle circle2(5.0);
	
	cout << "The area of the circle of radius " << circle1.radius << " is " << circle1.getArea() << endl; 
	cout << "The area of the circle of radius " << circle2.radius << " is " << circle2.getArea() << endl;
	
	// Modify circle radius
	circle2.radius = 100.0;
	cout << "The area of the circle of radius " << circle2.radius << " is " << circle2.getArea() << endl;
 	
	return 0;
} 
