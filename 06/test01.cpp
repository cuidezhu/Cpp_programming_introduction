#include <iostream>
#include <string>

class GeometricObject {
	public:
		std::string toString() {
			return "parent";
		}
};

class Circle: public GeometricObject {
	public:
		std::string toString() {
			return "child";
		}
		void g() {
			std::cout << toString();
		}
};

int main() {
	Circle circle;
	std::cout << circle.toString();
	circle.GeometricObject::toString();
	
	return 0;
}
