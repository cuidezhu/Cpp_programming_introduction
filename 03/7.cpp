#include <iostream>

void printArea(double radius = 1);
int main() {
	printArea();
	printArea(4);
	return 0; 
}

void printArea(double radius) {
	double area = radius * radius * 3.14159;
	std::cout << "area is " << area << std::endl;
}


